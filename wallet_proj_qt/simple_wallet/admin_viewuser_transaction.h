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
    void displa_User_Info_on_Screen();
    void on_pushButton_4_clicked();
    void statistical();
    int index;
    bool isNewest;
    int current ;
private slots:
    void on_pushButton_clicked();
    void populateRow(int i);

    void on_pushButton_3_clicked();

private:
    Ui::Admin_ViewUser_Transaction *ui;
};

#endif // ADMIN_VIEWUSER_TRANSACTION_H
