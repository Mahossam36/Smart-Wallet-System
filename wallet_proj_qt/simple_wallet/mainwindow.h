#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStackedWidget>
#include"loginwindow.h"
#include"signupwindow.h"

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
    QStackedWidget static  *stackedWidget;
    LoginWindow static *loginwindow;
    signupwindow static* signwindow;
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
