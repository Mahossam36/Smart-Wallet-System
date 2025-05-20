/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_balance
{
public:
    QLabel *label_2;
    QPushButton *backButton;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QLabel *balancelabel;

    void setupUi(QDialog *balance)
    {
        if (balance->objectName().isEmpty())
            balance->setObjectName("balance");
        balance->resize(1069, 637);
        label_2 = new QLabel(balance);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(-16, 0, 1121, 691));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(28);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);\n"
""));
        backButton = new QPushButton(balance);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(30, 580, 93, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton->setFont(font1);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #598bb8;   /* darker on hover */\n"
"color: white;\n"
"}"));
        label_3 = new QLabel(balance);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(225, 80, 631, 481));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        label_5 = new QLabel(balance);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(452, 70, 181, 151));
        QPalette palette;
        QBrush brush(QColor(15, 106, 186, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_5->setPalette(palette);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Brush Script MT")});
        font2.setPointSize(55);
        font2.setBold(false);
        font2.setItalic(true);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: 598bb8"));
        label = new QLabel(balance);
        label->setObjectName("label");
        label->setGeometry(QRect(343, 190, 361, 241));
        label->setPixmap(QPixmap(QString::fromUtf8("coinbalanceicon - Copy.jpg")));
        label->setScaledContents(true);
        balancelabel = new QLabel(balance);
        balancelabel->setObjectName("balancelabel");
        balancelabel->setGeometry(QRect(331, 430, 411, 111));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        balancelabel->setFont(font3);
        balancelabel->setStyleSheet(QString::fromUtf8("background-color:rgb(89, 139, 184);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));

        retranslateUi(balance);

        QMetaObject::connectSlotsByName(balance);
    } // setupUi

    void retranslateUi(QDialog *balance)
    {
        balance->setWindowTitle(QCoreApplication::translate("balance", "Dialog", nullptr));
        label_2->setText(QString());
        backButton->setText(QCoreApplication::translate("balance", "<  BACK", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("balance", "Wally", nullptr));
        label->setText(QString());
        balancelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class balance: public Ui_balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
