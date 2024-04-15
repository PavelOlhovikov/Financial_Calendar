#ifndef DIALOG_EDIT_INCOME_H
#define DIALOG_EDIT_INCOME_H

#include <QDialog>

namespace Ui {
class DialogEditIncome;
}

class DialogEditIncome : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditIncome(QWidget *parent = nullptr);
    ~DialogEditIncome();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

private:
    Ui::DialogEditIncome *ui;
};

#endif // DIALOG_EDIT_INCOME_H
