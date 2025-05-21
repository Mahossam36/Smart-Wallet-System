#include "editprofile.h"
#include "ui_editprofile.h"
#include"User.h"
#include"Login.h"
#include"FileHandler.h"
#include"SignUp.h"
#include<QMessageBox>
#include"mainwindow.h"
#include"changepassword.h"
#include"UserManagement.h"
EditProfile::EditProfile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditProfile)
{
    ui->setupUi(this);
}

void EditProfile::populate(){

    User & cuser = FileHandler::usersData[Login::ActiveUser];

    ui->save_pushButton->setVisible(false);

    ui->email_lineedit->setReadOnly(true);
    ui->Balance_lineEdit->setReadOnly(true);
    ui->Fname_lineedit->setReadOnly(true);
    ui->LastName_lineedit->setReadOnly(true);

    ui->Fname_lineedit->setFrame(false);
    ui->LastName_lineedit->setFrame(false);
    ui->email_lineedit->setFrame(false);
    ui->Balance_lineEdit->setFrame(false);

    ui->username_label->setText(QString::fromStdString(cuser.getUsername()));
    ui->Fname_lineedit->setText(QString::fromStdString((cuser.getFirstName())));
    ui->LastName_lineedit->setText(QString::fromStdString(cuser.getLastName()));
    ui->id_label->setText(QString::fromStdString(cuser.getId()));
    ui->email_lineedit->setText(QString::fromStdString(cuser.getEmail()));
    ui->phonenum_label->setText(QString::fromStdString(cuser.getPhoneNumber()));
    ui->Balance_lineEdit->setText(QString::fromStdString(to_string(cuser.getBalance())));

}

EditProfile::~EditProfile()
{
    delete ui;
}

void EditProfile::on_edit_pushButton_clicked()
{
    ui->save_pushButton->setVisible(true);

    ui->email_lineedit->setReadOnly(false);
    ui->Fname_lineedit->setReadOnly(false);
    ui->LastName_lineedit->setReadOnly(false);

    ui->Fname_lineedit->setFrame(true);
    ui->LastName_lineedit->setFrame(true);
    ui->email_lineedit->setFrame(true);



}


void EditProfile::on_save_pushButton_clicked()
{
    User & cuser = FileHandler::usersData[Login::ActiveUser];
    string fname,lname,email;
    fname=(ui->Fname_lineedit->text()).toStdString();
    lname=(ui->LastName_lineedit->text()).toStdString();
    email=(ui->email_lineedit->text()).toStdString();
    string datavalid = SignUp::DataValidation(fname,lname,cuser.getPhoneNumber());

    if(datavalid!=""){
        QMessageBox::warning(this, "Invalid Data", QString::fromStdString(datavalid));
    }
    else{
        cuser.setFname(fname);
        cuser.setLname(lname);
        cuser.setEmail(email);

        ui->save_pushButton->setVisible(false);

        ui->email_lineedit->setReadOnly(true);
        ui->Fname_lineedit->setReadOnly(true);
        ui->LastName_lineedit->setReadOnly(true);

        ui->Fname_lineedit->setFrame(false);
        ui->LastName_lineedit->setFrame(false);
        ui->email_lineedit->setFrame(false);

        QMessageBox::information(this,"Saved","Data User Updataed Successfully!");
    }
}


void EditProfile::on_backButton_clicked()
{
     MainWindow::stackedWidget->setCurrentWidget(MainWindow::usermainmenuWin);
}


void EditProfile::on_ChangePassword_Button_clicked()
{
    ChangePassword changepass;
    changepass.cuser=Login::ActiveUser;
    changepass.setModal(true);
    changepass.exec();
}


void EditProfile::on_del_pushButton_clicked()
{
    UserManagement::deleteUser(ui->username_label->text().toStdString());
    QMessageBox::information(this,"Deleted","User Was Deleted Successfully!");
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::signwindow);
}




