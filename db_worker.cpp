#include "db_worker.h"
#include "spending.h"
#include "income.h"
#include "accounts.h"
#include "type_income.h"
#include "type_spending.h"

DBWorker::DBWorker(QObject *parent)
    : QObject(parent)
{
    data_base = QSqlDatabase::addDatabase("QSQLITE");
    data_base.setDatabaseName(db_name);

    if(!data_base.open()){
        qDebug() << data_base.lastError().text();
    } else {
        query = new QSqlQuery(data_base);
    }


}

void DBWorker::CreateTable(const QString & table_query)
{
    SendQuery(table_query);
}

void DBWorker::InserIntoTable(const DBObject & db_object)
{
    SendQuery(db_object.GetQueryAddData());
}

bool DBWorker::SendQuery(const QString & table_query)
{
    query->clear();

    if(!query->exec(table_query)){
        return false;
    } else {
        return true;
    }
    return false;
}

QVector<QString> DBWorker::GetVectorCategory(const QString & table_query)
{
    query->clear();
    vector_category.clear();
    query->exec(table_query);
    while(query->next()){
        vector_category.push_back(query->value(0).toString());
    }
    return vector_category;
}

void DBWorker::CreateTableModelAndInsert(QTableView *table, QString name_table)
{
    model = new QSqlTableModel(this, data_base);
    model->setTable(name_table);
    model->select();
    table->setModel(model);
}

DBWorker::~DBWorker()
{
    delete query;
    delete model;
}





















