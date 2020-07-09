#ifndef USERSQLQUERYMODEL_H
#define USERSQLQUERYMODEL_H

#include <QSqlQueryModel>

class UserSqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    UserSqlQueryModel(QObject *parent = nullptr);
    
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    
private:
    bool setFirstName(int userId, const QString &firstName);
    bool setLastName(int userId, const QString &lastName);
    bool setPassword(int userId, const QString &password);
//    bool setConfirmPassword(int userId, const QString &confirmPassword);
    bool setProfilePicture(int userId, const QString &profilePicture);
    void refresh();
};

#endif // USERSQLQUERYMODEL_H
