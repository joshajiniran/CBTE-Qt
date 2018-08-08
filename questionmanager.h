#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class QuestionManager;
}

class QuestionManager : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QuestionManager(QWidget *parent = 0);
    ~QuestionManager();
    
    QSqlDatabase db;
    
private:
    Ui::QuestionManager *ui;
    
    QSqlTableModel *model;
    
    
public slots:
    void setAdminName(QString txt);
    
private slots:
    void on_commitBtn_clicked();
    void on_adminTabWidget_currentChanged(int index);
};

#endif // QUESTIONMANAGER_H
