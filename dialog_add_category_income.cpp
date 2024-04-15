#include "dialog_add_category_income.h"
#include "ui_dialogaddcategoryincome.h"

#include "type_income.h"


DialogAddCategoryIncome::DialogAddCategoryIncome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCategoryIncome),
    db_worker(nullptr)
{
    ui->setupUi(this);
}

DialogAddCategoryIncome::DialogAddCategoryIncome(DBWorker * const worker, QWidget *parent):
    QDialog(parent),
    ui(new Ui::DialogAddCategoryIncome),
    db_worker(worker)
{

    ui->setupUi(this);
}

DialogAddCategoryIncome::~DialogAddCategoryIncome()
{
    delete ui;
}

void DialogAddCategoryIncome::on_OK_clicked()
{
    if (ui->lineEdit->text().size() > 0)
    {
        db_worker->InserIntoTable(TypeIncome(ui->lineEdit->text()));
        ui->lineEdit->clear();
        signal();
        close();
    }
}


void DialogAddCategoryIncome::on_Close_clicked()
{
    close();
}

