#include "view_all_transactions.h"
#include "ui_view_all_transactions.h"
#include "FileHandler.h"
#include "mainwindow.h"
auto& tTransactions = FileHandler::transactionsData;
view_all_transactions::view_all_transactions(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view_all_transactions)
{
    ui->setupUi(this);
}

view_all_transactions::~view_all_transactions()
{
    delete ui;
}

void view_all_transactions::on_pushButton_clicked(){
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::adminmainmenuWin);
}
void view_all_transactions::get_transactions(){
    ui->tableWidget->setRowCount(0);
    if(issorted){
        for(int i = 1; i <= FileHandler::transactionsData.size(); i++) {
            if(FileHandler::transactionsData[i].getId() != 0 && FileHandler::transactionsData[i].getRecipientUsername() != "" ) {
                populateRow(i);
            }
        }


    }
    else{
        for(int i = FileHandler::transactionsData.size(); i >= 1; i--) {
            if(FileHandler::transactionsData[i].getId() != 0 && FileHandler::transactionsData[i].getRecipientUsername() != "" ) {
                populateRow(i);
            }
        }
    }

}
void view_all_transactions::populateRow(int i ){
    if(ui->tableWidget->rowCount()<tTransactions.size()){
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
}
void view_all_transactions::on_pushButton_3_clicked(){
    if(issorted)
        issorted=false;
    else
        issorted=true;
    view_all_transactions::get_transactions();
}
