#include "mainwindow.h"
#include "admin_viewuser_transaction.h"
#include "ui_mainwindow.h"
#include "loginwindow.h"

QStackedWidget* MainWindow::stackedWidget = nullptr;
LoginWindow* MainWindow::loginwindow=nullptr;
signupwindow* MainWindow::signwindow=nullptr;
userSendRequest_gui * MainWindow::sendRequestWin = nullptr;
usermainmenu* MainWindow::usermainmenuWin=nullptr;
adminmainmenu* MainWindow::adminmainmenuWin=nullptr;
balance* MainWindow::balanceWin =nullptr;
ViewUsers* MainWindow::view=nullptr;
Admin_ViewUser_Transaction* MainWindow:: Admin_Transaction= nullptr;
approveRequestWin * MainWindow::userApproveRequest = nullptr;
EditProfile * MainWindow::editprofile = nullptr;
view_all_transactions *MainWindow::alltransactions = nullptr;
AddUser * MainWindow::addUser=nullptr;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);
    loginwindow=new LoginWindow(this);
    signwindow=new signupwindow(this);
    sendRequestWin = new userSendRequest_gui(this);
    usermainmenuWin = new usermainmenu(this);
    adminmainmenuWin = new adminmainmenu(this);
    balanceWin = new  balance(this);
    view = new ViewUsers(this);
    Admin_Transaction = new Admin_ViewUser_Transaction(this);
    userApproveRequest = new approveRequestWin(this);
    editprofile = new EditProfile(this);
    alltransactions = new view_all_transactions(this);
    addUser = new AddUser(this);

    stackedWidget->addWidget(signwindow);
    stackedWidget->addWidget(loginwindow);
    stackedWidget->addWidget(sendRequestWin);
    stackedWidget->addWidget(usermainmenuWin);
    stackedWidget->addWidget(adminmainmenuWin);
    stackedWidget->addWidget(balanceWin);
    stackedWidget->addWidget(view);
    stackedWidget->addWidget(Admin_Transaction);
    stackedWidget->addWidget(userApproveRequest);
    stackedWidget->addWidget(editprofile);
    stackedWidget->addWidget(alltransactions);
    stackedWidget->addWidget(addUser);
    setCentralWidget(stackedWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
