#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "questionmanager.h"

#include <QStackedWidget>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QStackedWidget
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_loginBtn_clicked();
    
    void on_quitBtn_clicked();
    
    void on_startBtn_clicked();
    
    void on_submitBtn_clicked();
    
    void updateTimer();
    
protected:
    QString fullname;
    QString firstname;
    QString lastname;
    QString username;
    QString passcode;
    bool isAdmin;
    
private:
    Ui::MainWindow *ui;
    
    QTimer *timer;
    QTime *time;
    
    QSqlDatabase db;
    
    QuestionManager *adminManager;
};

#endif // MAINWINDOW_H
