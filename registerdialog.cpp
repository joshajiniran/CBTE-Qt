#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QStandardPaths>
#include <QResource>
#include <QCheckBox>
#include <QDebug>

#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    QSqlDatabase::database("database", true);
    
    subjectBtnGroup = new QButtonGroup(this);
    subjectBtnGroup->setExclusive(false);
    
    //initialize subjects from database
    QSqlQuery query;
    
    if (query.exec("SELECT title FROM Subjects ORDER BY title ASC")) {
        QHBoxLayout *layout = new QHBoxLayout();
        
        while (query.next()) {
            QString subjectName = query.value(0).toString();
            subjects = new QCheckBox(subjectName);
            subjectBtnGroup->addButton(subjects, query.at());
            layout->addWidget(subjects);
            ui->groupBox->setLayout(layout);
        }
    } else {
        qDebug() << query.lastError().text();
    }
}

RegisterDialog::~RegisterDialog()
{   
    delete ui;
}

void RegisterDialog::on_saveBtn_clicked()
{   
    // validate that all fields are correctly filled
    if (ui->firstnameEdit->text().isEmpty() || ui->lastnameEdit->text().isEmpty() 
            || ui->pswdEdit->text().isEmpty() || ui->confirmPswdEdit->text().isEmpty()) {
        QMessageBox::warning(this, tr("Form error"), 
                             tr("Some fields are not correctly filled"));
        return;
    }
    
    // validate that both password matches
    if (ui->pswdEdit->text() != ui->confirmPswdEdit->text()) {
        QMessageBox::warning(this, tr("Password error"), 
                             tr("Passwords do not match, try again"));
        return;
    } 
    
    // process user's form
    // check pics size of user before processing
    
    QByteArray dpByteArray;
    if (!picsFileName.isEmpty()) {
        QFile file(picsFileName);
        
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("File error"),
                                 tr("Could not open user image file"));
            return;
        }
        
        dpByteArray = file.readAll();
    } else {
        // set avatar to a default user pix
        QFile file(":/images/userspix.png");
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("File error"),
                                 tr("Could not open default user image file"));
            
            return;
        }       
        
        dpByteArray = file.readAll();
    }
    
    // get values of checked subjects in a stringlist
    QStringList subjectsOffered;
    for (int i = 0; i < subjectBtnGroup->buttons().count(); i++) {
        if (subjectBtnGroup->button(i)->isChecked())
            subjectsOffered.append(subjectBtnGroup->button(i)->text());
    }
    
    QSqlQuery query;
    query.prepare("INSERT INTO Users (firstname, lastname, passcode, "
                  "is_admin, avatar) VALUES(:firstname, :lastname, :passcode,"
                  ":is_admin, :avatar)");
    query.bindValue(":firstname", ui->firstnameEdit->text());
    query.bindValue(":lastname", ui->lastnameEdit->text());
    query.bindValue(":passcode", ui->pswdEdit->text());
    query.bindValue(":is_admin", 0);
    query.bindValue(":avatar", dpByteArray);
    
    // TODO: insert user subjects into table
    // use last_insert_id() method
    
    if (query.exec()) {
        lastInsertId = query.lastInsertId().toInt();
        int subjectid = 0;
        
        foreach (QString var, subjectsOffered) {
            if (query.exec(QString("select id from Subjects where title='%1'").arg(var))) {
                while (query.next()) {
                    subjectid = query.value(0).toInt();
                    qDebug() << subjectid;
                }
            }
            
            query.prepare("INSERT INTO User_Subjects (userId, subjectId) "
                          "VALUES(:userId, :subjectId)");
            query.bindValue(":userId", QString::number(lastInsertId));
            query.bindValue(":subjectId", QString::number(subjectid));
            
            if (query.exec()) {
                QMessageBox::information(this, tr("Information"),
                                         tr("Your data has been successfully saved"));
                this->done(QDialog::Accepted);
            }
        }
    } else {
        QMessageBox::information(this, tr("Error saving data"), query.lastError().text());
        return;
    }
}

void RegisterDialog::on_picsChoiceBtn_clicked()
{
    QFileDialog imgDialog(this);
    imgDialog.setViewMode(QFileDialog::Detail);
    imgDialog.setNameFilter(tr("Image files (*.png *.jpg *.svg *.bmp"));
    picsFileName = QFileDialog::getOpenFileName(this, 
                                                tr("Select profile pix"), QDir::homePath() + "/Pictures",
                                                tr("Image files (*.png *.jpg *.svg *.bmp"));
    
    // check if a file was selected
    if (!picsFileName.isEmpty()) {
        QFile file(picsFileName);
        
        if (file.size() > 51200) {
            QMessageBox::warning(this, tr("File size error"),
                                 tr("The image size exceeds 50kb, consider resizing the image or choose a smaller size"));
            return;
        } else {
            ui->picsChoiceLbl->setText(picsFileName);
        }
    } else {
        // no pics file was chosen, just return
        return;
    }
}
