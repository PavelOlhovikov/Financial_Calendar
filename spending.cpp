#include "spending.h"


Spending::Spending()
{

}

Spending::Spending(const QString & name, const QString & sum, const QString & data, const QString & comment) : name_spending(name), sum_spending(sum), data_spending(data), comment_spending(comment)
{

}

const QString Spending::GetQueryAddData() const
{
    return QString("INSERT INTO " + Spending::GetNameTable() + " VALUES ( NULL ,'" + name_spending + "', '" + sum_spending + "', '" + data_spending + "', '" + comment_spending + "')");
}

const QString Spending::GetQueryCreateTable()
{
    return "CREATE TABLE " + Spending::GetNameTable() +
                " ( id	INTEGER UNIQUE, "
                    "name	TEXT NOT NULL, "
                    "sum	NUMERIC(18,2) NOT NULL, "
                    "data	DATA NOT NULL, "
                    "comment	TEXT, "
                    "PRIMARY KEY(id AUTOINCREMENT)"
                    ")";
}

const QString Spending::GetTableName() const
{
    return Spending::GetNameTable();
}

const QString Spending::GetNameTable()
{
    return "spending";
}

QString Spending::GetName()
{
    return name_spending;
}

QString Spending::GetSum()
{
    return sum_spending;
}

QString Spending::GetData()
{
    return data_spending;
}

QString Spending::GetComment()
{
    return comment_spending;
}

void Spending::SetName(const QString name)
{
    name_spending = name;
}

void Spending::SetSum(const QString sum)
{
    sum_spending = sum;
}

void Spending::SetData(const QString data)
{
    data_spending = data;
}

void Spending::SetComment(const QString comment)
{
    comment_spending = comment;
}
