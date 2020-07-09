#include "usersqlquerymodel.h"

#include <QtSql>

UserSqlQueryModel::UserSqlQueryModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

Qt::ItemFlags UserSqlQueryModel::flags(const QModelIndex &index) const
{
   Qt::ItemFlags flags = QSqlQueryModel::flags(index);
   if (index.column() > 0)
       flags |= Qt::ItemIsEditable;
   
   return flags;
}

bool UserSqlQueryModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column() < 1)
        return false;
    
    QModelIndex pKeyIndex = QSqlQueryModel::index(index.row(), 0);
    int id = data(pKeyIndex).toInt();
    
    clear();
    
    bool ok;
    if (index.column() == 1) {
        ok = setFirstName(id, value.toString());
    } else if (index.column() == 2) {
        ok = setLastName(id, value.toString());
    } else if (index.column() == 3) {
        ok = setPassword(id, value.toString());
    } else {
        ok = setProfilePicture(id, value.toString());
    }
    
    refresh();
    return ok;
}

bool UserSqlQueryModel::setFirstName(int userId, const QString &firstName)
{
    QSqlQuery query;
    query.prepare("UPDATE Users SET firstname = ? WHERE id = ?");
    query.addBindValue(userId);
    query.addBindValue(firstName);
    return query.exec();
}

bool UserSqlQueryModel::setLastName(int userId, const QString &lastName)
{
    QSqlQuery query;
    query.prepare("UPDATE Users SET lastname = ? WHERE id = ?");
    query.addBindValue(userId);
    query.addBindValue(lastName);
    return query.exec();
}

bool UserSqlQueryModel::setPassword(int userId, const QString &password)
{
    QSqlQuery query;
    query.prepare("UPDATE Users SET passcode = ? WHERE id = ?");
    query.addBindValue(userId);
    query.addBindValue(password);
    return query.exec();
}

bool UserSqlQueryModel::setProfilePicture(int userId, const QString &profilePicture)
{
    QSqlQuery query;
    query.prepare("UPDATE Users SET avatar = ? WHERE id = ?");
    query.addBindValue(userId);
    query.addBindValue(profilePicture);
    return query.exec();
}

void UserSqlQueryModel::refresh()
{
    setQuery("SELECT * from Users");
    setHeaderData(1, Qt::Horizontal, tr("Firstname"));
    setHeaderData(2, Qt::Horizontal, tr("Lastname"));
    setHeaderData(3, Qt::Horizontal, tr("Password"));
    setHeaderData(3, Qt::Horizontal, tr("Profile Pics"));
}
