#ifndef ADMINMAINMENU_H
#define ADMINMAINMENU_H

#include <QDialog>

namespace Ui {
class adminmainmenu;
}

class adminmainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit adminmainmenu(QWidget *parent = nullptr);
    ~adminmainmenu();

private slots:

    void on_viewusersbutton_clicked();

    void on_viewusertransactionbutton_clicked();

    void on_adduserbutton_clicked();

    void on_logoutbutton_clicked();

private:
    Ui::adminmainmenu *ui;
};

#endif // ADMINMAINMENU_H
