#ifndef EDITABLESQLQUERYMODEL_H
#define EDITABLESQLQUERYMODEL_H

#include <QSqlQueryModel>

class EditableSqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    EditableSqlQueryModel(QObject *parent = nullptr);
    
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    
private:
    bool setTitle(int subjectId, const QString &name);
    bool setNumQuestions(int subjectId, int nQuestion);
    bool setTimeAllocated(int subjectId, const QString &time);
    void refresh();
};

#endif // EDITABLESQLQUERYMODEL_H
