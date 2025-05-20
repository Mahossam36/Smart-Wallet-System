#include "adminmainmenu.h"
#include "ui_adminmainmenu.h"
#include"mainwindow.h"
#include"viewusers.h"

adminmainmenu::adminmainmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminmainmenu)
{
    ui->setupUi(this);
}

adminmainmenu::~adminmainmenu()
{
    delete ui;
}

void adminmainmenu::on_viewusersbutton_clicked()
{
    MainWindow::view->populatelist();
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::view);

}



void adminmainmenu::on_viewusertransactionbutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::alltransactions);
    MainWindow::alltransactions->get_transactions();
}


void adminmainmenu::on_adduserbutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::addUser);

}


void adminmainmenu::on_logoutbutton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);

}

