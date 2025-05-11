#include "adminmainmenu.h"
#include "ui_adminmainmenu.h"
#include"mainwindow.h"

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

void adminmainmenu::on_backButton_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);
}



void adminmainmenu::on_viewusersbutton_clicked()
{

}


void adminmainmenu::on_edituserbutton_clicked()
{

}


void adminmainmenu::on_deleteuserbutton_clicked()
{

}


void adminmainmenu::on_suspenduserbutton_clicked()
{

}


void adminmainmenu::on_viewusertransactionbutton_clicked()
{

}


void adminmainmenu::on_adjustuserbalancebutton_clicked()
{

}

