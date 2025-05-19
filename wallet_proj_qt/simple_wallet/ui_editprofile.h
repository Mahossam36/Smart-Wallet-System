/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfile
{
public:
    QLabel *label_8;
    QLabel *label_9;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *save_pushButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *edit_pushButton;
    QPushButton *del_pushButton;
    QPushButton *ChangePassword_Button;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *username_label;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *info_label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLineEdit *Fname_lineedit;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *LastName_lineedit;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLabel *id_label;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *Email_label;
    QLineEdit *email_lineedit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *phonenum_label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *Balance_lineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *EditProfile)
    {
        if (EditProfile->objectName().isEmpty())
            EditProfile->setObjectName("EditProfile");
        EditProfile->resize(1054, 640);
        label_8 = new QLabel(EditProfile);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-10, -20, 1101, 691));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/screen1Background/background.jpg);\n"
""));
        label_9 = new QLabel(EditProfile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(90, 10, 901, 481));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;         /* rounded corners */\n"
"    padding: 8px 16px;"));
        verticalLayoutWidget_2 = new QWidget(EditProfile);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 489, 1051, 152));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        save_pushButton = new QPushButton(verticalLayoutWidget_2);
        save_pushButton->setObjectName("save_pushButton");
        save_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));

        horizontalLayout_9->addWidget(save_pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        edit_pushButton = new QPushButton(verticalLayoutWidget_2);
        edit_pushButton->setObjectName("edit_pushButton");
        edit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));

        horizontalLayout_10->addWidget(edit_pushButton);

        del_pushButton = new QPushButton(verticalLayoutWidget_2);
        del_pushButton->setObjectName("del_pushButton");
        del_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));

        horizontalLayout_10->addWidget(del_pushButton);

        ChangePassword_Button = new QPushButton(verticalLayoutWidget_2);
        ChangePassword_Button->setObjectName("ChangePassword_Button");
        ChangePassword_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));

        horizontalLayout_10->addWidget(ChangePassword_Button);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        backButton = new QPushButton(verticalLayoutWidget_2);
        backButton->setObjectName("backButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton->setFont(font);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 2px 16px;\n"
"    font-size: 21px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0D1B5A;   /* darker on hover */\n"
"color: white;\n"
"}"));

        horizontalLayout_7->addWidget(backButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayoutWidget = new QWidget(EditProfile);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(100, 20, 881, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        username_label = new QLabel(verticalLayoutWidget);
        username_label->setObjectName("username_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font1.setPointSize(26);
        font1.setBold(false);
        username_label->setFont(font1);
        username_label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(username_label);


        verticalLayout->addLayout(horizontalLayout_3);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("border-top: 2px solid #598bb8;"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        info_label = new QLabel(verticalLayoutWidget);
        info_label->setObjectName("info_label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font2.setPointSize(22);
        info_label->setFont(font2);

        horizontalLayout_4->addWidget(info_label);


        verticalLayout->addLayout(horizontalLayout_4);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName("line_3");
        line_3->setStyleSheet(QString::fromUtf8("border-top: 2px solid #598bb8;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font3.setPointSize(12);
        label_5->setFont(font3);

        verticalLayout_7->addWidget(label_5);

        Fname_lineedit = new QLineEdit(verticalLayoutWidget);
        Fname_lineedit->setObjectName("Fname_lineedit");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font4.setPointSize(18);
        Fname_lineedit->setFont(font4);
        Fname_lineedit->setFrame(false);

        verticalLayout_7->addWidget(Fname_lineedit);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        verticalLayout_8->addWidget(label_6);

        LastName_lineedit = new QLineEdit(verticalLayoutWidget);
        LastName_lineedit->setObjectName("LastName_lineedit");
        LastName_lineedit->setFont(font4);
        LastName_lineedit->setFrame(false);

        verticalLayout_8->addWidget(LastName_lineedit);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font3);

        verticalLayout_9->addWidget(label_7);

        id_label = new QLabel(verticalLayoutWidget);
        id_label->setObjectName("id_label");
        id_label->setFont(font4);
        id_label->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_9->addWidget(id_label);


        horizontalLayout->addLayout(verticalLayout_9);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("border-top: 2px solid #598bb8;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Email_label = new QLabel(verticalLayoutWidget);
        Email_label->setObjectName("Email_label");
        Email_label->setFont(font3);

        verticalLayout_3->addWidget(Email_label);

        email_lineedit = new QLineEdit(verticalLayoutWidget);
        email_lineedit->setObjectName("email_lineedit");
        email_lineedit->setFont(font4);
        email_lineedit->setFrame(false);

        verticalLayout_3->addWidget(email_lineedit);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);

        verticalLayout_5->addWidget(label_2);

        phonenum_label = new QLabel(verticalLayoutWidget);
        phonenum_label->setObjectName("phonenum_label");
        phonenum_label->setFont(font4);
        phonenum_label->setAutoFillBackground(true);
        phonenum_label->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_5->addWidget(phonenum_label);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("border-top: 2px solid #598bb8;"));

        verticalLayout_6->addWidget(label_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        Balance_lineEdit = new QLineEdit(verticalLayoutWidget);
        Balance_lineEdit->setObjectName("Balance_lineEdit");
        Balance_lineEdit->setFont(font4);
        Balance_lineEdit->setFrame(false);

        horizontalLayout_5->addWidget(Balance_lineEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font5.setPointSize(14);
        label_3->setFont(font5);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(620, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(EditProfile);

        QMetaObject::connectSlotsByName(EditProfile);
    } // setupUi

    void retranslateUi(QDialog *EditProfile)
    {
        EditProfile->setWindowTitle(QCoreApplication::translate("EditProfile", "Dialog", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        save_pushButton->setText(QCoreApplication::translate("EditProfile", "Save", nullptr));
        edit_pushButton->setText(QCoreApplication::translate("EditProfile", "Edit", nullptr));
        del_pushButton->setText(QCoreApplication::translate("EditProfile", "Delete User", nullptr));
        ChangePassword_Button->setText(QCoreApplication::translate("EditProfile", "Change Password", nullptr));
        backButton->setText(QCoreApplication::translate("EditProfile", "<  BACK", nullptr));
        username_label->setText(QCoreApplication::translate("EditProfile", "username", nullptr));
        info_label->setText(QCoreApplication::translate("EditProfile", "Information", nullptr));
        label_5->setText(QCoreApplication::translate("EditProfile", "First Name:", nullptr));
        Fname_lineedit->setText(QString());
        Fname_lineedit->setPlaceholderText(QCoreApplication::translate("EditProfile", "First Name", nullptr));
        label_6->setText(QCoreApplication::translate("EditProfile", "Last Name :", nullptr));
        LastName_lineedit->setText(QString());
        LastName_lineedit->setPlaceholderText(QCoreApplication::translate("EditProfile", "Last Name", nullptr));
        label_7->setText(QCoreApplication::translate("EditProfile", "National ID:", nullptr));
        id_label->setText(QCoreApplication::translate("EditProfile", "id", nullptr));
        Email_label->setText(QCoreApplication::translate("EditProfile", "Email:", nullptr));
        email_lineedit->setText(QString());
        email_lineedit->setPlaceholderText(QCoreApplication::translate("EditProfile", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("EditProfile", "Phone Number :", nullptr));
        phonenum_label->setText(QCoreApplication::translate("EditProfile", "phone number", nullptr));
        label_4->setText(QCoreApplication::translate("EditProfile", "Balance:", nullptr));
        Balance_lineEdit->setPlaceholderText(QCoreApplication::translate("EditProfile", "Balance", nullptr));
        label_3->setText(QCoreApplication::translate("EditProfile", "EGP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProfile: public Ui_EditProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
