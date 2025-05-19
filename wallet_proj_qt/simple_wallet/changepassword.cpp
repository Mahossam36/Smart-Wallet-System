#include "changepassword.h"
#include "ui_changepassword.h"
#include"FileHandler.h"
#include"SignUp.h"
#include"Login.h"
#include<qmessagebox.h>
using namespace std;

ChangePassword::ChangePassword(QWidget *parent )
    : QDialog(parent)
    , ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::FramelessWindowHint);

}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_confirm_Button_clicked()
{
    string pass=ui->password_textbox->text().toStdString();
    string passwordValidMessage = SignUp::passChecker(pass);
    if(passwordValidMessage != "") {
        QString qPasswordMessage = QString::fromStdString(passwordValidMessage);
        QMessageBox::warning(this, "Weak Password", qPasswordMessage);
    }
    else
    {
        FileHandler::usersData[cuser].setPassword(pass);
        QMessageBox::information(this,"Updated","User Password Was Updated Successfully!");
        this->close();
    }
}


void ChangePassword::on_Cancel_Button_clicked()
{
     this->close();
}

