#include "accounts.h"

Accounts::Accounts()
{

}

const QString Accounts::GetQueryAddData() const
{
return QString("INSERT INTO " + Accounts::GetNameTable() + " VALUES ( NULL ,'" + name + "', '" + sum + "')");
}

const QString Accounts::GetQueryCreateTable()
{
    return  "CREATE TABLE " + Accounts::GetNameTable() + " ( "
                                                        "id	INTEGER UNIQUE, "
                                                        "name	TEXT NOT NULL, "
                                                        "sum	NUMERIC(18,2) NOT NULL, "
                                                        "PRIMARY KEY(id AUTOINCREMENT)"
                                                        ")";
}

const QString Accounts::GetTableName() const
{
    return Accounts::GetNameTable();
}

const QString Accounts::GetNameTable()
{
    return "money_account";
}

const QString Accounts::GetQueryAccounts()
{
    return QString("SELECT name FROM " + Accounts::GetNameTable());
}

QString Accounts::GetName()
{
    return name;
}

QString Accounts::GetSum()
{
    return sum;
}

void Accounts::SetName(const QString new_name)
{
    name = new_name;
}

void Accounts::SetSum(const QString new_sum)
{
    sum = new_sum;
}
