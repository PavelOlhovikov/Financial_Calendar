#include "type_spending.h"

TypeSpending::TypeSpending(const QString & name) : name_category(name)
{

}

const QString TypeSpending::GetQueryAddData() const
{
    return QString("INSERT INTO " + TypeSpending::GetNameTable() + " VALUES ( NULL ,'" + name_category + "')");
}

const QString TypeSpending::GetQueryCreateTable()
{
    return "CREATE TABLE " + TypeSpending::GetNameTable() + " ( "
                    "id	INTEGER UNIQUE, "
                    "name	TEXT NOT NULL, "
                    "PRIMARY KEY(id AUTOINCREMENT)"
                    ")";
}

const QString TypeSpending::GetQueryCategory()
{
    return QString("SELECT name FROM " + TypeSpending::GetNameTable());
}

const QString TypeSpending::GetTableName() const
{
    return TypeSpending::GetNameTable();
}

const QString TypeSpending::GetNameTable()
{
    return "type_spending";
}

QString TypeSpending::GetName()
{
    return name_category;
}

