#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginwindow.h"

QStackedWidget* MainWindow::stackedWidget = nullptr;
LoginWindow* MainWindow::loginwindow=nullptr;
signupwindow* MainWindow::signwindow=nullptr;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);
    loginwindow=new LoginWindow(this);
    signwindow=new signupwindow(this);


    stackedWidget->addWidget(signwindow);
    stackedWidget->addWidget(loginwindow);
    setCentralWidget(stackedWidget);


}

MainWindow::~MainWindow()
{
    delete ui;
}
