#include "mainreal.h"
#include "ui_mainreal.h"
#include "mainwindow.h"

mainReal::mainReal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainReal)
{
    ui->setupUi(this);
}

mainReal::~mainReal()
{
    delete ui;
}

void mainReal::on_pushButton_clicked()
{
    // move to the second page by setting the stackedWidget in the mainWindow
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::secPage);
}

