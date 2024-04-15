#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTabBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(1);

    db = new DBWorker(this);

    CreateTables();
    ViewTables();

    addSpending = new DialogAddExpense(db, this);
    connect(ui->addSpending, SIGNAL(clicked(bool)), addSpending, SLOT(show()));

    addIncome = new DialogAddIncome(db, this);
    connect(ui->addIncome, SIGNAL(clicked(bool)), addIncome, SLOT(show()));

}


MainWindow::~MainWindow()
{
    delete ui;
    delete addSpending;
    delete addIncome;
}

void MainWindow::on_pushButtonAccount_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonSpending_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButtonIncome_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonTypeIncomeAndSpending_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonAnalitics_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonSettings_clicked()
{
    ui->tabWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButtonAboutTheApplication_clicked()
{
    ui->tabWidget->setCurrentIndex(6);
}

void MainWindow::CreateTables()
{
    db->CreateTable(Accounts::GetQueryCreateTable());
    db->CreateTable(Income::GetQueryCreateTable());
    db->CreateTable(Spending::GetQueryCreateTable());
    db->CreateTable(TypeIncome::GetQueryCreateTable());
    db->CreateTable(TypeSpending::GetQueryCreateTable());
}

void MainWindow::ViewTables()
{
    db->CreateTableModelAndInsert(ui->tableAccountsView,     Accounts::GetNameTable());
    db->CreateTableModelAndInsert(ui->tableIncomeView,       Income::GetNameTable());
    db->CreateTableModelAndInsert(ui->tableSpendingView,     Spending::GetNameTable());
    db->CreateTableModelAndInsert(ui->tableTypeIncomeView,   TypeIncome::GetNameTable());
    db->CreateTableModelAndInsert(ui->tableTypeSpendingView, TypeSpending::GetNameTable());
}


