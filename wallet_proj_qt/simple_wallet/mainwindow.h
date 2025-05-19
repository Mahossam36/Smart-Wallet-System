#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStackedWidget>
#include "admin_viewuser_transaction.h"
#include"loginwindow.h"
#include"signupwindow.h"
#include "usersendrequest_gui.h"
#include "usermainmenu.h"
#include "adminmainmenu.h"
#include  "balance.h"
#include"viewusers.h"
#include "approverequestwin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    static QStackedWidget  *stackedWidget;
    static LoginWindow  *loginwindow;
    static signupwindow * signwindow;
    static userSendRequest_gui * sendRequestWin;
    static usermainmenu * usermainmenuWin;
    static adminmainmenu * adminmainmenuWin;
    static balance * balanceWin;
    static ViewUsers  * view;
    static Admin_ViewUser_Transaction * Admin_Transaction;
    static approveRequestWin * userApproveRequest;

    ~MainWindow();

/*private slots:
    void onSignUpClicked();
    void onTogglePasswordClicked();
    void onSignInClicked();*/

private:
    Ui::MainWindow *ui;
    //LoginWindow* loginWindow;


};
#endif // MAINWINDOW_H
