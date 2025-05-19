#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H
#include<iostream>
#include <QDialog>

using namespace std;
namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = nullptr );
    string cuser;
    ~ChangePassword();

private slots:
    void on_confirm_Button_clicked();

    void on_Cancel_Button_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
