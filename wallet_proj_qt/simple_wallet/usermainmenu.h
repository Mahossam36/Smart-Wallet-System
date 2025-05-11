#ifndef USERMAINMENU_H
#define USERMAINMENU_H

#include <QDialog>

namespace Ui {
class usermainmenu;
}

class usermainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit usermainmenu(QWidget *parent = nullptr);
    ~usermainmenu();

private slots:
    void on_balancebutton_clicked();

    void on_backButton_clicked();

    void on_editprofilebutton_clicked();

    void on_sendmoneybutton_clicked();

    void on_requestmoneybutton_clicked();

    void on_logoutbutton_clicked();


    void on_transactionhistorybutton_clicked();

private:
    Ui::usermainmenu *ui;
};

#endif // USERMAINMENU_H
