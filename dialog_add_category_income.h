#ifndef DIALOG_ADD_CATEGORY_INCOME_H
#define DIALOG_ADD_CATEGORY_INCOME_H

#include <QDialog>

#include "db_worker.h"

namespace Ui {
class DialogAddCategoryIncome;
}

class DialogAddCategoryIncome : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCategoryIncome(QWidget *parent = nullptr);
    explicit DialogAddCategoryIncome(DBWorker* const worker, QWidget *parent = nullptr);
    ~DialogAddCategoryIncome();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

signals:
    void signal();

private:
    Ui::DialogAddCategoryIncome *ui;

    DBWorker * db_worker;
};

#endif // DIALOG_ADD_CATEGORY_INCOME_H
