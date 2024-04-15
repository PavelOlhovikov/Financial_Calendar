#ifndef DB_WORKER_H
#define DB_WORKER_H

#include <QObject>
#include <QDebug>

#include <QtSql>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QTableView>

#include <QVector>
#include <QString>

#include "db_object.h"


class DBWorker : public QObject
{
    Q_OBJECT
public:
    explicit DBWorker(QObject *parent = 0);

    void CreateTable(const QString & table_query);
    void InserIntoTable(const DBObject & db_object);

    bool SendQuery(const QString & table_query);
    bool DeliteItemTable();
    bool EditItemTable();
    QVector<QString> GetVectorCategory(const QString & table_query);
    void CreateTableModelAndInsert(QTableView * table, QString name_table);

    ~DBWorker();

private:
    const QString db_name = "FinanceCalendar.db";

    QSqlDatabase data_base;
    QSqlQuery * query;
    QVector<QString> vector_category;

    QSqlTableModel * model;

};

#endif // DB_WORKER_H
