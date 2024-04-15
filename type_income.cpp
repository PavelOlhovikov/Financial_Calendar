#include "type_income.h"

TypeIncome::TypeIncome(const QString & name) : name_category(name)
{

}

const QString TypeIncome::GetQueryAddData() const
{
    return QString("INSERT INTO " + TypeIncome::GetNameTable() + " VALUES ( NULL ,'" + name_category + "')");
}

const QString TypeIncome::GetQueryCreateTable()
{
    return "CREATE TABLE " + TypeIncome::GetNameTable() + " ( "
                    "id	INTEGER UNIQUE, "
                    "name	TEXT NOT NULL, "
                    "PRIMARY KEY(id AUTOINCREMENT)"
                    ")";
}

const QString TypeIncome::GetQueryCategory()
{
    return QString("SELECT name FROM " + TypeIncome::GetNameTable());
}

const QString TypeIncome::GetTableName() const
{
    return TypeIncome::GetNameTable();
}

const QString TypeIncome::GetNameTable()
{
    return "type_income";
}

QString TypeIncome::GetName()
{
    return name_category;
}

