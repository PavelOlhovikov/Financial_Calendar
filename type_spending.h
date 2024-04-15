#ifndef TYPE_SPENDING_H
#define TYPE_SPENDING_H

#include <QString>

#include "db_object.h"

class TypeSpending : public DBObject
{
public:
    explicit TypeSpending(const QString & name);

    virtual const QString GetQueryAddData() const override;
    virtual const QString GetTableName() const override;

    static const QString GetQueryCategory();
    static const QString GetQueryCreateTable();
    static const QString GetNameTable();

    QString GetName();

private:
    QString name_category;
};

#endif // TYPE_SPENDING_H
