#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QComboBox>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QButtonGroup>
#include <QRadioButton>
#include <QStringListModel>

#include "editablesqlquerymodel.h"
#include "registerdialog.h"

namespace Ui {
class QuestionManager;
}

class QuestionManager : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QuestionManager(QWidget *parent = nullptr);
    ~QuestionManager();
    
    RegisterDialog *registerInterface;
    
    void initializer();
    bool validator();
private:
    Ui::QuestionManager *ui;
    
    QSqlQueryModel *model;
    EditableSqlQueryModel *sModel;
    QSqlTableModel *cModel;
    QSqlRelationalTableModel *questionModel;
    QDataWidgetMapper *mapper;
    QDataWidgetMapper *userMapper;
    QDataWidgetMapper *questionMapper;
    QStringListModel *qModel;
    
    int no_of_questions;
    QString allocated_time;
    QString subject_name;
    
    int currentQuestion;
    
public slots:
    void setAdminName(QString &txt);
    void setAdminProfilePix(const QByteArray &pic);
    
private slots:
    void on_commitBtn_clicked();
    void on_editBtn_clicked();
    void on_resetBtn_clicked();
    void on_subjectList_currentIndexChanged(const QString &arg1);
    void on_listWidget_currentTextChanged(const QString &currentText);
    void on_addCandidateBtn_clicked();
    void on_subjectList_editTextChanged(const QString &arg1);
    void on_adminStackedWidget_currentChanged(int arg1);
    void on_nQuestionView_clicked(const QModelIndex &index);
    void on_candidatesView_doubleClicked(const QModelIndex &index);
    void on_rmvCandidateBtn_clicked();
    void on_saveBtn_clicked();
};

#endif // QUESTIONMANAGER_H
