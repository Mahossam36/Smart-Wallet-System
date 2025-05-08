#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QWidget>
#include "secwin.h"
#include "mainreal.h"

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
    ~MainWindow();
    // declare all forms in entire app here as static
    static QStackedWidget * stackedWidget;
    static secWin * secPage;
    static mainReal * firstPage;
private slots:


private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
