#ifndef DIALOG_ADD_SPENDING_H
#define DIALOG_ADD_SPENDING_H

#include <QDialog>
#include "dialog_add_category_spending.h"
#include "db_worker.h"
#include "db_object.h"
#include "spending.h"
#include "type_spending.h"


namespace Ui {
class DialogAddExpense;
}

class DialogAddExpense : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddExpense(QWidget *parent = nullptr);
    explicit DialogAddExpense(DBWorker* const worker, QWidget *parent = nullptr);

    ~DialogAddExpense();

private slots:

    void on_OK_clicked();

    void on_Close_clicked();

public slots:

    void UpdateCategory();

private:
    Ui::DialogAddExpense * ui;

    DialogAddCategoryExpense * dialogAddCategoryExpense;

    DBWorker * db_worker;


};

#endif // DIALOG_ADD_SPENDING_H
