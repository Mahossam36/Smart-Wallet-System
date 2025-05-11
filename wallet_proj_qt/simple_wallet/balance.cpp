#include "balance.h"
#include "ui_balance.h"
#include"mainwindow.h"
#include <QShowEvent>
#include"FileHandler.h"
#include"Login.h"

balance::balance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::balance)
{
    ui->setupUi(this);
}
void balance::showEvent(QShowEvent *event) {
    QDialog::showEvent(event);  // always call the base class version

    std::string username = Login::ActiveUser;
    auto it = FileHandler::usersData.find(username);

    if (it != FileHandler::usersData.end()) {
        double currentBalance = it->second.getBalance();
        QString balanceStr = QString("Your Balance: $%1").arg(currentBalance, 0, 'f', 2);
        ui->balancelabel->setText(balanceStr);  // 👈 make sure balanceLabel exists in the UI
    } else {
        ui->balancelabel->setText("User not found.");
    }
}


balance::~balance()
{
    delete ui;
}

void balance::on_backButton_clicked()
{
      MainWindow::stackedWidget->setCurrentWidget(MainWindow::usermainmenuWin);
}






