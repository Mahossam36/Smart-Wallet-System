/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *loginPageButton;
    QLineEdit *usernameLogin;
    QLineEdit *passwordLogin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *backButton;
    QPushButton *showLoginButton;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(1054, 640);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        loginPageButton = new QPushButton(centralwidget);
        loginPageButton->setObjectName("loginPageButton");
        loginPageButton->setGeometry(QRect(230, 440, 221, 41));
        loginPageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 19px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));
        loginPageButton->setFlat(false);
        usernameLogin = new QLineEdit(centralwidget);
        usernameLogin->setObjectName("usernameLogin");
        usernameLogin->setGeometry(QRect(140, 260, 381, 41));
        QPalette palette;
        QBrush brush(QColor(238, 238, 238, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        usernameLogin->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font.setPointSize(14);
        usernameLogin->setFont(font);
        usernameLogin->setFrame(false);
        passwordLogin = new QLineEdit(centralwidget);
        passwordLogin->setObjectName("passwordLogin");
        passwordLogin->setGeometry(QRect(140, 340, 381, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        passwordLogin->setPalette(palette1);
        passwordLogin->setFont(font);
        passwordLogin->setFrame(false);
        passwordLogin->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(660, 260, 401, 71));
        QPalette palette2;
        QBrush brush1(QColor(15, 106, 186, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        label->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font1.setPointSize(36);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, -60, 1101, 771));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 120, 531, 441));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(720, 340, 271, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        label_4->setPalette(palette3);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 120, 111, 111));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        label_5->setPalette(palette4);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Brush Script MT")});
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(true);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: 598bb8"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(60, 590, 93, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton->setFont(font3);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
""));
        showLoginButton = new QPushButton(centralwidget);
        showLoginButton->setObjectName("showLoginButton");
        showLoginButton->setGeometry(QRect(520, 350, 81, 29));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font4.setBold(false);
        showLoginButton->setFont(font4);
        showLoginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 10px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        showLoginButton->setFlat(true);
        LoginWindow->setCentralWidget(centralwidget);
        label_2->raise();
        label_3->raise();
        loginPageButton->raise();
        usernameLogin->raise();
        passwordLogin->raise();
        label->raise();
        label_4->raise();
        label_5->raise();
        backButton->raise();
        showLoginButton->raise();

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        loginPageButton->setText(QCoreApplication::translate("LoginWindow", "login", nullptr));
        usernameLogin->setPlaceholderText(QCoreApplication::translate("LoginWindow", "UserName", nullptr));
        passwordLogin->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Login To Your", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("LoginWindow", " Account", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "wally", nullptr));
        backButton->setText(QCoreApplication::translate("LoginWindow", "<  BACK", nullptr));
        showLoginButton->setText(QCoreApplication::translate("LoginWindow", "SHOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
