#ifndef DIALOG_EDIT_SPENDING_H
#define DIALOG_EDIT_SPENDING_H

#include <QDialog>

namespace Ui {
class DialogEditExpenses;
}

class DialogEditExpenses : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditExpenses(QWidget *parent = nullptr);
    ~DialogEditExpenses();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

private:
    Ui::DialogEditExpenses *ui;
};

#endif // DIALOG_EDIT_SPENDING_H
