/********************************************************************************
** Form generated from reading UI file 'usermainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINMENU_H
#define UI_USERMAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_usermainmenu
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *logoutbutton;
    QPushButton *editprofilebutton;
    QPushButton *sendorrequestmoneybutton;
    QPushButton *requestmoneybutton;
    QPushButton *transactionhistorybutton;
    QPushButton *balancebutton;

    void setupUi(QDialog *usermainmenu)
    {
        if (usermainmenu->objectName().isEmpty())
            usermainmenu->setObjectName("usermainmenu");
        usermainmenu->resize(1054, 640);
        label_2 = new QLabel(usermainmenu);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(0, 0, 1101, 691));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);\n"
""));
        label_3 = new QLabel(usermainmenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(182, 90, 721, 471));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        logoutbutton = new QPushButton(usermainmenu);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setGeometry(QRect(552, 410, 331, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        logoutbutton->setFont(font);
        logoutbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("logouticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutbutton->setIcon(icon);
        logoutbutton->setIconSize(QSize(70, 70));
        logoutbutton->setAutoDefault(true);
        logoutbutton->setFlat(true);
        editprofilebutton = new QPushButton(usermainmenu);
        editprofilebutton->setObjectName("editprofilebutton");
        editprofilebutton->setGeometry(QRect(552, 110, 331, 131));
        editprofilebutton->setFont(font);
        editprofilebutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* light blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("editprofileicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        editprofilebutton->setIcon(icon1);
        editprofilebutton->setIconSize(QSize(70, 70));
        editprofilebutton->setAutoDefault(true);
        editprofilebutton->setFlat(true);
        sendorrequestmoneybutton = new QPushButton(usermainmenu);
        sendorrequestmoneybutton->setObjectName("sendorrequestmoneybutton");
        sendorrequestmoneybutton->setGeometry(QRect(202, 260, 331, 131));
        sendorrequestmoneybutton->setFont(font);
        sendorrequestmoneybutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* light blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("sendmoneyicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendorrequestmoneybutton->setIcon(icon2);
        sendorrequestmoneybutton->setIconSize(QSize(80, 80));
        sendorrequestmoneybutton->setAutoDefault(true);
        sendorrequestmoneybutton->setFlat(true);
        requestmoneybutton = new QPushButton(usermainmenu);
        requestmoneybutton->setObjectName("requestmoneybutton");
        requestmoneybutton->setGeometry(QRect(552, 260, 331, 131));
        requestmoneybutton->setFont(font);
        requestmoneybutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* light blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("requestmoneyicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        requestmoneybutton->setIcon(icon3);
        requestmoneybutton->setIconSize(QSize(80, 80));
        requestmoneybutton->setAutoDefault(true);
        requestmoneybutton->setFlat(true);
        transactionhistorybutton = new QPushButton(usermainmenu);
        transactionhistorybutton->setObjectName("transactionhistorybutton");
        transactionhistorybutton->setGeometry(QRect(202, 410, 331, 131));
        transactionhistorybutton->setFont(font);
        transactionhistorybutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* light blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("transactionhistoryicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        transactionhistorybutton->setIcon(icon4);
        transactionhistorybutton->setIconSize(QSize(80, 80));
        transactionhistorybutton->setAutoDefault(true);
        transactionhistorybutton->setFlat(true);
        balancebutton = new QPushButton(usermainmenu);
        balancebutton->setObjectName("balancebutton");
        balancebutton->setGeometry(QRect(202, 110, 331, 131));
        balancebutton->setFont(font);
        balancebutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cddce8;   /* light blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: Black;\n"
" border: none;  \n"
"border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("moneyicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        balancebutton->setIcon(icon5);
        balancebutton->setIconSize(QSize(70, 70));
        balancebutton->setAutoDefault(true);
        balancebutton->setFlat(true);

        retranslateUi(usermainmenu);

        QMetaObject::connectSlotsByName(usermainmenu);
    } // setupUi

    void retranslateUi(QDialog *usermainmenu)
    {
        usermainmenu->setWindowTitle(QCoreApplication::translate("usermainmenu", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        logoutbutton->setText(QCoreApplication::translate("usermainmenu", "Logout", nullptr));
        editprofilebutton->setText(QCoreApplication::translate("usermainmenu", "Edit Profile", nullptr));
        sendorrequestmoneybutton->setText(QCoreApplication::translate("usermainmenu", "Send/Request Money", nullptr));
        requestmoneybutton->setText(QCoreApplication::translate("usermainmenu", "Money Requests", nullptr));
        transactionhistorybutton->setText(QCoreApplication::translate("usermainmenu", "Transaction History", nullptr));
        balancebutton->setText(QCoreApplication::translate("usermainmenu", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usermainmenu: public Ui_usermainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINMENU_H
