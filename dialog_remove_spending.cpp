#include "dialog_remove_spending.h"
#include "ui_dialogremoveexpenses.h"

DialogRemoveExpenses::DialogRemoveExpenses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRemoveExpenses)
{
    ui->setupUi(this);
}

DialogRemoveExpenses::~DialogRemoveExpenses()
{
    delete ui;
}

void DialogRemoveExpenses::on_OK_clicked()
{
    close();
}


void DialogRemoveExpenses::on_Close_clicked()
{
    close();
}

