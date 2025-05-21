#include "viewusers.h"
#include "ui_viewusers.h"
#include "FileHandler.h"
#include"mycustomrow1.h"
#include"UserManagement.h"
#include<qmessagebox.h>
#include"SignUp.h"
#include"mainwindow.h"
#include<iostream>
#include<changepassword.h>
using namespace std;

User ViewUsers::choosenUser;

ViewUsers::ViewUsers(QWidget *parent)
    : QDialog(parent)
, ui(new Ui::ViewUsers)
{
    ui->setupUi(this);

    ui->save_pushButton->setVisible(false);

    ui->splitter->setSizes({150, 300});
    ui->splitter->setStretchFactor(0, 0);  // Prevent resizing left
    ui->splitter->setStretchFactor(1, 1);  // Right side grows

}
void  ViewUsers::populatelist(){
    ui->listWidget->clear();
    auto it =FileHandler::usersData.begin();
    for(int i=0;i<5;i++){
        if(it!=FileHandler::usersData.end()){

            MyCustomRow1 *row = new MyCustomRow1(it->second.getUsername(), it->second.getPhoneNumber(), it->second.getBalance()); //create the row with the data
            QListWidgetItem *item = new QListWidgetItem(ui->listWidget); //create an iteam for the list

            item->setSizeHint(row->sizeHint());
            ui->listWidget->addItem(item);//add the iteam
            ui->listWidget->setItemWidget(item, row);//add the data with the template
        }
        else
            break;
        it++;
    }

    if (ui->listWidget->count() > 0) {//there is items in the list
        ui->listWidget->setCurrentRow(0); // so when i reset i view the data of the first user on the list intiali even if the user didnt choose  as spcefic user
    }   //if the user changed the row then on_listWidget_currentRowChanged will be trigered and the data will change

    if(it==FileHandler::usersData.end()){
        ui->Viewmore_button->setVisible(false);
    }
    else
        ui->Viewmore_button->setVisible(true);
}


void ViewUsers::on_Viewmore_button_clicked()
{
    /* why we repate the same logic of the populate and not calling it ?
         * bec the populate function clears first the list and this is not the case in view more i want too view more data not delete the old one
         * and i need a diffrent iteartor too keep track of the current viewd items every time
         * why do i clear in the first place ?
         * well i finded out that when we add a new user this user maybe add at an index where the itearator was before which leads to a problem of not viewing this user
         * this was fixed by always clears the list when going to the viewusers then starts over when we click view more so even if the new user is add and he is in the top 5 he will be added too
         */
    auto it1= FileHandler::usersData.begin();
    advance(it1,ui->listWidget->count());//skipes the already existing users in list
    //add the next five users
    for(int i=0;i<5;i++){
        if(it1!=FileHandler::usersData.end()){

            MyCustomRow1 *row = new MyCustomRow1(it1->second.getUsername(), it1->second.getPhoneNumber(), it1->second.getBalance()); //create the row with the data
            QListWidgetItem *item = new QListWidgetItem(ui->listWidget); //create an iteam for the list

            item->setSizeHint(row->sizeHint());
            ui->listWidget->addItem(item);//add the iteam
            ui->listWidget->setItemWidget(item, row);//add the data with the template
        }
        else
            break;
        it1++;
    }
    if(it1==FileHandler::usersData.end()){
        ui->Viewmore_button->setVisible(false);
    }
    else
        ui->Viewmore_button->setVisible(true);

}


void ViewUsers::on_listWidget_currentRowChanged(int currentRow) //return the index of the row in the list
{
    //very important cuz if i clear the data then
        if (currentRow < 0 || currentRow >= ui->listWidget->count()) {
        return;
    }
    ui->save_pushButton->setVisible(false);
    ui->email_lineedit->setReadOnly(true);
   // ui->password_lineEdit->setReadOnly(true);
    ui->Balance_lineEdit->setReadOnly(true);
    ui->email_lineedit->setFrame(false);
    //ui->password_lineEdit->setFrame(false);
    ui->Balance_lineEdit->setFrame(false);


    string currentuser;
    QListWidgetItem *item = ui->listWidget->item(currentRow);//create an iteam with the current selected row
    if (item) {
        auto row = qobject_cast<MyCustomRow1 *>(ui->listWidget->itemWidget(item)); //got from chatgpt tbh idk what is this
        if (row) {
            currentuser=row->getUsername().toStdString();
        }
    }
    ;
    //assigning the data to the labels and figures
    auto it =FileHandler::usersData.find(currentuser);
    choosenUser=it->second;

    ui->username_label->setText(QString::fromStdString(it->first));
    ui->fname_label->setText(QString::fromStdString((it->second).getFirstName()));
    ui->lname_label->setText(QString::fromStdString((it->second).getLastName()));
    ui->id_label->setText(QString::fromStdString((it->second).getId()));
    ui->email_lineedit->setText(QString::fromStdString((it->second).getEmail()));
   // ui->password_lineEdit->setText(QString::fromStdString((it->second).getPassword()));
    ui->phonenum_label->setText(QString::fromStdString((it->second).getPhoneNumber()));
    ui->Balance_lineEdit->setText(QString::fromStdString(to_string((it->second).getBalance())));
    ui->email_lineedit->setReadOnly(true);
  //  ui->password_lineEdit->setReadOnly(true);
    ui->Balance_lineEdit->setReadOnly(true);
    if((it->second).getSuspensionStatus()){
        ui->sus_pushButton->setText("UnSuspend");
    }
    else
        ui->sus_pushButton->setText("Suspend");

}


void ViewUsers::on_edit_pushButton_clicked()
{
    ui->email_lineedit->setReadOnly(false);
   // ui->password_lineEdit->setReadOnly(false);
    ui->Balance_lineEdit->setReadOnly(false);

    ui->email_lineedit->setFrame(true);
   // ui->password_lineEdit->setFrame(true);
    ui->Balance_lineEdit->setFrame(true);

    ui->save_pushButton->setVisible(true);

}
//CHANGED
//more effictive than looping over the whole list just changes the currente selected row no more
void ViewUsers::updatelist(){
    QListWidgetItem* currentItem = ui->listWidget->currentItem();//get the index of the selected row
    if (currentItem) {
        // int index = ui->listWidget->row(currentItem);
        MyCustomRow1* row = qobject_cast<MyCustomRow1*>(ui->listWidget->itemWidget(currentItem));//creating obj of this row

        if (row) {
            string username = row->getUsername().toStdString();
            const auto& user = FileHandler::usersData[username];
            row->updateFields(user.getPhoneNumber(), user.getBalance());
        }
    }
}

void ViewUsers::on_save_pushButton_clicked()
{
   /* string pass=ui->password_lineEdit->text().toStdString();
    string passwordValidMessage = SignUp::passChecker(pass);
    if(passwordValidMessage != "") {
        QString qPasswordMessage = QString::fromStdString(passwordValidMessage);
        QMessageBox::warning(this, "Weak Password", qPasswordMessage);
    }*/
    //else{
        string username=ui->username_label->text().toStdString();
        FileHandler::usersData[username].setBalance((ui->Balance_lineEdit->text()).toDouble());
        string email=(ui->email_lineedit->text()).toStdString();
        FileHandler::usersData[username].setEmail(email);

        //FileHandler::usersData[username].setPassword(pass);

        updatelist();

        ui->save_pushButton->setVisible(false);

        ui->email_lineedit->setReadOnly(true);
        //ui->password_lineEdit->setReadOnly(true);
        ui->Balance_lineEdit->setReadOnly(true);

        ui->email_lineedit->setFrame(false);
        //ui->password_lineEdit->setFrame(false);
        ui->Balance_lineEdit->setFrame(false);

        QMessageBox::information(this,"Saved","Data User Updataed Successfully!");
    //}
}


void ViewUsers::on_sus_pushButton_clicked()
{
    if(ui->listWidget->currentIndex().isValid()){
    string username=ui->username_label->text().toStdString();

    if( FileHandler::usersData[username].getSuspensionStatus()){
        FileHandler::usersData[username].activate();
        QMessageBox::information(this,"UnSusbend","User Was Activated Successfully!");
        ui->sus_pushButton->setText("Suspend");

    }
    else{
        FileHandler::usersData[username].suspend();
        QMessageBox::information(this,"Susbend","User Was Suspended Successfully!");
        ui->sus_pushButton->setText("UnSuspend");
    }
    }
}


void ViewUsers::on_del_pushButton_clicked()
{
    if(ui->listWidget->currentIndex().isValid()){
    string username=ui->username_label->text().toStdString();
    QListWidgetItem *item =ui->listWidget->takeItem(ui->listWidget->currentRow());//remove the iteam from the widget
    delete item;//free the space the iteam was reserving

    //then we delete the user from the users data

    UserManagement::deleteUser(username);

    QMessageBox::information(this,"Deleted","User Was Deleted Successfully!");
    }
}

ViewUsers::~ViewUsers()
{
    delete ui;
}



void ViewUsers::on_backButton_2_clicked()
{
     MainWindow::stackedWidget->setCurrentWidget(MainWindow::adminmainmenuWin);
}


void ViewUsers::on_vth_pushButton_2_clicked()
{
    if(ui->listWidget->currentIndex().isValid()){
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::Admin_Transaction);
    MainWindow::Admin_Transaction->displa_User_Info_on_Screen();
    MainWindow::Admin_Transaction->on_pushButton_4_clicked();
    }

}


void ViewUsers::on_ChangePassword_clicked()
{
    ChangePassword changepass;
    changepass.cuser=ui->username_label->text().toStdString();
    changepass.setModal(true);
    changepass.exec();
}

