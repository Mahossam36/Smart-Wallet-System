#ifndef ADMIN_VIEWUSER_TRANSACTION_H
#define ADMIN_VIEWUSER_TRANSACTION_H

#include <QMainWindow>

namespace Ui {
class Admin_ViewUser_Transaction;
}

class Admin_ViewUser_Transaction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin_ViewUser_Transaction(QWidget *parent = nullptr);
    ~Admin_ViewUser_Transaction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Admin_ViewUser_Transaction *ui;
};

#endif // ADMIN_VIEWUSER_TRANSACTION_H
