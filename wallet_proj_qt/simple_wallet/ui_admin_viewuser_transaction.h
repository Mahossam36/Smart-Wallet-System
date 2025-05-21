/********************************************************************************
** Form generated from reading UI file 'admin_viewuser_transaction.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_VIEWUSER_TRANSACTION_H
#define UI_ADMIN_VIEWUSER_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_ViewUser_Transaction
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
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
    QWidget *widget_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *total_transaction;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QLabel *highest_lowest;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLabel *spending_income;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLabel *average_amount;
    QWidget *widget1;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Balance_icon;
    QLabel *Balance_Labe;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *Full_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Username_icon;
    QLabel *UserName_Label;
    QHBoxLayout *horizontalLayout;
    QLabel *Nationalid_icon;
    QLabel *Nationalid_Labe;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Email_icon;
    QLabel *Email_Label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *PhoneNo_icon;
    QLabel *PhoneNo_Labe;

    void setupUi(QMainWindow *Admin_ViewUser_Transaction)
    {
        if (Admin_ViewUser_Transaction->objectName().isEmpty())
            Admin_ViewUser_Transaction->setObjectName("Admin_ViewUser_Transaction");
        Admin_ViewUser_Transaction->resize(1090, 668);
        centralwidget = new QWidget(Admin_ViewUser_Transaction);
        centralwidget->setObjectName("centralwidget");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-2, 0, 1101, 671));
        label_6->setStyleSheet(QString::fromUtf8("background-color:#cddce8;\n"
"\n"
""));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(46, 350, 991, 271));
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
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(35, 71, 911, 181));
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
        tableWidget->setRowCount(1);
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
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(466, 30, 571, 301));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius: 32;\n"
"background-color: #598bb8;\n"
""));
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 511, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setEnabled(true);
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_10->addWidget(label_11);

        total_transaction = new QLabel(widget);
        total_transaction->setObjectName("total_transaction");
        total_transaction->setEnabled(true);
        total_transaction->setFont(font);
        total_transaction->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
        total_transaction->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_10->addWidget(total_transaction);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setEnabled(true);
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8(""));
        label_15->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_9->addWidget(label_15);

        highest_lowest = new QLabel(widget);
        highest_lowest->setObjectName("highest_lowest");
        highest_lowest->setEnabled(true);
        highest_lowest->setFont(font);
        highest_lowest->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
        highest_lowest->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_9->addWidget(highest_lowest);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setEnabled(true);
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_8->addWidget(label_13);

        spending_income = new QLabel(widget);
        spending_income->setObjectName("spending_income");
        spending_income->setEnabled(true);
        spending_income->setFont(font);
        spending_income->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
        spending_income->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_8->addWidget(spending_income);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setEnabled(true);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8(""));
        label_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(label_14);

        average_amount = new QLabel(widget);
        average_amount->setObjectName("average_amount");
        average_amount->setEnabled(true);
        average_amount->setFont(font);
        average_amount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
        average_amount->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(average_amount);


        verticalLayout->addLayout(horizontalLayout_7);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(46, 30, 400, 301));
        widget1->setStyleSheet(QString::fromUtf8("border-radius: 32;\n"
"background-color: #598bb8;\n"
""));
        layoutWidget_2 = new QWidget(widget1);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 10, 358, 71));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Balance_icon = new QLabel(layoutWidget_2);
        Balance_icon->setObjectName("Balance_icon");
        Balance_icon->setMaximumSize(QSize(60, 60));
        Balance_icon->setPixmap(QPixmap(QString::fromUtf8("money_631180.png")));
        Balance_icon->setScaledContents(true);

        horizontalLayout_4->addWidget(Balance_icon);

        Balance_Labe = new QLabel(layoutWidget_2);
        Balance_Labe->setObjectName("Balance_Labe");
        Balance_Labe->setEnabled(true);
        Balance_Labe->setMinimumSize(QSize(289, 40));
        Balance_Labe->setMaximumSize(QSize(289, 40));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        Balance_Labe->setFont(font2);

        horizontalLayout_4->addWidget(Balance_Labe);

        layoutWidget_3 = new QWidget(widget1);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(30, 90, 342, 176));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Full_Name = new QLabel(layoutWidget_3);
        Full_Name->setObjectName("Full_Name");
        Full_Name->setMinimumSize(QSize(340, 30));
        Full_Name->setMaximumSize(QSize(289, 30));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        Full_Name->setFont(font3);

        verticalLayout_2->addWidget(Full_Name);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Username_icon = new QLabel(layoutWidget_3);
        Username_icon->setObjectName("Username_icon");
        Username_icon->setMaximumSize(QSize(20, 20));
        Username_icon->setPixmap(QPixmap(QString::fromUtf8("profile_7542248.png")));
        Username_icon->setScaledContents(true);

        horizontalLayout_3->addWidget(Username_icon);

        UserName_Label = new QLabel(layoutWidget_3);
        UserName_Label->setObjectName("UserName_Label");
        UserName_Label->setEnabled(true);
        UserName_Label->setMinimumSize(QSize(289, 27));
        UserName_Label->setMaximumSize(QSize(289, 27));
        UserName_Label->setFont(font);

        horizontalLayout_3->addWidget(UserName_Label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Nationalid_icon = new QLabel(layoutWidget_3);
        Nationalid_icon->setObjectName("Nationalid_icon");
        Nationalid_icon->setMaximumSize(QSize(20, 20));
        Nationalid_icon->setPixmap(QPixmap(QString::fromUtf8("id-card_9284909.png")));
        Nationalid_icon->setScaledContents(true);

        horizontalLayout->addWidget(Nationalid_icon);

        Nationalid_Labe = new QLabel(layoutWidget_3);
        Nationalid_Labe->setObjectName("Nationalid_Labe");
        Nationalid_Labe->setEnabled(true);
        Nationalid_Labe->setMinimumSize(QSize(289, 27));
        Nationalid_Labe->setMaximumSize(QSize(289, 27));
        Nationalid_Labe->setFont(font);

        horizontalLayout->addWidget(Nationalid_Labe);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Email_icon = new QLabel(layoutWidget_3);
        Email_icon->setObjectName("Email_icon");
        Email_icon->setMaximumSize(QSize(20, 20));
        Email_icon->setPixmap(QPixmap(QString::fromUtf8("email_4546924.png")));
        Email_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(Email_icon);

        Email_Label = new QLabel(layoutWidget_3);
        Email_Label->setObjectName("Email_Label");
        Email_Label->setEnabled(true);
        Email_Label->setMinimumSize(QSize(289, 27));
        Email_Label->setMaximumSize(QSize(289, 27));
        Email_Label->setFont(font);

        horizontalLayout_2->addWidget(Email_Label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        PhoneNo_icon = new QLabel(layoutWidget_3);
        PhoneNo_icon->setObjectName("PhoneNo_icon");
        PhoneNo_icon->setMaximumSize(QSize(20, 20));
        PhoneNo_icon->setPixmap(QPixmap(QString::fromUtf8("phone-call_1082233.png")));
        PhoneNo_icon->setScaledContents(true);

        horizontalLayout_5->addWidget(PhoneNo_icon);

        PhoneNo_Labe = new QLabel(layoutWidget_3);
        PhoneNo_Labe->setObjectName("PhoneNo_Labe");
        PhoneNo_Labe->setEnabled(true);
        PhoneNo_Labe->setMinimumSize(QSize(289, 27));
        PhoneNo_Labe->setMaximumSize(QSize(289, 27));
        PhoneNo_Labe->setFont(font);

        horizontalLayout_5->addWidget(PhoneNo_Labe);


        verticalLayout_2->addLayout(horizontalLayout_5);

        Admin_ViewUser_Transaction->setCentralWidget(centralwidget);

        retranslateUi(Admin_ViewUser_Transaction);

        QMetaObject::connectSlotsByName(Admin_ViewUser_Transaction);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_ViewUser_Transaction)
    {
        Admin_ViewUser_Transaction->setWindowTitle(QCoreApplication::translate("Admin_ViewUser_Transaction", "MainWindow", nullptr));
        label_6->setText(QString());
        Username_icon_4->setText(QString());
        label->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Receiver", nullptr));
        label_2->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Sender", nullptr));
        label_3->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Status", nullptr));
        label_4->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Amount", nullptr));
        pushButton->setText(QString());
        label_12->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Transaction", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->item(0, 0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1 ", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_3->setText(QString());
        label_11->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Total Transactions :", nullptr));
        total_transaction->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1234", nullptr));
        label_15->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Highest / Lowest :", nullptr));
        highest_lowest->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1234", nullptr));
        label_13->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Total Spending / Income :", nullptr));
        spending_income->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1234", nullptr));
        label_14->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Average Transaction Amount :", nullptr));
        average_amount->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "1234", nullptr));
        Balance_icon->setText(QString());
        Balance_Labe->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "TEST", nullptr));
        Full_Name->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "Full Name", nullptr));
        Username_icon->setText(QString());
        UserName_Label->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "TEST", nullptr));
        Nationalid_icon->setText(QString());
        Nationalid_Labe->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "TEST", nullptr));
        Email_icon->setText(QString());
        Email_Label->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "TEST", nullptr));
        PhoneNo_icon->setText(QString());
        PhoneNo_Labe->setText(QCoreApplication::translate("Admin_ViewUser_Transaction", "TEST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_ViewUser_Transaction: public Ui_Admin_ViewUser_Transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_VIEWUSER_TRANSACTION_H
