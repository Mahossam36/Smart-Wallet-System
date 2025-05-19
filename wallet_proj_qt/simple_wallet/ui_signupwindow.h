/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signupwindow
{
public:
    QLineEdit *firstNameLine;
    QLineEdit *phoneNumLine;
    QPushButton *loginButton;
    QPushButton *signUpButton;
    QLabel *label;
    QLineEdit *userNameLine;
    QLineEdit *idLine;
    QLineEdit *emailLine;
    QLabel *label_2;
    QLineEdit *passwordLine;
    QLineEdit *lastNameLine;
    QPushButton *showButton;

    void setupUi(QDialog *signupwindow)
    {
        if (signupwindow->objectName().isEmpty())
            signupwindow->setObjectName("signupwindow");
        signupwindow->resize(1151, 653);
        firstNameLine = new QLineEdit(signupwindow);
        firstNameLine->setObjectName("firstNameLine");
        firstNameLine->setGeometry(QRect(620, 110, 321, 41));
        QPalette palette;
        QBrush brush(QColor(238, 238, 238, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        firstNameLine->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font.setPointSize(14);
        font.setBold(false);
        firstNameLine->setFont(font);
        firstNameLine->setFrame(false);
        phoneNumLine = new QLineEdit(signupwindow);
        phoneNumLine->setObjectName("phoneNumLine");
        phoneNumLine->setGeometry(QRect(620, 460, 321, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        phoneNumLine->setPalette(palette1);
        phoneNumLine->setFont(font);
        phoneNumLine->setFrame(false);
        loginButton = new QPushButton(signupwindow);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(100, 400, 221, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font1.setBold(false);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));
        signUpButton = new QPushButton(signupwindow);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(660, 590, 221, 41));
        signUpButton->setFont(font1);
        signUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));
        label = new QLabel(signupwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(570, 0, 441, 81));
        QPalette palette2;
        QBrush brush1(QColor(15, 106, 186, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        QBrush brush2(QColor(89, 139, 184, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        label->setPalette(palette2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font2.setPointSize(28);
        font2.setBold(false);
        label->setFont(font2);
        userNameLine = new QLineEdit(signupwindow);
        userNameLine->setObjectName("userNameLine");
        userNameLine->setGeometry(QRect(620, 250, 321, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        userNameLine->setPalette(palette3);
        userNameLine->setFont(font);
        userNameLine->setFrame(false);
        idLine = new QLineEdit(signupwindow);
        idLine->setObjectName("idLine");
        idLine->setGeometry(QRect(620, 390, 321, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        idLine->setPalette(palette4);
        idLine->setFont(font);
        idLine->setFrame(false);
        emailLine = new QLineEdit(signupwindow);
        emailLine->setObjectName("emailLine");
        emailLine->setGeometry(QRect(620, 320, 321, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        emailLine->setPalette(palette5);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font3.setPointSize(14);
        emailLine->setFont(font3);
        emailLine->setFrame(false);
        label_2 = new QLabel(signupwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, -10, 1181, 661));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/screen1Background.png);"));
        passwordLine = new QLineEdit(signupwindow);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setGeometry(QRect(620, 530, 321, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        passwordLine->setPalette(palette6);
        passwordLine->setFont(font);
        passwordLine->setFrame(false);
        passwordLine->setEchoMode(QLineEdit::EchoMode::Password);
        lastNameLine = new QLineEdit(signupwindow);
        lastNameLine->setObjectName("lastNameLine");
        lastNameLine->setGeometry(QRect(620, 180, 321, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        lastNameLine->setPalette(palette7);
        lastNameLine->setFont(font);
        lastNameLine->setFrame(false);
        showButton = new QPushButton(signupwindow);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(940, 540, 81, 29));
        showButton->setFont(font1);
        showButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 10px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        showButton->setFlat(true);
        label_2->raise();
        firstNameLine->raise();
        phoneNumLine->raise();
        loginButton->raise();
        signUpButton->raise();
        label->raise();
        userNameLine->raise();
        idLine->raise();
        emailLine->raise();
        passwordLine->raise();
        lastNameLine->raise();
        showButton->raise();
        QWidget::setTabOrder(firstNameLine, lastNameLine);
        QWidget::setTabOrder(lastNameLine, userNameLine);
        QWidget::setTabOrder(userNameLine, emailLine);
        QWidget::setTabOrder(emailLine, idLine);
        QWidget::setTabOrder(idLine, phoneNumLine);
        QWidget::setTabOrder(phoneNumLine, loginButton);
        QWidget::setTabOrder(loginButton, passwordLine);
        QWidget::setTabOrder(passwordLine, signUpButton);
        QWidget::setTabOrder(signUpButton, showButton);

        retranslateUi(signupwindow);

        QMetaObject::connectSlotsByName(signupwindow);
    } // setupUi

    void retranslateUi(QDialog *signupwindow)
    {
        signupwindow->setWindowTitle(QCoreApplication::translate("signupwindow", "Dialog", nullptr));
        firstNameLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "First Name", nullptr));
        phoneNumLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "Phone Number", nullptr));
        loginButton->setText(QCoreApplication::translate("signupwindow", "login", nullptr));
        signUpButton->setText(QCoreApplication::translate("signupwindow", "signup", nullptr));
        label->setText(QCoreApplication::translate("signupwindow", "Create Your Account", nullptr));
        userNameLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "Username", nullptr));
        idLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "National ID", nullptr));
        emailLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "Email", nullptr));
        label_2->setText(QString());
        passwordLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "Password", nullptr));
        lastNameLine->setPlaceholderText(QCoreApplication::translate("signupwindow", "Last Name", nullptr));
        showButton->setText(QCoreApplication::translate("signupwindow", "SHOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signupwindow: public Ui_signupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
