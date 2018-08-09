#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QDataWidgetMapper>

namespace Ui {
class QuestionManager;
}

class QuestionManager : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QuestionManager(QWidget *parent = 0);
    ~QuestionManager();
    
private:
    Ui::QuestionManager *ui;
    
    QSqlQueryModel *model;
    QDataWidgetMapper *mapper;
    
    enum {
        Subject_Id = 0,
        Subject_Name,
        Subject_File_Path,
        Subject_Created_By,
        Subject_No_Questions,
        Subject_Time_Allocated,
    };
    
public slots:
    void setAdminName(QString txt);
    
private slots:
    void on_commitBtn_clicked();
    void on_selectFileBtn_clicked();
    void on_subjectList_activated(const QString &arg1);
};

#endif // QUESTIONMANAGER_H
