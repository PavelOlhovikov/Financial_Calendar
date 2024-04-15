#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "db_worker.h"
#include "dialog_add_spending.h"
#include "dialog_edit_spending.h"
#include "dialog_remove_spending.h"
#include "dialog_add_income.h"
#include "dialog_edit_income.h"
#include "dialog_remove_income.h"

#include "accounts.h"
#include "income.h"
#include "spending.h"
#include "type_income.h"
#include "type_spending.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_pushButtonAccount_clicked();

    void on_pushButtonSpending_clicked();

    void on_pushButtonIncome_clicked();

    void on_pushButtonAnalitics_clicked();

    void on_pushButtonSettings_clicked();

    void on_pushButtonAboutTheApplication_clicked();

    void on_pushButtonTypeIncomeAndSpending_clicked();


private:
    Ui::MainWindow *ui;

    DBWorker *db;

    DialogAddExpense dialogAddExpense;
    DialogEditExpenses dialogEditExpenses;
    DialogRemoveExpenses dialogRemoveExpenses;
    DialogAddIncome dialogAddIncome;
    DialogEditIncome dialogEditIncome;
    DialogRemoveIncome dialogRemoveIncome;

    DialogAddExpense * addSpending;
    DialogAddIncome * addIncome;

private:
    void CreateTables();
    void InsertInToTables();
    void ViewTables();



};
#endif // MAINWINDOW_H
