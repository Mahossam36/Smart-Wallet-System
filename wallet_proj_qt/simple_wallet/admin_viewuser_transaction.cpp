#include "admin_viewuser_transaction.h"
#include "transactionsManagement.h"
#include "mainwindow.h"
#include "ui_admin_viewuser_transaction.h"
#include "viewusers.h"
#include <FileHandler.h>
#include<iostream>
#include <chrono>
#include <ctime>
#include <QString>
#include <QTableWidgetItem>
#include <iomanip>
#include <sstream>
#include "Login.h"
using namespace std;


User &user =ViewUsers::choosenUser;

auto& all_Ids_of_Current_user= transactionsManagement:: last_transactions_of_user;
Admin_ViewUser_Transaction::Admin_ViewUser_Transaction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_ViewUser_Transaction)
{
    ui->setupUi(this);
    this->index=1;
    this->isNewest=true;
    this->current=1;
}

Admin_ViewUser_Transaction::~Admin_ViewUser_Transaction()
{
    delete ui;
}

void Admin_ViewUser_Transaction::on_pushButton_clicked()
{
    if (Login::adminlogged)
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::view);
else
     MainWindow::stackedWidget->setCurrentWidget(MainWindow::usermainmenuWin);
}


void Admin_ViewUser_Transaction:: displa_User_Info_on_Screen(){
    ui->Full_Name->setText(QString::fromStdString(user.getFirstName()+" "+user.getLastName()));
    ui->PhoneNo_Labe->setText(QString::fromStdString(user.getPhoneNumber()));
    ui->UserName_Label->setText(QString::fromStdString(user.getUsername()));
    ui->Email_Label->setText(QString::fromStdString(user.getEmail()));
    ui->Nationalid_Labe->setText(QString::fromStdString(user.getId()));
    ui->Balance_Labe->setText(QString::fromStdString(to_string(user.getBalance())));
}




void Admin_ViewUser_Transaction::populateRow(int i) {
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    // Sender username
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(FileHandler::transactionsData[i].getSenderUsername())));

    // Recipient username
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(FileHandler::transactionsData[i].getRecipientUsername())));

    // Approval status
    bool isApproved = FileHandler::transactionsData[i].getIsApproved();
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(isApproved ? "YES" : "NO"));

    // Transaction time using getFormattedTransactionTime()
    std::string timeStr = FileHandler::transactionsData[i].getFormattedTransactionTime();
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(timeStr)));

    // Amount
    double amount = FileHandler::transactionsData[i].getAmount();
    ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(amount, 'f', 2)));
}






void Admin_ViewUser_Transaction::on_pushButton_4_clicked() {
    cout << "here we crashed" << endl;
    transactionsManagement::pushing_Ids_of_current_user_to_set(user.getUsername());
    cout << "we dont reach here" << endl;

    static string lastUsername = "";
    static bool Isnew= true;

    ui->tableWidget->setRowCount(0);

    lastUsername = user.getUsername();
    Isnew= isNewest;

    if (isNewest){
        if (!all_Ids_of_Current_user.empty()) {
            for (auto it : all_Ids_of_Current_user) {
                populateRow(it);
            }
        }
    }
    else
    {
        for (auto rit = all_Ids_of_Current_user.rbegin(); rit != all_Ids_of_Current_user.rend(); ++rit)
            populateRow(*rit);


    }
}



void Admin_ViewUser_Transaction::on_pushButton_3_clicked()
{
    if (isNewest)
        isNewest=false;
    else
        isNewest=true;
    on_pushButton_4_clicked();

}

