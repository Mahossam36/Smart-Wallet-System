/********************************************************************************
** Form generated from reading UI file 'usersendrequest_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSENDREQUEST_GUI_H
#define UI_USERSENDREQUEST_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userSendRequest_gui
{
public:
    QWidget *svgContainer;
    QLabel *label;
    QLineEdit *username;
    QLineEdit *amount;
    QPushButton *done;
    QPushButton *back;
    QWidget *widget;
    QWidget *floatMsg;
    QLabel *floatText;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioSend;
    QRadioButton *radioRequest;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *userSendRequest_gui)
    {
        if (userSendRequest_gui->objectName().isEmpty())
            userSendRequest_gui->setObjectName("userSendRequest_gui");
        userSendRequest_gui->resize(1054, 640);
        userSendRequest_gui->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-family: \"MS Arial\";\n"
"    font-size: 16px;\n"
"    color: #0f6aba;\n"
"	font-weight: 600;\n"
"}"));
        svgContainer = new QWidget(userSendRequest_gui);
        svgContainer->setObjectName("svgContainer");
        svgContainer->setGeometry(QRect(500, -144, 501, 581));
        label = new QLabel(userSendRequest_gui);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 100, 511, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Arial")});
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel { color: #0f6aba;\n"
"    font-family: \"MS Arial\";\n"
"    font-size: 35px;}"));
        username = new QLineEdit(userSendRequest_gui);
        username->setObjectName("username");
        username->setGeometry(QRect(30, 190, 321, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush1(QColor(238, 238, 238, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        username->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font1.setPointSize(14);
        font1.setBold(false);
        username->setFont(font1);
        username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border-radius : 6px;\n"
"	color : black;\n"
"	border-bottom: 2px solid #598bb8;\n"
"}"));
        username->setFrame(false);
        amount = new QLineEdit(userSendRequest_gui);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(30, 260, 321, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        amount->setPalette(palette1);
        amount->setFont(font1);
        amount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border-radius : 6px;\n"
"	color : black;\n"
"	border-bottom: 2px solid #598bb8;\n"
"}"));
        amount->setFrame(false);
        done = new QPushButton(userSendRequest_gui);
        done->setObjectName("done");
        done->setGeometry(QRect(30, 390, 161, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font2.setBold(false);
        done->setFont(font2);
        done->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        done->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none; \n"
"	font-size: 20px     /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));
        back = new QPushButton(userSendRequest_gui);
        back->setObjectName("back");
        back->setGeometry(QRect(30, 570, 161, 41));
        back->setFont(font2);
        back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none; \n"
"	font-size: 20px     /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));
        widget = new QWidget(userSendRequest_gui);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(449, -1, 721, 661));
        widget->setStyleSheet(QString::fromUtf8("background-color: #598bb8;"));
        floatMsg = new QWidget(widget);
        floatMsg->setObjectName("floatMsg");
        floatMsg->setGeometry(QRect(290, 490, 271, 101));
        floatMsg->setStyleSheet(QString::fromUtf8("background-color: #a9c5de;\n"
"border-radius : 15px;"));
        floatText = new QLabel(floatMsg);
        floatText->setObjectName("floatText");
        floatText->setGeometry(QRect(80, 40, 191, 21));
        floatText->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-family:  \"MS Arial\";"));
        label_3 = new QLabel(floatMsg);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 30, 41, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/sendrequest/checked.png")));
        label_3->setScaledContents(true);
        layoutWidget = new QWidget(userSendRequest_gui);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 340, 279, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioSend = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(userSendRequest_gui);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioSend);
        radioSend->setObjectName("radioSend");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS Arial")});
        font3.setWeight(QFont::DemiBold);
        radioSend->setFont(font3);
        radioSend->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(radioSend);

        radioRequest = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioRequest);
        radioRequest->setObjectName("radioRequest");
        radioRequest->setFont(font3);
        radioRequest->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(radioRequest);

        QWidget::setTabOrder(username, amount);
        QWidget::setTabOrder(amount, radioSend);
        QWidget::setTabOrder(radioSend, radioRequest);
        QWidget::setTabOrder(radioRequest, done);
        QWidget::setTabOrder(done, back);

        retranslateUi(userSendRequest_gui);

        QMetaObject::connectSlotsByName(userSendRequest_gui);
    } // setupUi

    void retranslateUi(QWidget *userSendRequest_gui)
    {
        userSendRequest_gui->setWindowTitle(QCoreApplication::translate("userSendRequest_gui", "Form", nullptr));
        label->setText(QCoreApplication::translate("userSendRequest_gui", "Send & Request Money ", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("userSendRequest_gui", "Recipient / Sender username", nullptr));
        amount->setText(QString());
        amount->setPlaceholderText(QCoreApplication::translate("userSendRequest_gui", "Money Amount", nullptr));
        done->setText(QCoreApplication::translate("userSendRequest_gui", "Done", nullptr));
        back->setText(QCoreApplication::translate("userSendRequest_gui", "Back", nullptr));
        floatText->setText(QCoreApplication::translate("userSendRequest_gui", "Successful Transaction", nullptr));
        label_3->setText(QString());
        radioSend->setText(QCoreApplication::translate("userSendRequest_gui", "Send Money", nullptr));
        radioRequest->setText(QCoreApplication::translate("userSendRequest_gui", "Request Money", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userSendRequest_gui: public Ui_userSendRequest_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSENDREQUEST_GUI_H
