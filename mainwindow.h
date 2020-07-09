#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "questionmanager.h"
#include "registerdialog.h"

#include <QStackedWidget>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QStackedWidget
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
    QSqlDatabase database;
    QuestionManager *adminManager;
    RegisterDialog *registerInterface;
    
private slots:
    void on_loginBtn_clicked();
    
    void on_quitBtn_clicked();
    
    void on_startBtn_clicked();
    
    void on_submitBtn_clicked();
    
    void updateTimer();
    
protected:
    QString userId;
    QString fullname;
    QString firstname;
    QString lastname;
    QString username;
    QString passcode;
    QByteArray bytePix;
    bool isAdmin;
    
    QStringList subjectList;
    QStringList timeList;
    
private:
    Ui::MainWindow *ui;
  
    QTimer *timer;
    QTime *time;
    QJsonDocument *jsonDocument;
    QJsonObject *jsonObject;
    QJsonArray *jsonArray;
    QJsonValue *jsonValue;
    
    int currentQuestion;
    QString userOptionChoice;
    bool isCorrect;
};

#endif // MAINWINDOW_H
