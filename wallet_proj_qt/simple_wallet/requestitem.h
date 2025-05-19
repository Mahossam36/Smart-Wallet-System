#ifndef REQUESTITEM_H
#define REQUESTITEM_H

#include <QWidget>
#include "Transaction.h"


namespace Ui {
class requestItem;
}

class requestItem : public QWidget
{
    Q_OBJECT

public:
    explicit requestItem(const Transaction & transaction ,QWidget *parent = nullptr);
    ~requestItem();

signals:
    void accepted(int transactionId);
    void rejected(int transactionId);

private slots:
    void on_acceptBtn_clicked();
    void on_rejectBtn_clicked();

private:
    Ui::requestItem *ui;
    int transactionID;
};

#endif // REQUESTITEM_H
