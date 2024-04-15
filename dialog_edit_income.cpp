#include "dialog_edit_income.h"
#include "ui_dialogeditincome.h"

DialogEditIncome::DialogEditIncome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditIncome)
{
    ui->setupUi(this);
}

DialogEditIncome::~DialogEditIncome()
{
    delete ui;
}

void DialogEditIncome::on_OK_clicked()
{
    close();
}


void DialogEditIncome::on_Close_clicked()
{
    close();
}

