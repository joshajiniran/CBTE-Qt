#include "questionmanager.h"
#include "ui_questionmanager.h"

#include <QtSql>
#include <QMessageBox>

QuestionManager::QuestionManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuestionManager)
{
    ui->setupUi(this);
    ui->optionsGroup->setVisible(false);
    
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
    
    model = new QSqlTableModel(this, db);
}

QuestionManager::~QuestionManager()
{
    delete ui;
}

void QuestionManager::setAdminName(QString txt)
{
    ui->adminNameLbl->setText("Welcome, " + txt);
}

void QuestionManager::on_commitBtn_clicked()
{
    // validate necessary fields
    if (ui->subjectList->currentIndex() < 0 || ui->nQuestions->value() < 1 
            || ui->nMins->value() < 0) {
        QMessageBox::warning(this, tr("Improper Record!"),
                             tr("You have not entered some fields correctly. "
                                "There might be problem committing them!"));
        return;
    }
    
    model->setTable("subject");
}

void QuestionManager::on_adminTabWidget_currentChanged(int index)
{
    if (index == 2) {
        model->setTable("users");
        model->setFilter("isAdmin = 0");
        model->select();
        ui->candidatesView->setModel(model);
    }
}
