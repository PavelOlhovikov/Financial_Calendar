#include "dialog_edit_spending.h"
#include "ui_dialogeditexpenses.h"

DialogEditExpenses::DialogEditExpenses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditExpenses)
{
    ui->setupUi(this);
}

DialogEditExpenses::~DialogEditExpenses()
{
    delete ui;
}

void DialogEditExpenses::on_OK_clicked()
{
    close();
}


void DialogEditExpenses::on_Close_clicked()
{
    close();
}

