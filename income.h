#ifndef INCOME_H
#define INCOME_H

#include <QString>

#include "db_object.h"


class Income : public DBObject
{
public:
    Income();
    explicit Income(const QString & name, const QString & sum, const QString & data, const QString & comment);

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

    QString name_income;
    QString sum_income;
    QString data_income;
    QString comment_income;
};

#endif // INCOME_H
