/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *password_textbox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cancel_Button;
    QPushButton *confirm_Button;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName("ChangePassword");
        ChangePassword->resize(400, 300);
        ChangePassword->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    border-radius: 20px;\n"
"    background-color: white;\n"
"}"));
        verticalLayout = new QVBoxLayout(ChangePassword);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ChangePassword);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(28);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        password_textbox = new QLineEdit(ChangePassword);
        password_textbox->setObjectName("password_textbox");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        password_textbox->setFont(font2);

        verticalLayout->addWidget(password_textbox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Cancel_Button = new QPushButton(ChangePassword);
        Cancel_Button->setObjectName("Cancel_Button");
        Cancel_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 19px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));

        horizontalLayout->addWidget(Cancel_Button);

        confirm_Button = new QPushButton(ChangePassword);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #598bb8;   /* dark blue */\n"
"    color: white;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 19px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"}"));

        horizontalLayout->addWidget(confirm_Button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QCoreApplication::translate("ChangePassword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangePassword", "Update Your Password", nullptr));
        label_2->setText(QCoreApplication::translate("ChangePassword", "New Password : ", nullptr));
        password_textbox->setPlaceholderText(QCoreApplication::translate("ChangePassword", "New Password", nullptr));
        Cancel_Button->setText(QCoreApplication::translate("ChangePassword", "Cancel", nullptr));
        confirm_Button->setText(QCoreApplication::translate("ChangePassword", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
