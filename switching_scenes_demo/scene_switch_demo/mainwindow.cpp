#include "mainwindow.h"
#include "ui_mainwindow.h"


// intialize the static variables here
QStackedWidget * MainWindow::stackedWidget = nullptr;
secWin * MainWindow::secPage;
mainReal * MainWindow::firstPage;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // link the added stackedWidget from qt designer to the variable
    stackedWidget = ui->stackedWid;

    // making object for each page to be used later
    firstPage = new mainReal();
    secPage = new secWin();



    // add pages to the widget
    stackedWidget->addWidget(firstPage);
    stackedWidget->addWidget(secPage);


    // first page in app
    stackedWidget->setCurrentWidget(firstPage);

}

MainWindow::~MainWindow()
{
    delete ui;
}



