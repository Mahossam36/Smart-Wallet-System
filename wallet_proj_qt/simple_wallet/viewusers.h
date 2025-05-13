#ifndef VIEWUSERS_H
#define VIEWUSERS_H

#include <QDialog>
#include<User.h>
#include<unordered_map>
    using namespace std;

namespace Ui {
class ViewUsers;
}

class ViewUsers : public QDialog
{
    Q_OBJECT

public:
    explicit ViewUsers(QWidget *parent = nullptr);
    void populatelist();
    void updatelist();
    static User choosenUser;

    unordered_map<string,User>::iterator it;
    ~ViewUsers();

private slots:
    void on_Viewmore_button_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_edit_pushButton_clicked();

    void on_save_pushButton_clicked();

    void on_sus_pushButton_clicked();

    void on_del_pushButton_clicked();

    void on_backButton_2_clicked();

    void on_vth_pushButton_2_clicked();

private:
    Ui::ViewUsers *ui;
};

#endif // VIEWUSERS_H
