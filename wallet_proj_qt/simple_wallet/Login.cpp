#include "Login.h"
#include "UserManagement.h"
#include "FileHandler.h"
#include "User.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <iostream>
#include <string>
#include <QWidget>
#include <QMessageBox>
#include "mainwindow.h"
using namespace std;


Admin Login::admin("master_control0", "J9T$4Ag@KhM");
int Login::totalFailedAttempts = 0;
const int Login::maxFailedAttempts = 3;
string Login::ActiveUser = "";//intail value of the active user is empty;

void Login::login(string& username, string& password) {
    // Admin login
    if (username == admin.getUsername() && password == admin.getPassword()) {
        QMessageBox::information(nullptr, "Login Successful", "Admin login successful!");
        totalFailedAttempts = 0;
        return;
    }

    // Search for user
    auto it = FileHandler::usersData.find(username);

    if (it == FileHandler::usersData.end()) {
        QMessageBox::warning(nullptr, "Login Failed", "Username not found.");
        return;
    }

    User& realUser = it->second;

    if (!realUser.getuserfailedattempts()) {
        QMessageBox::critical(nullptr, "Account Locked",
                              "Your account is locked due to too many failed login attempts...\nTry contacting the admin.");
        return;
    }

    UserManagement userManagement;
    if (userManagement.searchAccount(username, password)) {
        totalFailedAttempts = 0;
        ActiveUser = realUser.getUsername();
        QMessageBox::information(nullptr, "Login Successful", "Login successful!");
        MainWindow::stackedWidget->setCurrentWidget(MainWindow::sendRequestWin);
    } else {
        totalFailedAttempts++;

        QString attemptsMsg = QString("Invalid password.\nFailed attempts: %1/%2.")
                                  .arg(totalFailedAttempts)
                                  .arg(maxFailedAttempts);

        QMessageBox::warning(nullptr, "Login Failed", attemptsMsg);

        if (totalFailedAttempts >= maxFailedAttempts) {
            realUser.setuserfailedattempts(false);
            QMessageBox::critical(nullptr, "Account Locked",
                                  "Your account is now locked due to too many failed login attempts.");
            totalFailedAttempts = 0;
        }
    }
}

