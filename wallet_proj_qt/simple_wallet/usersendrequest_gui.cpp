#include "usersendrequest_gui.h"
#include "ui_usersendrequest_gui.h"
#include <QtSvgWidgets/QSvgWidget>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QDoubleValidator>
#include <QAbstractButton>
#include <string>
#include <iostream>
#include "transactionsManagement.h"
#include <iomanip>
#include "Login.h"
#include <QPropertyAnimation>
#include <QTimer>
#include <QGraphicsOpacityEffect>
#include "mainwindow.h"
using namespace  std ;

userSendRequest_gui::userSendRequest_gui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::userSendRequest_gui)
{
    ui->setupUi(this);
    QSvgWidget * svg = new QSvgWidget(":/sendrequest/undraw_vault_tyfh.svg", this);
    int containerW = ui->svgContainer->width();
    int containerH = ui->svgContainer->height();

    float aspectRatio = 2.16f / 1.0f;


    int targetW = containerW;
    int targetH = static_cast<int>(targetW / aspectRatio);

    if (targetH > containerH) {
        targetH = containerH;
        targetW = static_cast<int>(targetH * aspectRatio);
    }

    int x = (containerW - targetW) / 2;
    int y = (containerH - targetH) / 2;

    svg->setGeometry(x + 500, y, targetW, targetH);
    svg->show();



    ui->amount->setValidator(new QDoubleValidator(0, 1e9, 2, this));

    ui->floatMsg->hide();
}

userSendRequest_gui::~userSendRequest_gui()
{
    delete ui;
}

void userSendRequest_gui::successTransactionAnimation() {
    ui->floatMsg->show();

    QTimer::singleShot(2000, this, [=]() {
        ui->floatMsg->hide();
    });
}




void userSendRequest_gui::on_done_clicked()
{
    QString username = ui->username->text();
    QString amount = ui->amount->text();

    string usernameText = username.toStdString();
    double amountDouble = amount.toDouble();


    if(username.isEmpty() || amount.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }


    if(username == Login::ActiveUser) {
        QMessageBox::warning(this, "Input Error", "You cannot request or send money to your self");
        return;
    }

    int radioOption;

    QAbstractButton * selected = ui->buttonGroup->checkedButton();
    if(selected) {
        QString text = selected->text();
        string radioText = text.toStdString();
        if(radioText == "Send Money") {
            radioOption = 1;
        } else {
            radioOption = 2;
        }
    } else {
        QMessageBox::warning(this, "Input Error", "Please choose the operation radion button.");
        return;
    }


    if(radioOption == 1) {
        int sendTransReturn = transactionsManagement::sendMoney(usernameText, Login::ActiveUser, amountDouble);
        if(sendTransReturn == 0) {
            QMessageBox::warning(this, "Recipient User Error" , "Recipient username not found.");
            return;
        } else if(sendTransReturn == 1) {
            QMessageBox::warning(this, "Recipient User Error" , "Recipient account is suspended");
            return;
        } else if(sendTransReturn == 2) {
            QMessageBox::warning(this, "Balance Error" , "You don't have enough money to send");
            return;
        } else if(sendTransReturn == 3) {
            successTransactionAnimation();

            ui->username->clear();
            ui->amount->clear();
        }

    } else {
        int requestTransReturn = transactionsManagement::requestMoney(Login::ActiveUser, usernameText, amountDouble);
        if(requestTransReturn == 0) {
            QMessageBox::warning(this, "Sender User Error" , "Sender username not found.");
            return;
        } else if(requestTransReturn == 1) {
            QMessageBox::warning(this, "Sender User Error" , "Sender account is suspended.");
            return;
        } else if(requestTransReturn == 2) {
            ui->floatText->setText("Successful Request");
            successTransactionAnimation();

            ui->username->clear();
            ui->amount->clear();
        }

    }

}


void userSendRequest_gui::on_back_clicked()
{
    MainWindow::stackedWidget->setCurrentWidget(MainWindow::usermainmenuWin);
}

