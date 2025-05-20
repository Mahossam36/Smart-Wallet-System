/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *userName_add;
    QLineEdit *firstName_add;
    QLineEdit *email_add;
    QLineEdit *password_add;
    QLineEdit *id_add;
    QPushButton *showButton_add;
    QLineEdit *lastName_add;
    QLineEdit *phoneNum_add;
    QLabel *label;
    QPushButton *addNewButton;
    QPushButton *backAddButton;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1090, 716);
        label_2 = new QLabel(AddUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -40, 1101, 771));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);"));
        label_3 = new QLabel(AddUser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 10, 571, 621));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        userName_add = new QLineEdit(AddUser);
        userName_add->setObjectName("userName_add");
        userName_add->setGeometry(QRect(380, 240, 321, 41));
        QPalette palette;
        QBrush brush(QColor(238, 238, 238, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        userName_add->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font.setPointSize(14);
        font.setBold(false);
        userName_add->setFont(font);
        userName_add->setFrame(false);
        firstName_add = new QLineEdit(AddUser);
        firstName_add->setObjectName("firstName_add");
        firstName_add->setGeometry(QRect(380, 100, 321, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        firstName_add->setPalette(palette1);
        firstName_add->setFont(font);
        firstName_add->setFrame(false);
        email_add = new QLineEdit(AddUser);
        email_add->setObjectName("email_add");
        email_add->setGeometry(QRect(380, 310, 321, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        email_add->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font1.setPointSize(14);
        email_add->setFont(font1);
        email_add->setFrame(false);
        password_add = new QLineEdit(AddUser);
        password_add->setObjectName("password_add");
        password_add->setGeometry(QRect(380, 520, 321, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        password_add->setPalette(palette3);
        password_add->setFont(font);
        password_add->setFrame(false);
        password_add->setEchoMode(QLineEdit::EchoMode::Password);
        id_add = new QLineEdit(AddUser);
        id_add->setObjectName("id_add");
        id_add->setGeometry(QRect(380, 380, 321, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        id_add->setPalette(palette4);
        id_add->setFont(font);
        id_add->setFrame(false);
        showButton_add = new QPushButton(AddUser);
        showButton_add->setObjectName("showButton_add");
        showButton_add->setGeometry(QRect(700, 530, 81, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font2.setBold(false);
        showButton_add->setFont(font2);
        showButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 10px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        showButton_add->setFlat(true);
        lastName_add = new QLineEdit(AddUser);
        lastName_add->setObjectName("lastName_add");
        lastName_add->setGeometry(QRect(380, 170, 321, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        lastName_add->setPalette(palette5);
        lastName_add->setFont(font);
        lastName_add->setFrame(false);
        phoneNum_add = new QLineEdit(AddUser);
        phoneNum_add->setObjectName("phoneNum_add");
        phoneNum_add->setGeometry(QRect(380, 450, 321, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        phoneNum_add->setPalette(palette6);
        phoneNum_add->setFont(font);
        phoneNum_add->setFrame(false);
        label = new QLabel(AddUser);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 0, 311, 81));
        QPalette palette7;
        QBrush brush1(QColor(15, 106, 186, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        QBrush brush2(QColor(89, 139, 184, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        label->setPalette(palette7);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font3.setPointSize(28);
        font3.setBold(false);
        label->setFont(font3);
        addNewButton = new QPushButton(AddUser);
        addNewButton->setObjectName("addNewButton");
        addNewButton->setGeometry(QRect(420, 580, 221, 41));
        addNewButton->setFont(font2);
        addNewButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        backAddButton = new QPushButton(AddUser);
        backAddButton->setObjectName("backAddButton");
        backAddButton->setGeometry(QRect(20, 590, 93, 29));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backAddButton->setFont(font4);
        backAddButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
""));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        userName_add->setPlaceholderText(QCoreApplication::translate("AddUser", "Username", nullptr));
        firstName_add->setPlaceholderText(QCoreApplication::translate("AddUser", "First Name", nullptr));
        email_add->setPlaceholderText(QCoreApplication::translate("AddUser", "Email", nullptr));
        password_add->setPlaceholderText(QCoreApplication::translate("AddUser", "Password", nullptr));
        id_add->setPlaceholderText(QCoreApplication::translate("AddUser", "National ID", nullptr));
        showButton_add->setText(QCoreApplication::translate("AddUser", "SHOW", nullptr));
        lastName_add->setPlaceholderText(QCoreApplication::translate("AddUser", "Last Name", nullptr));
        phoneNum_add->setPlaceholderText(QCoreApplication::translate("AddUser", "Phone Number", nullptr));
        label->setText(QCoreApplication::translate("AddUser", "Add New User", nullptr));
        addNewButton->setText(QCoreApplication::translate("AddUser", "Add", nullptr));
        backAddButton->setText(QCoreApplication::translate("AddUser", "<  BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
