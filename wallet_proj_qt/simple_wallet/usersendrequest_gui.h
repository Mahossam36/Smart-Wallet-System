#ifndef USERSENDREQUEST_GUI_H
#define USERSENDREQUEST_GUI_H

#include <QWidget>

namespace Ui {
class userSendRequest_gui;
}

class userSendRequest_gui : public QWidget
{
    Q_OBJECT

public:
    explicit userSendRequest_gui(QWidget *parent = nullptr);
    ~userSendRequest_gui();
    void successTransactionAnimation();

private slots:
    void on_done_clicked();

    void on_back_clicked();

private:
    Ui::userSendRequest_gui *ui;
};

#endif // USERSENDREQUEST_GUI_H
