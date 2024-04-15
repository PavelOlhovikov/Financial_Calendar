#include "dialog_add_category_spending.h"
#include "ui_dialogaddcategoryexpense.h"

#include "type_spending.h"


DialogAddCategoryExpense::DialogAddCategoryExpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCategoryExpense),
    db_worker(nullptr)
{
    ui->setupUi(this);

}

DialogAddCategoryExpense::DialogAddCategoryExpense(DBWorker * const worker, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCategoryExpense),
    db_worker(worker)
{

    ui->setupUi(this);
}

DialogAddCategoryExpense::~DialogAddCategoryExpense()
{
    delete ui;
}

void DialogAddCategoryExpense::on_OK_clicked()
{
    if (ui->lineEdit->text().size() > 0)
    {
        db_worker->InserIntoTable(TypeSpending(ui->lineEdit->text()));
        ui->lineEdit->clear();
        emit signal();
        close();
    }

}


void DialogAddCategoryExpense::on_Close_clicked()
{
    close();
}

