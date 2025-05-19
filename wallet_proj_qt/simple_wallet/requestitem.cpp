#include "requestitem.h"
#include "ui_requestitem.h"
#include <QString>

requestItem::requestItem(const Transaction & transaction,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::requestItem)
{

    ui->setupUi(this);
    transactionID = transaction.getId();
    ui->userLabel->setText(QString::fromStdString(transaction.getRecipientUsername()));
    ui->amountLabel->setText(QString::number(transaction.getAmount()));
    ui->timeLabel->setText(QString::fromStdString(transaction.getFormattedTransactionTime()));

}

requestItem::~requestItem()
{
    delete ui;
}


void requestItem::on_acceptBtn_clicked()
{
    emit accepted(transactionID);
}


void requestItem::on_rejectBtn_clicked()
{
    emit rejected(transactionID);
}

