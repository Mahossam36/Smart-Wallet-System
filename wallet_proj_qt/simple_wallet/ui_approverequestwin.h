/********************************************************************************
** Form generated from reading UI file 'approverequestwin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
    QLabel *label_4;
    QListWidget *listLayout;
    QPushButton *backButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *approveRequestWin)
    {
        if (approveRequestWin->objectName().isEmpty())
            approveRequestWin->setObjectName("approveRequestWin");
        approveRequestWin->resize(1054, 640);
        label_4 = new QLabel(approveRequestWin);
        label_4->setObjectName("label_4");
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(-10, 0, 1101, 691));
        label_4->setStyleSheet(QString::fromUtf8(" background-color: #598bb8; \n"
""));
        listLayout = new QListWidget(approveRequestWin);
        listLayout->setObjectName("listLayout");
        listLayout->setGeometry(QRect(10, 50, 1031, 531));
        listLayout->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;"));
        backButton = new QPushButton(approveRequestWin);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 600, 93, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton->setFont(font);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  #cddce8;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));
        label_6 = new QLabel(approveRequestWin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, -20, 161, 111));
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
        label_6->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(true);
        font1.setItalic(false);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-weight: bold;\n"
"color:#ffffff"));
        label_7 = new QLabel(approveRequestWin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, -20, 151, 111));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_7->setPalette(palette1);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-weight: bold;\n"
"color:#ffffff"));
        label_8 = new QLabel(approveRequestWin);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, -20, 161, 111));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_8->setPalette(palette2);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-weight: bold;\n"
"color:#ffffff"));

        retranslateUi(approveRequestWin);

        QMetaObject::connectSlotsByName(approveRequestWin);
    } // setupUi

    void retranslateUi(QWidget *approveRequestWin)
    {
        approveRequestWin->setWindowTitle(QCoreApplication::translate("approveRequestWin", "Form", nullptr));
        label_4->setText(QString());
        backButton->setText(QCoreApplication::translate("approveRequestWin", "<  BACK", nullptr));
        label_6->setText(QCoreApplication::translate("approveRequestWin", "Amount Request", nullptr));
        label_7->setText(QCoreApplication::translate("approveRequestWin", "Request Time", nullptr));
        label_8->setText(QCoreApplication::translate("approveRequestWin", "Requester User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class approveRequestWin: public Ui_approveRequestWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPROVEREQUESTWIN_H
