#ifndef DB_OBJECT_H
#define DB_OBJECT_H

#include <QString>

class DBObject
{
public:
    DBObject() = default;

    virtual const QString GetQueryAddData() const = 0;
    virtual const QString GetTableName() const = 0;

    virtual ~DBObject() = default;

private:


};

#endif // DB_OBJECT_H
