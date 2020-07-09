#include "questionmanager.h"
#include "ui_questionmanager.h"

#include <QtSql>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QFile>

bool QuestionManager::validator()
{   
    if (ui->subjectList->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Invalid form field"),
                             tr("You have not entered some fields correctly. "
                                "There might be problem committing them!"));
        ui->subjectList->setFocus();
        return false;
    }
    
    if (ui->nQuestions->value() < 1) {
        QMessageBox::warning(this, tr("Invalid form field"),
                             tr("You have not entered some fields correctly. "
                                "There might be problem committing them!"));
        ui->nQuestions->setFocus();
        return false;
    }
    if (ui->nTime->text() == "00:00") {
        QMessageBox::warning(this, tr("Invalid form field"),
                             tr("You have not entered some fields correctly. "
                                "There might be problem committing them!"));
        ui->nTime->setFocus();
        return false;
    }
    
    return true;
}

void QuestionManager::initializer()
{
    ui->subjectList->clear();
    
    model->setQuery("SELECT title FROM Subjects ORDER BY title ASC");
    for (int i = 0; i < model->rowCount(); ++i) {
        QString itemData = model->record(i).value("title").toString();
        ui->subjectList->addItem(itemData);
    }
    
    ui->resetBtn->click();
}

QuestionManager::QuestionManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuestionManager)
{
    ui->setupUi(this);
    ui->candidatesView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->adminStackedWidget->setCurrentIndex(0);
    ui->adminStackedWidget->currentWidget()->setFocus();
    
    registerInterface = new RegisterDialog(this);
    
    QSqlDatabase::database("database", true);
    
    QSqlQuery query;
    
    // create subjects table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Subjects ("
                    "id int PRIMARY KEY not null auto_increment,"
                    "title varchar(25) NOT NULL UNIQUE,"
                    "no_of_questions int NOT NULL,"
                    "time_alloted TIME NOT NULL,"
                    "time_created TIMESTAMP DEFAULT CURRENT_TIMESTAMP()"
                    ")")) {
        qFatal("Could not create table `Subjects`: %s", qPrintable(query.lastError().text()));
    }
    
    // create user subject relationship table
    if (!query.exec("CREATE TABLE IF NOT EXISTS User_Subjects ("
                    "id int PRIMARY KEY NOT NULL AUTO_INCREMENT,"
                    "userId INT REFERENCES Users(id) on delete cascade,"
                    "subjectId INT REFERENCES Subjects(id) on delete cascade"
                    ")")) {
        qFatal("Could not create table User_Subjects: %s", qPrintable(query.lastError().text()));
    }
    
    // create questions table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Questions ("
                    "id int PRIMARY KEY not null,"
                    "question_text text NOT NULL,"
                    "subject_id INT REFERENCES Subjects(id) on delete cascade"
                    ")")) {
        qFatal("Could not create table `Questions`: %s", qPrintable(query.lastError().text()));
    }
    
    // create question's attachment table
    if (!query.exec("create table if not exists Question_Attachment ("
                    "id int primary key auto_increment, "
                    "question_id int not null references Questions(id) on delete cascade, "
                    "subject_id int not null references Subjects(id) on delete cascade, "
                    "content mediumblob"
                    ")")) {
        qFatal("Could not create table `Question_Attachment`: %s", qPrintable(query.lastError().text()));
    }
    
    // create options table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Options ("
                    "id int PRIMARY KEY auto_increment,"
                    "options_text text NOT NULL,"
                    "question_id int NOT NULL REFERENCES Questions(id) on delete cascade, "
                    "subject_id int not null references Subjects(id) on delete cascade"
                    ")")) {
        qFatal("Could not create table `Options`: %s", qPrintable(query.lastError().text()));
    }
    
    // create correct answer table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Answers ("
                    "id int PRIMARY KEY auto_increment, "
                    "question_id int not null references Questions(id) on delete cascade, "
                    "option_id int not null references Options(id) on delete cascade, "
                    "subject_id int not null references Subjects(id) on delete cascade"
                    ")")) {
        qFatal("Could not create table `Options`: %s", qPrintable(query.lastError().text()));
    }
    
    // create User's choice table
    if (!query.exec("CREATE TABLE IF NOT EXISTS User_Choices ("
                    "id int PRIMARY KEY auto_increment, "
                    "question_id int not null references Question(id) on delete cascade, "
                    "option_id int not null references Options(id) on delete cascade, "
                    "subject_id int not null references Subjects(id) on delete cascade, "
                    "is_correct boolean)")) {
        qFatal("Could not create table `User_Choices`: %s", qPrintable(query.lastError().text()));
    }
    
    // populate question list from db for admin
    model = new QSqlQueryModel(this);
    
    // model for widget mapper
    sModel = new EditableSqlQueryModel(this);
    
    // instantiate subject data widget mapper
    mapper = new QDataWidgetMapper;
    
    // instantiate user data widget mapper
    userMapper = new QDataWidgetMapper;
    
    // instantiate question data widget mapper
    questionMapper = new QDataWidgetMapper;
    
    // no of question model
    qModel = new QStringListModel(this);
    
    // populate candidate list from db for admin
    cModel = new QSqlTableModel(this);
    cModel->setTable("Users");
    cModel->setFilter("is_admin=0");
    cModel->select();
    ui->candidatesView->setModel(cModel);
    ui->candidatesView->hideColumn(0);
    ui->candidatesView->hideColumn(4);
    ui->candidatesView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    
    initializer();
}

QuestionManager::~QuestionManager()
{
    delete ui;
}

void QuestionManager::setAdminName(QString &txt)
{
    ui->adminNameLbl->setText("Welcome, " + txt);
}

void QuestionManager::setAdminProfilePix(const QByteArray &pic)
{
    QPixmap pix;
    pix.loadFromData(pic);
    ui->adminDp->setPixmap(pix);
}

void QuestionManager::on_commitBtn_clicked()
{
    // call validation function
    if (!validator())
        return;
    
    subject_name = ui->subjectList->currentText();
    no_of_questions = ui->nQuestions->value();
    allocated_time = ui->nTime->text();
    
    // make changes to the database
    QSqlQuery query;
    query.prepare("INSERT INTO Subjects (title, no_of_questions, time_alloted) "
                  "VALUES (?, ?, ?)");
    query.addBindValue(subject_name);
    query.addBindValue(no_of_questions);
    query.addBindValue(allocated_time);
    if (query.exec())
        QMessageBox::information(this, tr("Successfully commited!"), 
                                 tr("The subject details have been saved! Go ahead to "
                                    "start editing."));
    else
        qDebug() << query.lastError().text();
    
    ui->commitBtn->setEnabled(false);
    initializer();
    ui->subjectList->setCurrentIndex(ui->subjectList->count() - 1);
    ui->editBtn->setEnabled(true);
    ui->editBtn->setFocus();
}

void QuestionManager::on_editBtn_clicked()
{   
    if (validator()) {
        ui->adminStackedWidget->setCurrentWidget(ui->questionAnswerPage);
        ui->editBtn->setEnabled(false);
        
        QStringList questionList;
        QSqlQuery query;
        
        if (query.exec(QString("select title, no_of_questions from Subjects where title='%1'").arg(ui->subjectList->currentText()))) {
            while (query.next()) {
                subject_name = query.value(0).toString();
                no_of_questions = query.value(1).toInt();
            }
            
            ui->currentSubjectLbl->setText("Subject: " + subject_name);
            
            // form clickable buttons with number of questions
            for (int i = 0; i < no_of_questions; i++) {
                questionList.append(QString::number(i+1));
            }
            
            qModel->setStringList(questionList);
        } else {
            qDebug() << query.lastError().text();
        }
    
        ui->nQuestionView->setModel(qModel);
    } else {
        QMessageBox::critical(this, tr("Incomplete Field"), 
                              tr("Some fields are not correctly filled!"));
        return;
    }
}

void QuestionManager::on_resetBtn_clicked()
{
    ui->subjectList->setEnabled(true);
    ui->subjectList->setCurrentIndex(-1);
    ui->nQuestions->setValue(0);
    ui->nTime->clear();
    ui->commitBtn->setEnabled(true);
    ui->editBtn->setEnabled(false);
}

void QuestionManager::on_subjectList_currentIndexChanged(const QString &arg1)
{
    ui->currentSubjectLbl->setText("Subject: ");
    ui->currentSubjectLbl->setText("Subject: " + ui->subjectList->currentText());
    
    ui->commitBtn->setEnabled(false);
    ui->editBtn->setEnabled(true);
    
    sModel->setQuery(QString("SELECT * FROM Subjects WHERE title='%1'").
                     arg(arg1));
    
    // mapping between data model and widgets
    mapper->setModel(sModel);
    mapper->addMapping(ui->nQuestions, 2);
    mapper->addMapping(ui->nTime, 3);
    mapper->toFirst();
}

void QuestionManager::on_listWidget_currentTextChanged(const QString &currentText)
{
    if (currentText == "Subject and Timing")
        ui->adminStackedWidget->setCurrentIndex(0);
    else if (currentText == "Question and Answer")
        ui->adminStackedWidget->setCurrentIndex(1);
    else
        ui->adminStackedWidget->setCurrentIndex(2);
}

void QuestionManager::on_addCandidateBtn_clicked()
{
    registerInterface->show();
    // TODO: 
}

void QuestionManager::on_subjectList_editTextChanged(const QString &arg1)
{
    if (ui->subjectList->findText(arg1, Qt::MatchFixedString | Qt::MatchContains) == -1) {
        ui->commitBtn->setEnabled(true);
        ui->nQuestions->clear();
        ui->nTime->clear();
    } else {
        ui->commitBtn->setEnabled(false);
        
    }
}

void QuestionManager::on_adminStackedWidget_currentChanged(int arg1)
{
    if (arg1 == 0)
        ui->listWidget->setCurrentRow(0);
    else if (arg1 == 1)
        ui->listWidget->setCurrentRow(1);
    else
        ui->listWidget->setCurrentRow(2);
}

void QuestionManager::on_nQuestionView_clicked(const QModelIndex &index)
{
    Q_UNUSED(index)
    qDebug() << index.row();
    // TODO: fetch question from database, map with widget mapper
    questionModel = new QSqlRelationalTableModel(this);
    questionModel->setTable("Options");
}

void QuestionManager::on_candidatesView_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index)
    int row = ui->candidatesView->currentIndex().row();
    cModel->selectRow(row);
    
    registerInterface->show();
}

void QuestionManager::on_rmvCandidateBtn_clicked()
{
    cModel->removeRows(ui->candidatesView->currentIndex().row(), 1);
}

void QuestionManager::on_saveBtn_clicked()
{
    qDebug() << ui->nQuestionView->currentIndex().row();
}
