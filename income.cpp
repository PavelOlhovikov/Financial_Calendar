#include "income.h"

Income::Income()
{

}

Income::Income(const QString & name, const QString & sum, const QString & data, const QString & comment) : name_income(name), sum_income(sum), data_income(data), comment_income(comment)
{

}

const QString Income::GetQueryAddData() const
{
return QString("INSERT INTO " + Income::GetNameTable() + " VALUES ( NULL ,'" + name_income + "', '" + sum_income + "', '" + data_income + "', '" + comment_income + "')");
}

const QString Income::GetQueryCreateTable()
{
    return "CREATE TABLE " + Income::GetNameTable() +
                " ( id	INTEGER UNIQUE, "
                    "name	TEXT NOT NULL, "
                    "sum	NUMERIC(18,2) NOT NULL, "
                    "data	DATA NOT NULL, "
                    "comment	TEXT, "
                    "PRIMARY KEY(id AUTOINCREMENT)"
                    ")";
}

const QString Income::GetTableName() const
{
    return Income::GetNameTable();
}

const QString Income::GetNameTable()
{
    return "income";
}

QString Income::GetName()
{
    return name_income;
}

QString Income::GetSum()
{
    return sum_income;
}

QString Income::GetData()
{
    return data_income;
}

QString Income::GetComment()
{
    return comment_income;
}

void Income::SetName(const QString name)
{
    name_income = name;
}

void Income::SetSum(const QString sum)
{
    sum_income = sum;
}

void Income::SetData(const QString data)
{
    data_income = data;
}

void Income::SetComment(const QString comment)
{
    comment_income = comment;
}
