#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <QString>

#include "db_object.h"

class Accounts : public DBObject
{
public:
    Accounts();
    virtual const QString GetQueryAddData() const override;
    virtual const QString GetTableName() const override;

    static const QString GetQueryCreateTable();
    static const QString GetNameTable();
    static const QString GetQueryAccounts();

    QString GetName();
    QString GetSum();

    void SetName(const QString new_name);
    void SetSum(const QString new_sum);
private:

    QString name;
    QString sum;
};

#endif // ACCOUNTS_H
