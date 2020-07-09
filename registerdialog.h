#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QButtonGroup>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();
    
private slots:
    void on_saveBtn_clicked();
    
    void on_picsChoiceBtn_clicked();
    
private:
    Ui::RegisterDialog *ui;
    QButtonGroup *subjectBtnGroup;
    QCheckBox *subjects;
    QString picsFileName;
    int lastInsertId;
};

#endif // REGISTERDIALOG_H
