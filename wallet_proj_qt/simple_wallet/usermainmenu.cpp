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


void usermainmenu::on_editprofilebutton_clicked()
{
    MainWindow::editprofile->populate();
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::editprofile);
}




void usermainmenu::on_requestmoneybutton_clicked()
{
    MainWindow::userApproveRequest->showListOfRequests();
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::userApproveRequest);

}


void usermainmenu::on_logoutbutton_clicked()
{
//delete the user account
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);


}




void usermainmenu::on_transactionhistorybutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::Admin_Transaction);
    MainWindow::Admin_Transaction->displa_User_Info_on_Screen();
    MainWindow::Admin_Transaction->on_pushButton_4_clicked();
}


void usermainmenu::on_sendorrequestmoneybutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::sendRequestWin);
}

