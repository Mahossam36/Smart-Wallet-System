/********************************************************************************
** Form generated from reading UI file 'mycustomrow1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCUSTOMROW1_H
#define UI_MYCUSTOMROW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCustomRow1
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *username_label;
    QLabel *phone_label;
    QLabel *balance_label;

    void setupUi(QWidget *MyCustomRow1)
    {
        if (MyCustomRow1->objectName().isEmpty())
            MyCustomRow1->setObjectName("MyCustomRow1");
        MyCustomRow1->resize(705, 316);
        verticalLayout = new QVBoxLayout(MyCustomRow1);
        verticalLayout->setObjectName("verticalLayout");
        username_label = new QLabel(MyCustomRow1);
        username_label->setObjectName("username_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font.setPointSize(14);
        username_label->setFont(font);

        verticalLayout->addWidget(username_label);

        phone_label = new QLabel(MyCustomRow1);
        phone_label->setObjectName("phone_label");
        QFont font1;
        font1.setPointSize(12);
        phone_label->setFont(font1);

        verticalLayout->addWidget(phone_label);

        balance_label = new QLabel(MyCustomRow1);
        balance_label->setObjectName("balance_label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font2.setPointSize(10);
        balance_label->setFont(font2);

        verticalLayout->addWidget(balance_label);


        retranslateUi(MyCustomRow1);

        QMetaObject::connectSlotsByName(MyCustomRow1);
    } // setupUi

    void retranslateUi(QWidget *MyCustomRow1)
    {
        MyCustomRow1->setWindowTitle(QCoreApplication::translate("MyCustomRow1", "Form", nullptr));
        username_label->setText(QCoreApplication::translate("MyCustomRow1", "TextLabel", nullptr));
        phone_label->setText(QCoreApplication::translate("MyCustomRow1", "TextLabel", nullptr));
        balance_label->setText(QCoreApplication::translate("MyCustomRow1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyCustomRow1: public Ui_MyCustomRow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCUSTOMROW1_H
