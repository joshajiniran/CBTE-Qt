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
    this->showMaximized();
    this->setCurrentWidget(ui->loginPage); // set login page as start page
    ui->usernameEdit->setFocus();
    
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("cbteDB");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("projosh10");
    
    if (!db.open()) {
        QMessageBox::critical(this, "Connection error", 
                              "Could not connect to the database!");
        qDebug() << db.lastError().text();
    }
    
    // initialize admin window
    adminManager = new QuestionManager();
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
    
    QString usnm = ui->usernameEdit->text();
    QString pswd = ui->passcodeEdit->text();
    
    QSqlQuery query;
    if (query.exec(QString("SELECT firstname, lastname, username, isAdmin FROM users "
                   "WHERE username='%1' AND passcode='%2'").arg(usnm).arg(pswd))) {
        while (query.next()) {
            firstname = query.value(0).toString();
            lastname = query.value(1).toString();
            fullname = firstname + " " + lastname;
            username = query.value(2).toString();
            isAdmin = query.value(3).toBool();
            
            if (isAdmin) {
                // direct to admin window and clear field
                adminManager->showMaximized();
                adminManager->setAdminName(username);
                ui->usernameEdit->clear();
                ui->passcodeEdit->clear();
                ui->usernameEdit->setFocus();
            } else {
                // direct to summary page and clear field after successful validation
                this->setCurrentWidget(ui->summaryPage);
                ui->fullnameLbl->setText(tr("Name: ") + fullname);
                ui->usernameLbl->setText(tr("Username: ") + username);
            }
        }
    } else {
        qDebug() << query.lastError().text();
    }
}

void MainWindow::on_quitBtn_clicked()
{
    ui->fullnameLbl->clear();
    ui->usernameLbl->clear();
    this->setCurrentWidget(ui->loginPage);
    ui->passcodeEdit->clear();
    ui->passcodeEdit->setFocus();
//    ui->combinationLbl->clear();
//    ui->timeAllocatedLbl->clear();
    // TODO: code review here...
}

void MainWindow::on_startBtn_clicked()
{
    this->setCurrentWidget(ui->examPage);
    ui->candidateNameLbl->setText(QString(lastname.at(0)) + ". " + firstname);
    
    int hr = 1;
    int min = 0;
    int sec = 5;
    
    time = new QTime(hr, min, sec);

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
        ui->usernameLbl->clear();
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
    
    if (time->hour() < 1)
        ui->timeLeftLbl->setText(tr("TIME LEFT: ") + time->toString(tr("mm:ss")));
    else
        ui->timeLeftLbl->setText(tr("TIME LEFT: ") + time->toString(tr("hh:mm:ss")));
}
