#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSql>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCurrentWidget(ui->loginPage); // set login page as start page
    ui->usernameEdit->setFocus();
    
    // setup database connection
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setDatabaseName("cbteDB");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("projosh10");
    
    if (!database.open()) {
        QMessageBox::critical(this, "Connection error", 
                              "Could not connect to the database!");
        qFatal("Database connection error: %s", qPrintable(database.lastError().text()));
    } else {
        // create table users
        QSqlQuery query;
        if (!query.exec("CREATE TABLE IF NOT EXISTS Users ("
                        "id int PRIMARY KEY auto_increment,"
                        "firstname varchar(25) NOT NULL,"
                        "lastname varchar(25) NOT NULL,"
                        "passcode varchar(255) NOT NULL UNIQUE,"
                        "is_admin boolean NOT NULL DEFAULT FALSE,"
                        "avatar BLOB,"
                        "date_created TIMESTAMP DEFAULT CURRENT_TIMESTAMP"
                        ")")) {
            qFatal("Could not create table `Users`: %s", qPrintable(query.lastError().text()));
        }
        
        // create user subject relationship table
        if (!query.exec("CREATE TABLE IF NOT EXISTS User_Subjects ("
                        "id int PRIMARY KEY NOT NULL AUTO_INCREMENT,"
                        "userId INT REFERENCES Users(id) on delete cascade,"
                        "subjectId INT REFERENCES Subjects(id) on delete cascade"
                        ")")) {
            qFatal("Could not create table User_Subjects: %s", qPrintable(query.lastError().text()));
        }
        
        // insert a default admin profile
        QFile file(":/images/user-secret.svg");
        if (!file.open(QIODevice::ReadOnly))
            return;
        
        QByteArray byteArray = file.readAll();
        
        query.prepare("INSERT IGNORE INTO Users (firstname, lastname, passcode, is_admin, "
                      "avatar) VALUES(:firstname, :lastname, :passcode, :is_admin, :avatar)");
        query.bindValue(":firstname", "Admin");
        query.bindValue(":lastname", "Super");
        query.bindValue(":passcode", "admin@123");
        query.bindValue(":is_admin", 1);
        query.bindValue(":avatar", byteArray);
        if (!query.exec())
            qWarning() << "Could not insert data, reason:" << query.lastError().text();
    }
    
    // initialize admin window and registration window
    // registration window opens first before mainwindow
    adminManager = new QuestionManager();
    registerInterface = new RegisterDialog(this);
    
    registerInterface->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginBtn_clicked()
{   
    // check for incomplete form fill
    if (ui->usernameEdit->text().isEmpty() || ui->passcodeEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Missing Credentials"), 
                                 tr("Please fill in both fields correctly!"));
        
        if (ui->usernameEdit->text().isEmpty())
            ui->usernameEdit->setFocus();
        else
            ui->passcodeEdit->setFocus();
        return;
    }
    
    QString lstnm = ui->usernameEdit->text();
    QString pswd = ui->passcodeEdit->text();
    
    QSqlQuery query;
    if (query.exec(QString("SELECT id, firstname, lastname, is_admin, avatar FROM Users "
                           "WHERE lastname='%1' AND passcode='%2'").arg(lstnm).arg(pswd))) {
        while (query.next()) {
            userId = query.value(0).toString();
            firstname = query.value(1).toString();
            lastname = query.value(2).toString();
            isAdmin = query.value(3).toBool();
            bytePix = query.value(4).toByteArray();
            
            fullname = lastname + " " + firstname;
            
            if (isAdmin) {
                // direct to admin window and clear field
                this->showMinimized();
                adminManager->showMaximized();
                adminManager->setAdminName(fullname);
                adminManager->setAdminProfilePix(bytePix);
                ui->usernameEdit->clear();
                ui->passcodeEdit->clear();
                ui->usernameEdit->setFocus();
            } else if (!isAdmin) {
                // direct to summary page and clear field after successful validation
                this->setCurrentWidget(ui->summaryPage);
                QPixmap pix = QPixmap();
                pix.loadFromData(bytePix);
                ui->usersPix->setPixmap(pix);
                ui->fullnameLbl->setText(tr("Name: ") + fullname);
                
                // TODO: set subject combinations from database and total time for exam
                if (query.exec(QString("select Subjects.title, Subjects.time_alloted from Subjects inner join User_Subjects on User_Subjects.subjectId=Subjects.id inner join Users on Users.id=User_Subjects.userId where Users.id='%1'").arg(userId))) {
                    
                    while (query.next()) {
                        subjectList.append(query.value(0).toString());
                        timeList.append(query.value(1).toString());
                    }
                    
                    QString var;
                    foreach (var, subjectList) {
                        ui->combinationLbl->setText(ui->combinationLbl->text().append("\u2022" + var) + "\t");
                    }
                    
                    // setting time from database
                    int hr = 0, min = 0, sec = 0;
                    foreach (var, timeList) {
                        QTime t = QTime::fromString(var, "hh:mm:ss");
                        hr += t.hour();
                        min += t.minute();
                        sec += t.second();
                    }
                    
                    time = new QTime(hr, min, sec);
                    
                    if (hr > 0) {
                        if (hr == 1)
                            ui->timeAllocatedLbl->setText(ui->timeAllocatedLbl->text().append(QString::number(time->hour()) + " hour " + QString::number(time->minute()) + "minutes"));
                        else
                            ui->timeAllocatedLbl->setText(ui->timeAllocatedLbl->text().append(QString::number(time->hour()) + " hours " + QString::number(time->minute()) + "minutes"));
                    } else  {
                        if (min > 0)
                            ui->timeAllocatedLbl->setText(ui->timeAllocatedLbl->text().append(QString::number(time->minute()) + " minutes"));
                    }
                } else {
                    qDebug() << query.lastError().text();
                }
            } else {
                // error with either username or password not matching
                qDebug() << lastname;
                QMessageBox::information(this, tr("Error logging in..."),
                                         tr("Either username or password is not correct"));
                return;
            }
        }
    } else {
        // query fails to run
        qDebug() << query.lastError().text();
        QMessageBox::information(this, tr("Incorrect Details"), 
                                 tr("Username or Password is incorrect!"));
        return;
    }
}

void MainWindow::on_quitBtn_clicked()
{
    ui->fullnameLbl->clear();
    ui->combinationLbl->clear();
    ui->timeAllocatedLbl->setText("Time allocated: ");
    this->setCurrentWidget(ui->loginPage);
    ui->passcodeEdit->clear();
    ui->usernameEdit->setFocus();
}

void MainWindow::on_startBtn_clicked()
{
    this->setCurrentWidget(ui->examPage);
    
    ui->candidateNameLbl->setText(QString(lastname.at(0)) + ". " + firstname);
    QPixmap userDp;
    userDp.loadFromData(bytePix);
    ui->userExamPics->setPixmap(userDp);
    
    ui->tabWidget->tabBar()->removeTab(0);
    
    QString var;
    foreach (var, subjectList) {
        ui->tabWidget->tabBar()->addTab(var);
    }
    
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start(1000);
    
    // flash timer when we get to 5min and below
}

void MainWindow::on_submitBtn_clicked()
{
    QMessageBox msgBox;
    msgBox.setText(tr("You are about to submit finally!"));
    msgBox.setInformativeText(tr("Check that you've answered all questions. Submit finally?"));
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    int reply = msgBox.exec();
    
    switch (reply) {
    case QMessageBox::Yes:
        QMessageBox::information(this, tr("Submitted successfully!"),
                                 tr("Please, await your result in 24hrs"));
        timer->stop();
        ui->fullnameLbl->clear();
        ui->combinationLbl->clear();
        ui->timeAllocatedLbl->setText("Time allocated: ");
        this->setCurrentWidget(ui->loginPage);
        ui->usernameEdit->clear();
        ui->passcodeEdit->clear();
        ui->usernameEdit->setFocus();
        break;
    default:
        break;
    }
}

void MainWindow::updateTimer()
{
    if (time->isValid())
        time->setHMS(time->addSecs(-1).hour(), time->addSecs(-1).minute(), time->addSecs(-1).second());
    
    if (time->hour() == 0 && time->minute() == 0 && time->second() == 0) {
        timer->stop();
        QMessageBox::information(this, tr("Time up!"), 
                                 tr("Your time is up, Thank you. Automatic"
                                    " submission has been done for you"));
        this->setCurrentWidget(ui->loginPage);
        ui->usernameEdit->clear();
        ui->passcodeEdit->clear();
        ui->usernameEdit->setFocus();
    }   
    
    ui->timeLeftLbl->setText(tr("TIME LEFT: ") + time->toString(tr("hh:mm:ss")));
}
