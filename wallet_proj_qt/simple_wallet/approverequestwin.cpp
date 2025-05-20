#include "approverequestwin.h"
#include "ui_approverequestwin.h"
#include <set>
#include "FileHandler.h"
#include "Login.h"
#include <QLayout>
#include<QGroupBox>
#include <QLabel>
#include <QPushButton>
#include "transactionsManagement.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include "requestitem.h"
#include <QListWidgetItem>
#include "mainwindow.h"
// dont forget to delete if not needed
#include <iostream>
using namespace std;


approveRequestWin::approveRequestWin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::approveRequestWin)
{
    ui->setupUi(this);
}


approveRequestWin::~approveRequestWin() {
    delete ui;
}

void approveRequestWin::showListOfRequests() {
    itemMap.clear();
    ui->listLayout->clear();

    for(int requestId : FileHandler::requests[Login::ActiveUser]) {
        QListWidgetItem * item = new QListWidgetItem(ui->listLayout);
        requestItem * reqItem = new requestItem(FileHandler::transactionsData[requestId]);


        connect(reqItem, &requestItem::accepted, this, &approveRequestWin::handleAccept);
        connect(reqItem, &requestItem::rejected, this, &approveRequestWin::handleReject);

        item->setSizeHint(reqItem->sizeHint());
        ui->listLayout->addItem(item);
        ui->listLayout->setItemWidget(item, reqItem);

        itemMap[requestId] = item;
    }

}



void approveRequestWin::handleAccept(int transactionId) {
    int approveRes = transactionsManagement::approveRequest(transactionId, false);

    cout << "Accept : " << approveRes  << " transID : " << transactionId << endl;

    if(approveRes == 1) {
        QMessageBox::warning(this, "Balance Error", "you dont have enough balance");
        return;
    }


    auto it = itemMap.find(transactionId);
    if(it != itemMap.end()) {
        QListWidgetItem * item = it->second;
        delete ui->listLayout->takeItem(ui->listLayout->row(item));
        itemMap.erase(it);
    }
}


void approveRequestWin::handleReject(int transactionId) {
    int approveRes = transactionsManagement::approveRequest(transactionId, true);
    cout << "Reject : " << approveRes  << " transID : " << transactionId << endl;

    auto it = itemMap.find(transactionId);
    if(it != itemMap.end()) {
        QListWidgetItem * item = it->second;
        delete ui->listLayout->takeItem(ui->listLayout->row(item));
        itemMap.erase(it);
    }
}





void approveRequestWin::on_backButton_clicked()
{
       MainWindow::stackedWidget->setCurrentWidget(MainWindow::usermainmenuWin);
}

