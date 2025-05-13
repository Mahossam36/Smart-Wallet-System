#include "admin_viewuser_transaction.h"
#include "mainwindow.h"
#include "ui_admin_viewuser_transaction.h"
#include "viewusers.h"
#include<iostream>

User &user =ViewUsers::choosenUser;
Admin_ViewUser_Transaction::Admin_ViewUser_Transaction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_ViewUser_Transaction)
{
    ui->setupUi(this);

}

Admin_ViewUser_Transaction::~Admin_ViewUser_Transaction()
{
    delete ui;
}

void Admin_ViewUser_Transaction::on_pushButton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::view);

}

void push_5_to_Transaction_History(){




}
void Admin_ViewUser_Transaction:: displa_User_Info_on_Screen(){

    ui->Full_Name->setText(QString::fromStdString(user.getFirstName()+" "+user.getLastName()));
    ui->PhoneNo_Labe->setText(QString::fromStdString(user.getPhoneNumber()));
    ui->UserName_Label->setText(QString::fromStdString(user.getUsername()));
    ui->Email_Label->setText(QString::fromStdString(user.getEmail()));
    ui->Nationalid_Labe->setText(QString::fromStdString(to_string((user.getId()))));
    ui->Balance_Labe->setText(QString::fromStdString(to_string(user.getBalance())));
}
