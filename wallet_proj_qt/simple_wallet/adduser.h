#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>

namespace Ui {
class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = nullptr);
    ~AddUser();

private slots:
    void on_addButton_clicked();
    void on_showButton_clicked();
    void on_backButton_clicked();


private:
    Ui::AddUser *ui;
};

#endif // ADDUSER_H
