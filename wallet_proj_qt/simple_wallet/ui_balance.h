/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
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
    QLabel *label;
    QLabel *balancelabel;
    QLabel *label_5;

    void setupUi(QDialog *balance)
    {
        if (balance->objectName().isEmpty())
            balance->setObjectName("balance");
        balance->resize(1069, 637);
        label_2 = new QLabel(balance);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(0, 0, 1101, 691));
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
""));
        label_3 = new QLabel(balance);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 80, 631, 481));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        label = new QLabel(balance);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 170, 361, 241));
        label->setPixmap(QPixmap(QString::fromUtf8("coinbalanceicon - Copy.jpg")));
        label->setScaledContents(true);
        balancelabel = new QLabel(balance);
        balancelabel->setObjectName("balancelabel");
        balancelabel->setGeometry(QRect(330, 410, 411, 111));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        balancelabel->setFont(font2);
        balancelabel->setStyleSheet(QString::fromUtf8("background-color:rgb(89, 139, 184);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        label_5 = new QLabel(balance);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 80, 201, 111));
        QPalette palette;
        QBrush brush(QColor(15, 106, 186, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_5->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Brush Script MT")});
        font3.setPointSize(48);
        font3.setBold(false);
        font3.setItalic(true);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: 598bb8"));

        retranslateUi(balance);

        QMetaObject::connectSlotsByName(balance);
    } // setupUi

    void retranslateUi(QDialog *balance)
    {
        balance->setWindowTitle(QCoreApplication::translate("balance", "Dialog", nullptr));
        label_2->setText(QString());
        backButton->setText(QCoreApplication::translate("balance", "<  BACK", nullptr));
        label_3->setText(QString());
        label->setText(QString());
        balancelabel->setText(QString());
        label_5->setText(QCoreApplication::translate("balance", "Wally", nullptr));
    } // retranslateUi

};

namespace Ui {
    class balance: public Ui_balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
