#include "questionmanager.h"
#include "ui_questionmanager.h"

#include <QtSql>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

QuestionManager::QuestionManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuestionManager)
{
    ui->setupUi(this);
    ui->optionsGroup->setVisible(false);
    ui->adminTabWidget->setCurrentIndex(0);
    
    QSqlDatabase::database("db", true);
    
    model = new QSqlQueryModel;
    
    // populate question list from db for admin
    model->setQuery("SELECT * FROM subjects");
    for (int i = 0; i < model->rowCount(); ++i) {
        ui->subjectList->addItem(model->record(i).value("name").toString());
    }
    ui->subjectList->setCurrentIndex(-1);
    
    // set candidate table for admin
    model->setQuery("SELECT * from users WHERE isAdmin='0'");
    ui->candidatesView->setModel(model);
    ui->candidatesView->resizeColumnsToContents();
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
    if (ui->subjectList->currentIndex() < 0 || ui->nQuestions->value() < 1 || 
            ui->nTime->time().hour() < 0 || ui->nTime->time().minute() < 0 ||  
            ui->fileChoiceLbl->text().isEmpty() ||
            ui->fileChoiceLbl->text() == "No file chosen yet") {
        QMessageBox::warning(this, tr("Improper Record!"),
                             tr("You have not entered some fields correctly. "
                                "There might be problem committing them!"));
        return;
    }
    
    QString subject_name = ui->subjectList->currentText();
    QString subject_path = ui->fileChoiceLbl->text();
    int no_of_questions = ui->nQuestions->value();
    QString author = ui->adminNameLbl->text().replace("Welcome, ", "", Qt::CaseSensitive);
    QString allocated_time = ui->nTime->time().toString("hh:mm:ss");
    
    // make changes to the database
    QSqlQuery query;
    query.prepare("INSERT INTO subjects (name, file_path, created_by, "
                  "no_of_questions, time_allocated) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(subject_name);
    query.addBindValue(subject_path);
    query.addBindValue(author);
    query.addBindValue(no_of_questions);
    query.addBindValue(allocated_time);
    if (query.exec()) {
        QMessageBox::information(this, tr("Successfully commited!"), 
                                 tr("The subject details have been saved!"));
    } else {
        qDebug() << query.lastError().text();
    }
}

void QuestionManager::on_selectFileBtn_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Open a question file"), 
                                                    "/home", tr("JSON files (*.json *.txt *.xml)"));
    ui->fileChoiceLbl->setText(fileName);
}

void QuestionManager::on_subjectList_activated(const QString &arg1)
{
    QSqlQueryModel *nModel = new QSqlQueryModel;
    nModel->setQuery(QString("SELECT file_path, no_of_questions, time_allocated"
                             " FROM subjects WHERE name='%1'").arg(arg1));
    mapper = new QDataWidgetMapper;
    mapper->setModel(nModel);
    mapper->addMapping(ui->fileChoiceLbl, 0);
    mapper->addMapping(ui->nQuestions, 1);
    mapper->addMapping(ui->nTime, 2);
    mapper->toFirst();
    
    qDebug() << mapper->mappedWidgetAt(0);
    
    ui->currentSubject->setCurrentText(ui->subjectList->currentText());
}
