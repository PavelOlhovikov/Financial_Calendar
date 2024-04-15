#include "dialog_add_spending.h"
#include "ui_dialogaddexpense.h"

DialogAddExpense::DialogAddExpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddExpense),
    db_worker(nullptr)
{
    ui->setupUi(this);
}

DialogAddExpense::DialogAddExpense(DBWorker * const worker, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddExpense),
    db_worker(worker)
{
    ui->setupUi(this);

    dialogAddCategoryExpense = new DialogAddCategoryExpense(worker, this);
    connect(ui->AddCategoryExpense, SIGNAL(clicked(bool)), dialogAddCategoryExpense, SLOT(show()));
    UpdateCategory();
    connect(dialogAddCategoryExpense, SIGNAL(signal()) , this, SLOT(UpdateCategory()));
}


DialogAddExpense::~DialogAddExpense()
{
    delete ui;
    delete dialogAddCategoryExpense;
}


void DialogAddExpense::on_OK_clicked()
{
    if (ui->lineEdit->text().size() > 0 && ui->lineEdit->text().toFloat())
    {
        //name, sum, data, const, comment
        db_worker->InserIntoTable(Spending(ui->comboBoxCategory->currentText(), ui->lineEdit->text(), ui->dateEdit->text(), ui->lineEdit_2->text()));
        ui->lineEdit->clear();

        close();
    }
}


void DialogAddExpense::on_Close_clicked()
{
    close();
}

void DialogAddExpense::UpdateCategory()
{
    ui->comboBoxCategory->clear();
    ui->comboBoxCategory->addItems(db_worker->GetVectorCategory(TypeSpending::GetQueryCategory()).toList());
}

