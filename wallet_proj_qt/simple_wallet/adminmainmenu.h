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
    void on_backButton_clicked();

    void on_viewusersbutton_clicked();

    void on_edituserbutton_clicked();

    void on_deleteuserbutton_clicked();

    void on_suspenduserbutton_clicked();

    void on_viewusertransactionbutton_clicked();

    void on_adjustuserbalancebutton_clicked();

private:
    Ui::adminmainmenu *ui;
};

#endif // ADMINMAINMENU_H
