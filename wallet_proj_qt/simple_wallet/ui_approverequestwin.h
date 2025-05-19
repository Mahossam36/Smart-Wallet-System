/********************************************************************************
** Form generated from reading UI file 'approverequestwin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPROVEREQUESTWIN_H
#define UI_APPROVEREQUESTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_approveRequestWin
{
public:
    QListWidget *listLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *backBtn;

    void setupUi(QWidget *approveRequestWin)
    {
        if (approveRequestWin->objectName().isEmpty())
            approveRequestWin->setObjectName("approveRequestWin");
        approveRequestWin->resize(1054, 640);
        listLayout = new QListWidget(approveRequestWin);
        listLayout->setObjectName("listLayout");
        listLayout->setGeometry(QRect(10, 40, 1031, 531));
        label = new QLabel(approveRequestWin);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold"));
        label_2 = new QLabel(approveRequestWin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold"));
        label_3 = new QLabel(approveRequestWin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 10, 151, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold"));
        backBtn = new QPushButton(approveRequestWin);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(10, 590, 121, 31));
        backBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
""));

        retranslateUi(approveRequestWin);

        QMetaObject::connectSlotsByName(approveRequestWin);
    } // setupUi

    void retranslateUi(QWidget *approveRequestWin)
    {
        approveRequestWin->setWindowTitle(QCoreApplication::translate("approveRequestWin", "Form", nullptr));
        label->setText(QCoreApplication::translate("approveRequestWin", "Requester User", nullptr));
        label_2->setText(QCoreApplication::translate("approveRequestWin", "Amount Request", nullptr));
        label_3->setText(QCoreApplication::translate("approveRequestWin", "Request Time", nullptr));
        backBtn->setText(QCoreApplication::translate("approveRequestWin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class approveRequestWin: public Ui_approveRequestWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPROVEREQUESTWIN_H
