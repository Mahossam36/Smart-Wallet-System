/********************************************************************************
** Form generated from reading UI file 'view_all_transactions.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_ALL_TRANSACTIONS_H
#define UI_VIEW_ALL_TRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_all_transactions
{
public:
    QWidget *widget_3;
    QLabel *Username_icon_4;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QLabel *label_12;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;

    void setupUi(QWidget *view_all_transactions)
    {
        if (view_all_transactions->objectName().isEmpty())
            view_all_transactions->setObjectName("view_all_transactions");
        view_all_transactions->resize(1057, 649);
        widget_3 = new QWidget(view_all_transactions);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(20, 20, 991, 601));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius: 32;\n"
"background-color: #598bb8;\n"
""));
        Username_icon_4 = new QLabel(widget_3);
        Username_icon_4->setObjectName("Username_icon_4");
        Username_icon_4->setGeometry(QRect(40, 10, 20, 20));
        Username_icon_4->setMaximumSize(QSize(20, 20));
        Username_icon_4->setScaledContents(true);
        line = new QFrame(widget_3);
        line->setObjectName("line");
        line->setGeometry(QRect(40, 65, 890, 1));
        line->setStyleSheet(QString::fromUtf8(" background-color: rgb(0, 0, 0);\n"
"border: 2px solid black;\n"
""));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(widget_3);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 45, 63, 20));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 45, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 45, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: black;"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(600, 40, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(750, 40, 63, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: black;"));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 10, 529, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(35, 35));
        QIcon icon;
        icon.addFile(QString::fromUtf8("left_12655291.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(35, 35));

        horizontalLayout_6->addWidget(pushButton);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setEnabled(true);
        label_12->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_12->setFont(font);

        horizontalLayout_6->addWidget(label_12);

        tableWidget = new QTableWidget(widget_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(35, 71, 911, 511));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->setAutoFillBackground(false);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget::item {\n"
"    border-bottom: 1px solid rgba(255, 255, 255, 0.3);  /* white with 30% opacity */\n"
"    color: white;\n"
"	font: bold 20px \"Arial\", sans-serif;\n"
"\n"
"}"));
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::PenStyle::NoPen);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(175);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(885, 21, 20, 20));
        pushButton_3->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("back_14493189.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(20, 20));

        retranslateUi(view_all_transactions);

        QMetaObject::connectSlotsByName(view_all_transactions);
    } // setupUi

    void retranslateUi(QWidget *view_all_transactions)
    {
        view_all_transactions->setWindowTitle(QCoreApplication::translate("view_all_transactions", "Form", nullptr));
        Username_icon_4->setText(QString());
        label->setText(QCoreApplication::translate("view_all_transactions", "Receiver", nullptr));
        label_2->setText(QCoreApplication::translate("view_all_transactions", "Sender", nullptr));
        label_3->setText(QCoreApplication::translate("view_all_transactions", "Status", nullptr));
        label_4->setText(QCoreApplication::translate("view_all_transactions", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("view_all_transactions", "Amount", nullptr));
        pushButton->setText(QString());
        label_12->setText(QCoreApplication::translate("view_all_transactions", "Transactions", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class view_all_transactions: public Ui_view_all_transactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_ALL_TRANSACTIONS_H
