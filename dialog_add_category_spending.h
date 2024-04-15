#ifndef DIALOG_ADD_CATEGORY_SPENDING_H
#define DIALOG_ADD_CATEGORY_SPENDING_H

#include <QDialog>

#include <QVector>

#include "db_worker.h"

namespace Ui {
class DialogAddCategoryExpense;
}

class DialogAddCategoryExpense : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCategoryExpense(QWidget *parent = nullptr);
    explicit DialogAddCategoryExpense(DBWorker* const worker, QWidget *parent = nullptr);

    ~DialogAddCategoryExpense();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

signals:
    void signal();

private:
    Ui::DialogAddCategoryExpense *ui;

    DBWorker * db_worker;
};

#endif // DIALOG_ADD_CATEGORY_SPENDING_H
