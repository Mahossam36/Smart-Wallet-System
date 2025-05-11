#include "usermainmenu.h"
#include "ui_usermainmenu.h"
#include"mainwindow.h"
usermainmenu::usermainmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::usermainmenu)
{
    ui->setupUi(this);
}

usermainmenu::~usermainmenu()
{
    delete ui;
}

void usermainmenu::on_balancebutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::balanceWin);
}


void usermainmenu::on_backButton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);
}


void usermainmenu::on_editprofilebutton_clicked()
{

}


void usermainmenu::on_sendmoneybutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::sendRequestWin);
}


void usermainmenu::on_requestmoneybutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::sendRequestWin);

}


void usermainmenu::on_logoutbutton_clicked()
{
//delete the user account
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);


}




void usermainmenu::on_transactionhistorybutton_clicked()
{

}

