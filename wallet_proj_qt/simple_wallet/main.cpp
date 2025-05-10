#include "mainwindow.h"

#include <QApplication>
#include "FileHandler.h"
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    FileHandler fh;
    return a.exec();
}
