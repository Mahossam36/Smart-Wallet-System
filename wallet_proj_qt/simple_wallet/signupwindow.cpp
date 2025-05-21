#include "signupwindow.h"
#include "ui_signupwindow.h"
#include"mainwindow.h"
#include "SignUp.h"
#include <QMessageBox>
#include <iostream>
#include <QString>
#include "UserManagement.h"
#include <regex>
#include <string>

signupwindow::signupwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signupwindow)
{
    ui->setupUi(this);


    if (ui->passwordLine) {
        ui->passwordLine->setEchoMode(QLineEdit::Password);
    }
}



void signupwindow::on_showButton_clicked()
{
    // Assuming passwordLabel is a QLineEdit used for password input
    if (ui->passwordLine->echoMode() == QLineEdit::Password) {
        ui->passwordLine->setEchoMode(QLineEdit::Normal);
        ui->showButton->setText("HIDE");
    } else {
        ui->passwordLine->setEchoMode(QLineEdit::Password);
        ui->showButton->setText("SHOW");
    }
}


void signupwindow::on_loginButton_clicked()
{

    MainWindow::stackedWidget->setCurrentWidget(MainWindow::loginwindow);

    ui->firstNameLine->clear();
    ui->lastNameLine->clear();
    ui->userNameLine->clear();
    ui->passwordLine->clear();
    ui->phoneNumLine->clear();
    ui->emailLine->clear();
    ui->idLine->clear();
}

signupwindow::~signupwindow()
{
    delete ui;
}


void signupwindow::on_signUpButton_clicked()
{
    QString qFirstName = ui->firstNameLine->text();
    QString qLastName = ui->lastNameLine->text();
    QString qUsername = ui->userNameLine->text();
    QString qPassword = ui->passwordLine->text();
    QString qPhoneNumber = ui->phoneNumLine->text();
    QString qEmail=ui->emailLine->text();
    QString qId = ui->idLine->text();


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

    if(username == "deletedUser") {

        QMessageBox::warning(this, "Input Error", "Reserved Username, choose other username");
        return;
    }


    if(id.length() != 14) {
        QMessageBox::warning(this, "Input Error", "National Id must contain 14 digits");
        return;
    }

    std::regex pattern("^\\d+$");

    if(!std::regex_match(id, pattern)) {

        QMessageBox::warning(this, "Input Error", "National Id must contain only numbers");
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




    UserManagement::createAccount(firstname,lastname,username,password, phonenumber, email, id);
    QMessageBox::information(this, "Sign Up Successful", "Created successfully!");

    ui->firstNameLine->clear();
    ui->lastNameLine->clear();
    ui->userNameLine->clear();
    ui->passwordLine->clear();
    ui->phoneNumLine->clear();
    ui->emailLine->clear();
    ui->idLine->clear();
}




