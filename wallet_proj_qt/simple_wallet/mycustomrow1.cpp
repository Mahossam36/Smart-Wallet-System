#include "mycustomrow1.h"
#include "ui_mycustomrow1.h"
#include<QHBoxLayout>
using namespace std;

//constructor
MyCustomRow1::MyCustomRow1(const string &uname,
                           const string &phone,
                           double balance,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyCustomRow1)
{
    ui->setupUi(this);
    // auto layout = new QHBoxLayout(this);
    //setLayout(layout);

    // Optional layout tweaks
    //layout->setContentsMargins(10, 10, 10, 10);
    //layout->setSpacing(5);


    ui->username_label->setText(QString::fromStdString(uname));//take the username and convert it to qstring then applay it to the lable
    ui->phone_label->setText(QString::fromStdString(phone));
    ui->balance_label->setText( "Balance :"+QString::number(balance)+" EGP");
}

//getters
QString MyCustomRow1::getUsername() const {
    return ui->username_label->text();
}

QString MyCustomRow1::getPhone() const {
    return ui->phone_label->text();
}

QString MyCustomRow1::getBalance() const {
    return ui->balance_label->text();
}

void MyCustomRow1::updateFields(const string& phone, double balance) {
    ui->phone_label->setText(QString::fromStdString(phone));
    ui->balance_label->setText(QString::number(balance, 'f', 2));  // two decimal places
}
MyCustomRow1::~MyCustomRow1()
{
    delete ui;
}
