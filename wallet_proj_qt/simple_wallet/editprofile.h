#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QDialog>

namespace Ui {
class EditProfile;
}

class EditProfile : public QDialog
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = nullptr);
    void populate();
    ~EditProfile();

private slots:
    void on_edit_pushButton_clicked();

    void on_save_pushButton_clicked();

    void on_backButton_clicked();

    void on_ChangePassword_Button_clicked();

    void on_del_pushButton_clicked();

private:
    Ui::EditProfile *ui;
};

#endif // EDITPROFILE_H
