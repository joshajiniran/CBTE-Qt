#include "editablesqlquerymodel.h"

#include <QtSql>

EditableSqlQueryModel::EditableSqlQueryModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

Qt::ItemFlags EditableSqlQueryModel::flags(const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (index.column() == 1 || index.column() == 2 || index.column() == 3)
        flags |= Qt::ItemIsEditable;
        
    return flags;
}

bool EditableSqlQueryModel::setData(const QModelIndex &index, const QVariant &value, int /* role */)
{
    if (index.column() < 1 || index.column() > 3) 
        return false;
    
    QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
    int id = data(primaryKeyIndex).toInt();
    
    clear();

    bool ok;
    if (index.column() == 1) {
        ok = setTitle(id, value.toString());
    } else if (index.column() == 2) {
        ok = setNumQuestions(id, value.toInt());
    } else {
        ok = setTimeAllocated(id, value.toString());
    }
    
    refresh();
    return ok;
}

bool EditableSqlQueryModel::setTitle(int subjectId, const QString &name)
{
    QSqlQuery query;
    query.prepare("UPDATE Subjects SET title = ? WHERE id = ?");
    query.addBindValue(name);
    query.addBindValue(subjectId);
    return query.exec();
}

bool EditableSqlQueryModel::setNumQuestions(int subjectId, int nQuestion)
{
    QSqlQuery query;
    query.prepare("UPDATE Subjects SET no_of_questions = ? WHERE id = ?");
    query.addBindValue(nQuestion);
    query.addBindValue(subjectId);
    return query.exec();
}

bool EditableSqlQueryModel::setTimeAllocated(int subjectId, const QString &time)
{
    QSqlQuery query;
    query.prepare("UPDATE Subjects SET time_alloted = ? WHERE id = ?");
    query.addBindValue(time);
    query.addBindValue(subjectId);
    return query.exec();
}

void EditableSqlQueryModel::refresh()
{
    setQuery("SELECT * from Subjects");
    setHeaderData(1, Qt::Horizontal, tr("Title"));
    setHeaderData(2, Qt::Horizontal, tr("Number of Questions"));
    setHeaderData(3, Qt::Horizontal, tr("Time Allocated"));
}
