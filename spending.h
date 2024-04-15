#ifndef SPENDING_H
#define SPENDING_H

#include <QString>

#include "db_object.h"


class Spending : public DBObject
{
public:
    Spending();
    explicit Spending(const QString & name, const QString & sum, const QString & data, const QString & comment);

    virtual const QString GetQueryAddData() const override;
    virtual const QString GetTableName() const override;

    static const QString GetQueryCreateTable();
    static const QString GetNameTable();

    QString GetName();
    QString GetSum();
    QString GetData();
    QString GetComment();

    void SetName(const QString name);
    void SetSum(const QString sum);
    void SetData(const QString data);
    void SetComment(const QString comment);

private:

    QString name_spending;
    QString sum_spending;
    QString data_spending;
    QString comment_spending;
};

#endif // SPENDING_H
