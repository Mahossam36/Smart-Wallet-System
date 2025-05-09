#include "loginwindow.h"
#include "ui_loginwindow.h"
#include"Login.h"
#include"mainwindow.h"
#include"ui_loginwindow.h"
#include<QMessageBox>


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    connect(ui->loginPageButton, &QPushButton::clicked, this, &LoginWindow::onLoginClicked);
    connect(ui->backButton, &QPushButton::clicked, this, &LoginWindow::onBackClicked);
    connect(ui->showLoginButton, &QPushButton::clicked, this, &LoginWindow::onTogglePasswordClicked);


}

LoginWindow::~LoginWindow()
{
    delete ui;
}
void LoginWindow::onLoginClicked()
{
    QString username = ui->usernameLogin->text();
    QString password = ui->passwordLogin->text();

    std::string user = username.toStdString();
    std::string pass = password.toStdString();



    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Username and password cannot be empty.");
        return;
    }

    Login::login(user, pass);
}

void LoginWindow::onTogglePasswordClicked()
{
    // Assuming passwordLabel is a QLineEdit used for password input
    if (ui->passwordLogin->echoMode() == QLineEdit::Password) {
        ui->passwordLogin->setEchoMode(QLineEdit::Normal);
        ui->showLoginButton->setText("HIDE");
    } else {
        ui->passwordLogin->setEchoMode(QLineEdit::Password);
        ui->showLoginButton->setText("SHOW");
    }
}

void LoginWindow::onBackClicked() {

    MainWindow::stackedWidget->setCurrentWidget(MainWindow::signwindow);
}
