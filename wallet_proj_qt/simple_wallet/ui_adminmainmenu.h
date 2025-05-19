/********************************************************************************
** Form generated from reading UI file 'adminmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
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
    QPushButton *backButton;
    QPushButton *viewusersbutton;
    QPushButton *edituserbutton;
    QPushButton *deleteuserbutton;
    QPushButton *suspenduserbutton;
    QPushButton *viewusertransactionbutton;
    QPushButton *adjustuserbalancebutton;

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
        label_4->setGeometry(QRect(170, 80, 721, 481));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        backButton = new QPushButton(adminmainmenu);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(30, 590, 93, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton->setFont(font);
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
        viewusersbutton = new QPushButton(adminmainmenu);
        viewusersbutton->setObjectName("viewusersbutton");
        viewusersbutton->setGeometry(QRect(190, 100, 331, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(true);
        viewusersbutton->setFont(font1);
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
        icon.addFile(QString::fromUtf8("viewusersicon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        viewusersbutton->setIcon(icon);
        viewusersbutton->setIconSize(QSize(70, 70));
        viewusersbutton->setAutoDefault(true);
        viewusersbutton->setFlat(true);
        edituserbutton = new QPushButton(adminmainmenu);
        edituserbutton->setObjectName("edituserbutton");
        edituserbutton->setGeometry(QRect(540, 100, 331, 131));
        edituserbutton->setFont(font1);
        edituserbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8("editprofileicon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        edituserbutton->setIcon(icon1);
        edituserbutton->setIconSize(QSize(70, 70));
        edituserbutton->setAutoDefault(true);
        edituserbutton->setFlat(true);
        deleteuserbutton = new QPushButton(adminmainmenu);
        deleteuserbutton->setObjectName("deleteuserbutton");
        deleteuserbutton->setGeometry(QRect(190, 250, 331, 131));
        deleteuserbutton->setFont(font1);
        deleteuserbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon2.addFile(QString::fromUtf8("deleteuser.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteuserbutton->setIcon(icon2);
        deleteuserbutton->setIconSize(QSize(70, 70));
        deleteuserbutton->setAutoDefault(true);
        deleteuserbutton->setFlat(true);
        suspenduserbutton = new QPushButton(adminmainmenu);
        suspenduserbutton->setObjectName("suspenduserbutton");
        suspenduserbutton->setGeometry(QRect(540, 250, 331, 131));
        suspenduserbutton->setFont(font1);
        suspenduserbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon3.addFile(QString::fromUtf8("suspendusericon.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        suspenduserbutton->setIcon(icon3);
        suspenduserbutton->setIconSize(QSize(80, 80));
        suspenduserbutton->setAutoDefault(true);
        suspenduserbutton->setFlat(true);
        viewusertransactionbutton = new QPushButton(adminmainmenu);
        viewusertransactionbutton->setObjectName("viewusertransactionbutton");
        viewusertransactionbutton->setGeometry(QRect(190, 410, 331, 131));
        viewusertransactionbutton->setFont(font1);
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("transactionhistoryicon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        viewusertransactionbutton->setIcon(icon4);
        viewusertransactionbutton->setIconSize(QSize(70, 70));
        viewusertransactionbutton->setAutoDefault(true);
        viewusertransactionbutton->setFlat(true);
        adjustuserbalancebutton = new QPushButton(adminmainmenu);
        adjustuserbalancebutton->setObjectName("adjustuserbalancebutton");
        adjustuserbalancebutton->setGeometry(QRect(540, 410, 331, 131));
        adjustuserbalancebutton->setFont(font1);
        adjustuserbalancebutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon5.addFile(QString::fromUtf8("adjustbalanceicon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        adjustuserbalancebutton->setIcon(icon5);
        adjustuserbalancebutton->setIconSize(QSize(70, 70));
        adjustuserbalancebutton->setAutoDefault(true);
        adjustuserbalancebutton->setFlat(true);

        retranslateUi(adminmainmenu);

        QMetaObject::connectSlotsByName(adminmainmenu);
    } // setupUi

    void retranslateUi(QDialog *adminmainmenu)
    {
        adminmainmenu->setWindowTitle(QCoreApplication::translate("adminmainmenu", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        backButton->setText(QCoreApplication::translate("adminmainmenu", "<  BACK", nullptr));
        viewusersbutton->setText(QCoreApplication::translate("adminmainmenu", "View Users", nullptr));
        edituserbutton->setText(QCoreApplication::translate("adminmainmenu", "Edit User Account", nullptr));
        deleteuserbutton->setText(QCoreApplication::translate("adminmainmenu", "Delete User", nullptr));
        suspenduserbutton->setText(QCoreApplication::translate("adminmainmenu", "Suspend User", nullptr));
        viewusertransactionbutton->setText(QCoreApplication::translate("adminmainmenu", "View User Transaction", nullptr));
        adjustuserbalancebutton->setText(QCoreApplication::translate("adminmainmenu", "Adjust User Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmainmenu: public Ui_adminmainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINMENU_H
