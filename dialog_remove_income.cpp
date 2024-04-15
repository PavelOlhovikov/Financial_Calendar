#include "dialog_remove_income.h"
#include "ui_dialogremoveincome.h"

DialogRemoveIncome::DialogRemoveIncome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRemoveIncome)
{
    ui->setupUi(this);
}

DialogRemoveIncome::~DialogRemoveIncome()
{
    delete ui;
}

void DialogRemoveIncome::on_OK_clicked()
{
    close();
}


void DialogRemoveIncome::on_Close_clicked()
{
    close();
}

