#ifndef TYPE_INCOME_H
#define TYPE_INCOME_H

#include <QString>

#include "db_object.h"

class TypeIncome : public DBObject
{
public:
    explicit TypeIncome(const QString & name);

    virtual const QString GetQueryAddData() const override;
    virtual const QString GetTableName() const override;

    static const QString GetQueryCategory();
    static const QString GetQueryCreateTable();
    static const QString GetNameTable();

    QString GetName();

private:
    QString name_category;
};

#endif // TYPE_INCOME_H
