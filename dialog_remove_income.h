#ifndef DIALOG_REMOVE_INCOME_H
#define DIALOG_REMOVE_INCOME_H

#include <QDialog>

namespace Ui {
class DialogRemoveIncome;
}

class DialogRemoveIncome : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRemoveIncome(QWidget *parent = nullptr);
    ~DialogRemoveIncome();

private slots:
    void on_OK_clicked();

    void on_Close_clicked();

private:
    Ui::DialogRemoveIncome *ui;
};

#endif // DIALOG_REMOVE_INCOME_H
