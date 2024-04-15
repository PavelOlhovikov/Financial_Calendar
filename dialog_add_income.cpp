#include "dialog_add_income.h"
#include "ui_dialogaddincome.h"



DialogAddIncome::DialogAddIncome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddIncome),
    db_worker(nullptr)
{
    ui->setupUi(this);
}

DialogAddIncome::DialogAddIncome(DBWorker * const worker, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddIncome),
    db_worker(worker)
{
    ui->setupUi(this);

    dialogAddCategoryIncome = new DialogAddCategoryIncome(worker, this);
    connect(ui->AddCategoryIncome, SIGNAL(clicked(bool)), dialogAddCategoryIncome, SLOT(show()));
    UpdateCategory();
    connect(dialogAddCategoryIncome, SIGNAL(signal()) , this, SLOT(UpdateCategory()));
}


DialogAddIncome::~DialogAddIncome()
{
    delete ui;
    delete dialogAddCategoryIncome;
}


void DialogAddIncome::on_OK_clicked()
{
    if (ui->lineEdit->text().size() > 0 && ui->lineEdit->text().toFloat())
    {
        //name, sum, data, comment
        db_worker->InserIntoTable(Income(ui->comboBoxCategory->currentText(), ui->lineEdit->text(), ui->dateEdit->text(), ui->lineEdit_2->text()));
        ui->lineEdit->clear();
        close();
    }
}


void DialogAddIncome::on_Close_clicked()
{
    close();
}

void DialogAddIncome::UpdateCategory()
{
    ui->comboBoxCategory->clear();
    ui->comboBoxCategory->addItems(db_worker->GetVectorCategory(TypeIncome::GetQueryCategory()).toList());
}

