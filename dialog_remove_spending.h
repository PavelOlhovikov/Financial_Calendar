#ifndef DIALOG_REMOVE_SPENDING_H
#define DIALOG_REMOVE_SPENDING_H

#include <QDialog>

namespace Ui {
class DialogRemoveExpenses;
}

class DialogRemoveExpenses : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRemoveExpenses(QWidget *parent = nullptr);
    ~DialogRemoveExpenses();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

private:
    Ui::DialogRemoveExpenses *ui;
};

#endif // DIALOG_REMOVE_SPENDING_H
