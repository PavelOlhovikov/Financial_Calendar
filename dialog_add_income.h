#ifndef DIALOG_ADD_INCOME_H
#define DIALOG_ADD_INCOME_H

#include <QDialog>
#include "dialog_add_category_income.h"
#include "db_worker.h"
#include "income.h"
#include "type_income.h"


namespace Ui {
class DialogAddIncome;
}

class DialogAddIncome : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddIncome(QWidget *parent = nullptr);
    explicit DialogAddIncome(DBWorker * const worker,QWidget *parent = nullptr);

    ~DialogAddIncome();

private slots:

    void on_OK_clicked();

    void on_Close_clicked();

public slots:

    void UpdateCategory();

private:
    Ui::DialogAddIncome * ui;

    DialogAddCategoryIncome * dialogAddCategoryIncome;

    DBWorker * db_worker;

};

#endif // DIALOG_ADD_INCOME_H




