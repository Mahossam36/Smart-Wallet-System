#include "admin_viewuser_transaction.h"
#include "mainwindow.h"
#include "ui_admin_viewuser_transaction.h"

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

