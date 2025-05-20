/********************************************************************************
** Form generated from reading UI file 'adminmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINMENU_H
#define UI_ADMINMAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminmainmenu
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *viewusersbutton;
    QPushButton *viewusertransactionbutton;
    QPushButton *adduserbutton;
    QPushButton *logoutbutton;

    void setupUi(QDialog *adminmainmenu)
    {
        if (adminmainmenu->objectName().isEmpty())
            adminmainmenu->setObjectName("adminmainmenu");
        adminmainmenu->resize(1054, 640);
        label_2 = new QLabel(adminmainmenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1101, 691));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);\n"
""));
        label_3 = new QLabel(adminmainmenu);
        label_3->setObjectName("label_3");
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(0, -10, 1101, 691));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);\n"
""));
        label_4 = new QLabel(adminmainmenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(167, 80, 721, 481));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        viewusersbutton = new QPushButton(adminmainmenu);
        viewusersbutton->setObjectName("viewusersbutton");
        viewusersbutton->setGeometry(QRect(187, 130, 331, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        viewusersbutton->setFont(font);
        viewusersbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("viewusersicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewusersbutton->setIcon(icon);
        viewusersbutton->setIconSize(QSize(70, 70));
        viewusersbutton->setAutoDefault(true);
        viewusersbutton->setFlat(true);
        viewusertransactionbutton = new QPushButton(adminmainmenu);
        viewusertransactionbutton->setObjectName("viewusertransactionbutton");
        viewusertransactionbutton->setGeometry(QRect(187, 340, 331, 161));
        viewusertransactionbutton->setFont(font);
        viewusertransactionbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8("transactionhistoryicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        viewusertransactionbutton->setIcon(icon1);
        viewusertransactionbutton->setIconSize(QSize(70, 70));
        viewusertransactionbutton->setAutoDefault(true);
        viewusertransactionbutton->setFlat(true);
        adduserbutton = new QPushButton(adminmainmenu);
        adduserbutton->setObjectName("adduserbutton");
        adduserbutton->setGeometry(QRect(537, 130, 331, 161));
        adduserbutton->setFont(font);
        adduserbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon2.addFile(QString::fromUtf8("addusericon.png"), QSize(), QIcon::Normal, QIcon::Off);
        adduserbutton->setIcon(icon2);
        adduserbutton->setIconSize(QSize(60, 60));
        adduserbutton->setAutoDefault(true);
        adduserbutton->setFlat(true);
        logoutbutton = new QPushButton(adminmainmenu);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setGeometry(QRect(537, 340, 331, 161));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("logouticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutbutton->setIcon(icon3);
        logoutbutton->setIconSize(QSize(70, 70));
        logoutbutton->setAutoDefault(true);
        logoutbutton->setFlat(true);

        retranslateUi(adminmainmenu);

        QMetaObject::connectSlotsByName(adminmainmenu);
    } // setupUi

    void retranslateUi(QDialog *adminmainmenu)
    {
        adminmainmenu->setWindowTitle(QCoreApplication::translate("adminmainmenu", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        viewusersbutton->setText(QCoreApplication::translate("adminmainmenu", "View Users", nullptr));
        viewusertransactionbutton->setText(QCoreApplication::translate("adminmainmenu", "View Transactions", nullptr));
        adduserbutton->setText(QCoreApplication::translate("adminmainmenu", "Add User", nullptr));
        logoutbutton->setText(QCoreApplication::translate("adminmainmenu", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmainmenu: public Ui_adminmainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINMENU_H
