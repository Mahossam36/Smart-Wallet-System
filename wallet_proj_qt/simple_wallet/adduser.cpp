#include "adduser.h"
#include "ui_adduser.h"
#include"SignUp.h"
#include"UserManagement.h"
#include"mainwindow.h"
#include<QMessageBox>
using namespace std;

AddUser::AddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUser)
{
    ui->setupUi(this);

    connect(ui->addNewButton, &QPushButton::clicked, this, &AddUser::on_addButton_clicked);
    connect(ui->showButton_add, &QPushButton::clicked, this, &AddUser::on_showButton_clicked);
    connect(ui->backAddButton, &QPushButton::clicked, this, &AddUser::on_backButton_clicked);

    if (ui->password_add) {
        ui->password_add->setEchoMode(QLineEdit::Password);
    }
}

AddUser::~AddUser()
{
    delete ui;
}
void AddUser::on_showButton_clicked()
{
    // Assuming passwordLabel is a QLineEdit used for password input
    if (ui->password_add->echoMode() == QLineEdit::Password) {
        ui->password_add->setEchoMode(QLineEdit::Normal);
        ui->showButton_add->setText("HIDE");
    } else {
        ui->password_add->setEchoMode(QLineEdit::Password);
        ui->showButton_add->setText("SHOW");
    }
}


void AddUser::on_addButton_clicked()
{
    QString qFirstName = ui->firstName_add->text();
    QString qLastName = ui->lastName_add->text();
    QString qUsername = ui->userName_add->text();
    QString qPassword = ui->password_add->text();
    QString qPhoneNumber = ui->phoneNum_add->text();
    QString qEmail=ui->email_add->text();
    QString qId = ui->id_add->text();


    string firstname = qFirstName.toStdString();
    string lastname = qLastName.toStdString();
    string username = qUsername.toStdString();
    string password = qPassword.toStdString();
    string phonenumber = qPhoneNumber.toStdString();
    string email=qEmail.toStdString();
    string id = qId.toStdString();

    if (firstname.empty() || lastname.empty() || username.empty() ||
        password.empty() || phonenumber.empty()|| email.empty() ||id.empty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }


    string validationMessage = SignUp::DataValidation(firstname, lastname, phonenumber);
    if(validationMessage != "") {
        QString qValidMessage = QString::fromStdString(validationMessage);
        QMessageBox::warning(this, "Invalid Input", qValidMessage);
        return;
    }

    string passwordValidMessage = SignUp::passChecker(password);
    if(passwordValidMessage != "") {
        QString qPasswordMessage = QString::fromStdString(passwordValidMessage);
        QMessageBox::warning(this, "Weak Password", qPasswordMessage);
        return;
    }

    if(SignUp::userFound(username) == true) {
        QMessageBox::warning(this, "Username Exists", QString("Sorry, username '%1' already exists.").arg(QString::fromStdString(username)));
        return;
    }

    UserManagement::createAccount(firstname,lastname,username,password, phonenumber, email, stoi(id));
    QMessageBox::information(this, "Sign Up Successful", "Created successfully!");

    ui->firstName_add->clear();
    ui->lastName_add->clear();
    ui->userName_add->clear();
    ui->password_add->clear();
    ui->phoneNum_add->clear();
    ui->email_add->clear();
    ui->id_add->clear();

    MainWindow::stackedWidget->setCurrentWidget(MainWindow::adminmainmenuWin);
}
void AddUser::on_backButton_clicked(){
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::adminmainmenuWin);

    ui->firstName_add->clear();
    ui->lastName_add->clear();
    ui->userName_add->clear();
    ui->password_add->clear();
    ui->phoneNum_add->clear();
    ui->email_add->clear();
    ui->id_add->clear();
}


