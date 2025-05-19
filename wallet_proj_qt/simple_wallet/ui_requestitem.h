/********************************************************************************
** Form generated from reading UI file 'requestitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTITEM_H
#define UI_REQUESTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_requestItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *userLabel;
    QLabel *amountLabel;
    QLabel *timeLabel;
    QPushButton *acceptBtn;
    QPushButton *rejectBtn;

    void setupUi(QWidget *requestItem)
    {
        if (requestItem->objectName().isEmpty())
            requestItem->setObjectName("requestItem");
        requestItem->resize(1030, 49);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(requestItem->sizePolicy().hasHeightForWidth());
        requestItem->setSizePolicy(sizePolicy);
        requestItem->setMinimumSize(QSize(0, 0));
        requestItem->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(requestItem);
        horizontalLayout->setObjectName("horizontalLayout");
        userLabel = new QLabel(requestItem);
        userLabel->setObjectName("userLabel");

        horizontalLayout->addWidget(userLabel);

        amountLabel = new QLabel(requestItem);
        amountLabel->setObjectName("amountLabel");

        horizontalLayout->addWidget(amountLabel);

        timeLabel = new QLabel(requestItem);
        timeLabel->setObjectName("timeLabel");

        horizontalLayout->addWidget(timeLabel);

        acceptBtn = new QPushButton(requestItem);
        acceptBtn->setObjectName("acceptBtn");
        acceptBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 11px;\n"
"    background-image: none;      /* no image */\n"
"	max-width: 100px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));

        horizontalLayout->addWidget(acceptBtn);

        rejectBtn = new QPushButton(requestItem);
        rejectBtn->setObjectName("rejectBtn");
        rejectBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 11px;\n"
"    background-image: none;      /* no image */\n"
"	max-width: 100px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));

        horizontalLayout->addWidget(rejectBtn);


        retranslateUi(requestItem);

        QMetaObject::connectSlotsByName(requestItem);
    } // setupUi

    void retranslateUi(QWidget *requestItem)
    {
        requestItem->setWindowTitle(QCoreApplication::translate("requestItem", "Form", nullptr));
        userLabel->setText(QCoreApplication::translate("requestItem", "TextLabel", nullptr));
        amountLabel->setText(QCoreApplication::translate("requestItem", "TextLabel", nullptr));
        timeLabel->setText(QCoreApplication::translate("requestItem", "TextLabel", nullptr));
        acceptBtn->setText(QCoreApplication::translate("requestItem", "Accept", nullptr));
        rejectBtn->setText(QCoreApplication::translate("requestItem", "Reject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class requestItem: public Ui_requestItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTITEM_H
