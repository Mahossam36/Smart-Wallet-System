#include "viewusers.h"
#include "ui_viewusers.h"
#include "FileHandler.h"
#include"mycustomrow1.h"
#include"UserManagement.h"
#include<qmessagebox.h>
#include"SignUp.h"
#include"mainwindow.h"

User ViewUsers::choosenUser;

ViewUsers::ViewUsers(QWidget *parent)
    : QDialog(parent)
, ui(new Ui::ViewUsers)
{
    ui->setupUi(this);

    //visuals allmost all from chatgpt


    /*  // Assume splitter is a pointer to your QSplitter
        QWidget *first = ui->splitter->widget(0);
        QWidget *second = ui->splitter->widget(1);

        // Remove both from splitter
        first->setParent(nullptr);
        second->setParent(nullptr);

        // Re-add in reversed order
        ui->splitter->addWidget(second);
        ui->splitter->addWidget(first);
                                        */

    ui->save_pushButton->setVisible(false);



    ui->splitter->setSizes({150, 300});
    ui->splitter->setStretchFactor(0, 0);  // Prevent resizing left
    ui->splitter->setStretchFactor(1, 1);  // Right side grows

}
void  ViewUsers::populatelist(){
    it =FileHandler::usersData.begin();
    for(int i=0;i<ui->listWidget->count();i++){ //to prevent dublicates
        if(it!=FileHandler::usersData.end()){
            it++;
        }
        else
            break;
    }
    // qDebug() << "usersData size:" << FileHandler::usersData.size();
    for(int i=0;i<5;i++){
        if(it!=FileHandler::usersData.end()){
            qDebug() << "Username:" << QString::fromStdString(it->second.getUsername());
            MyCustomRow1 *row = new MyCustomRow1(it->second.getUsername(), it->second.getPhoneNumber(), it->second.getBalance()); //create the row with the data
            QListWidgetItem *item = new QListWidgetItem(ui->listWidget); //create an iteam for the list
            qDebug() << "Size hint:" << row->sizeHint();
            item->setSizeHint(row->sizeHint());
            ui->listWidget->addItem(item);//add the iteam
            ui->listWidget->setItemWidget(item, row);//add the data with the template
        }
        else
            break;
        it++;
    }
    if(it==FileHandler::usersData.end()){
        ui->Viewmore_button->setVisible(false);
    }
    else
        ui->Viewmore_button->setVisible(true);
}


void ViewUsers::on_Viewmore_button_clicked()
{
    populatelist();

}


void ViewUsers::on_listWidget_currentRowChanged(int currentRow) //return the index of the row in the list
{

    ui->save_pushButton->setVisible(false);
    ui->email_lineedit->setReadOnly(true);
    ui->password_lineEdit->setReadOnly(true);
    ui->Balance_lineEdit->setReadOnly(true);
    ui->email_lineedit->setFrame(false);
    ui->password_lineEdit->setFrame(false);
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
    ui->id_label->setText(QString::fromStdString(to_string((it->second).getId())));
    ui->email_lineedit->setText(QString::fromStdString((it->second).getEmail()));
    ui->password_lineEdit->setText(QString::fromStdString((it->second).getPassword()));
    ui->phonenum_label->setText(QString::fromStdString((it->second).getPhoneNumber()));
    ui->Balance_lineEdit->setText(QString::fromStdString(to_string((it->second).getBalance())));
    ui->email_lineedit->setReadOnly(true);
    ui->password_lineEdit->setReadOnly(true);
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
    ui->password_lineEdit->setReadOnly(false);
    ui->Balance_lineEdit->setReadOnly(false);

    ui->email_lineedit->setFrame(true);
    ui->password_lineEdit->setFrame(true);
    ui->Balance_lineEdit->setFrame(true);

    ui->save_pushButton->setVisible(true);

}
void ViewUsers::updatelist(){
    //same here it acess the row first then in the row it calles the function update which updates the row data with the given data
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        QListWidgetItem* item = ui->listWidget->item(i);
        MyCustomRow1* row = qobject_cast<MyCustomRow1*>(ui->listWidget->itemWidget(item));

        if (row) {
            string username = row->getUsername().toStdString();
            const auto& user = FileHandler::usersData[username];
            row->updateFields(user.getPhoneNumber(), user.getBalance());//UpdateFields is a function in the MyCustomRow1
        }
    }
}

void ViewUsers::on_save_pushButton_clicked()
{
    string pass=ui->password_lineEdit->text().toStdString();
    string passwordValidMessage = SignUp::passChecker(pass);
    if(passwordValidMessage != "") {
        QString qPasswordMessage = QString::fromStdString(passwordValidMessage);
        QMessageBox::warning(this, "Weak Password", qPasswordMessage);
    }
    else{
        string username=ui->username_label->text().toStdString();
        FileHandler::usersData[username].setBalance((ui->Balance_lineEdit->text()).toDouble());
        string email=(ui->email_lineedit->text()).toStdString();
        FileHandler::usersData[username].setEmail(email);

        FileHandler::usersData[username].setPassword(pass);

        updatelist();

        ui->save_pushButton->setVisible(false);

        ui->email_lineedit->setReadOnly(true);
        ui->password_lineEdit->setReadOnly(true);
        ui->Balance_lineEdit->setReadOnly(true);

        ui->email_lineedit->setFrame(false);
        ui->password_lineEdit->setFrame(false);
        ui->Balance_lineEdit->setFrame(false);

        QMessageBox::information(this,"Saved","Data User Updataed Successfully!");
    }
}


void ViewUsers::on_sus_pushButton_clicked()
{
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


void ViewUsers::on_del_pushButton_clicked()
{
    string username=ui->username_label->text().toStdString();
    QListWidgetItem *item =ui->listWidget->takeItem(ui->listWidget->currentRow());//remove the iteam from the widget
    delete item;//free the space the iteam was reserving

    //then we delete the user from the users data

    UserManagement::deleteUser(username);

    QMessageBox::information(this,"Deleted","User Was Deleted Successfully!");
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
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::Admin_Transaction);
    MainWindow::Admin_Transaction->displa_User_Info_on_Screen();
}

