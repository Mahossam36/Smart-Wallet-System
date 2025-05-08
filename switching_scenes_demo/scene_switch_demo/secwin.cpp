#include "secwin.h"
#include "ui_secwin.h"
#include "mainwindow.h"

#include <iostream>

secWin::secWin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::secWin)
{
    ui->setupUi(this);

}

secWin::~secWin()
{
    delete ui;
}

void secWin::on_pushButton_clicked()
{
    // return to the first page from second page
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::firstPage);
}

