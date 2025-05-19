/********************************************************************************
** Form generated from reading UI file 'viewusers.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSERS_H
#define UI_VIEWUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewUsers
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QPushButton *Viewmore_button;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *backButton_2;
    QSpacerItem *horizontalSpacer_5;
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
    QLabel *fname_label;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLabel *lname_label;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLabel *id_label;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *Email_label;
    QLineEdit *email_lineedit;
    QVBoxLayout *verticalLayout_4;
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
    QFrame *line_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *save_pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *edit_pushButton;
    QPushButton *ChangePassword;
    QPushButton *sus_pushButton;
    QPushButton *del_pushButton;
    QPushButton *vth_pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ViewUsers)
    {
        if (ViewUsers->objectName().isEmpty())
            ViewUsers->setObjectName("ViewUsers");
        ViewUsers->resize(1054, 640);
        verticalLayoutWidget_3 = new QWidget(ViewUsers);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 1031, 611));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(verticalLayoutWidget_3);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setStyleSheet(QString::fromUtf8(""));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget_2);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_2->addWidget(listWidget);

        Viewmore_button = new QPushButton(verticalLayoutWidget_2);
        Viewmore_button->setObjectName("Viewmore_button");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Viewmore_button->sizePolicy().hasHeightForWidth());
        Viewmore_button->setSizePolicy(sizePolicy2);
        Viewmore_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_2->addWidget(Viewmore_button);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        backButton_2 = new QPushButton(verticalLayoutWidget_2);
        backButton_2->setObjectName("backButton_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        backButton_2->setFont(font);
        backButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #b0c4d4;   /* dark blue */\n"
"    color: black;\n"
"    border: none;                /* no border line */\n"
"    border-radius: 12px;         /* rounded corners */\n"
"    padding: 8px 16px;\n"
"    font-size: 15px;\n"
"    background-image: none;      /* no image */\n"
"}\n"
""));

        horizontalLayout_9->addWidget(backButton_2);

        horizontalSpacer_5 = new QSpacerItem(200, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_9);

        splitter->addWidget(verticalLayoutWidget_2);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
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
        font1.setPointSize(22);
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
        font2.setPointSize(18);
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
        font3.setPointSize(10);
        label_5->setFont(font3);

        verticalLayout_7->addWidget(label_5);

        fname_label = new QLabel(verticalLayoutWidget);
        fname_label->setObjectName("fname_label");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font4.setPointSize(14);
        fname_label->setFont(font4);
        fname_label->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_7->addWidget(fname_label);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        verticalLayout_8->addWidget(label_6);

        lname_label = new QLabel(verticalLayoutWidget);
        lname_label->setObjectName("lname_label");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font5.setPointSize(16);
        lname_label->setFont(font5);
        lname_label->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_8->addWidget(lname_label);


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

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");

        horizontalLayout_2->addLayout(verticalLayout_4);

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
        label_4->setFont(font5);
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
        label_3->setFont(font4);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(620, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_5);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("border-top: 2px solid #598bb8;"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_6->addWidget(line_5);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        save_pushButton = new QPushButton(verticalLayoutWidget);
        save_pushButton->setObjectName("save_pushButton");
        save_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_7->addWidget(save_pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        edit_pushButton = new QPushButton(verticalLayoutWidget);
        edit_pushButton->setObjectName("edit_pushButton");
        edit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(edit_pushButton);

        ChangePassword = new QPushButton(verticalLayoutWidget);
        ChangePassword->setObjectName("ChangePassword");
        ChangePassword->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(ChangePassword);

        sus_pushButton = new QPushButton(verticalLayoutWidget);
        sus_pushButton->setObjectName("sus_pushButton");
        sus_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(sus_pushButton);

        del_pushButton = new QPushButton(verticalLayoutWidget);
        del_pushButton->setObjectName("del_pushButton");
        del_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(del_pushButton);

        vth_pushButton_2 = new QPushButton(verticalLayoutWidget);
        vth_pushButton_2->setObjectName("vth_pushButton_2");
        vth_pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(vth_pushButton_2);


        verticalLayout_6->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_6->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout_6);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_10->addWidget(splitter);


        retranslateUi(ViewUsers);

        QMetaObject::connectSlotsByName(ViewUsers);
    } // setupUi

    void retranslateUi(QDialog *ViewUsers)
    {
        ViewUsers->setWindowTitle(QCoreApplication::translate("ViewUsers", "Dialog", nullptr));
        Viewmore_button->setText(QCoreApplication::translate("ViewUsers", "ViewMore", nullptr));
        backButton_2->setText(QCoreApplication::translate("ViewUsers", "<  BACK", nullptr));
        username_label->setText(QCoreApplication::translate("ViewUsers", "username", nullptr));
        info_label->setText(QCoreApplication::translate("ViewUsers", "Information", nullptr));
        label_5->setText(QCoreApplication::translate("ViewUsers", "First Name:", nullptr));
        fname_label->setText(QCoreApplication::translate("ViewUsers", "fname", nullptr));
        label_6->setText(QCoreApplication::translate("ViewUsers", "Last Name :", nullptr));
        lname_label->setText(QCoreApplication::translate("ViewUsers", "lname", nullptr));
        label_7->setText(QCoreApplication::translate("ViewUsers", "National ID:", nullptr));
        id_label->setText(QCoreApplication::translate("ViewUsers", "id", nullptr));
        Email_label->setText(QCoreApplication::translate("ViewUsers", "Email:", nullptr));
        email_lineedit->setText(QString());
        email_lineedit->setPlaceholderText(QCoreApplication::translate("ViewUsers", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("ViewUsers", "Phone Number :", nullptr));
        phonenum_label->setText(QCoreApplication::translate("ViewUsers", "phone number", nullptr));
        label_4->setText(QCoreApplication::translate("ViewUsers", "Balance:", nullptr));
        Balance_lineEdit->setPlaceholderText(QCoreApplication::translate("ViewUsers", "Balance", nullptr));
        label_3->setText(QCoreApplication::translate("ViewUsers", "EGP", nullptr));
        save_pushButton->setText(QCoreApplication::translate("ViewUsers", "Save", nullptr));
        edit_pushButton->setText(QCoreApplication::translate("ViewUsers", "Edit", nullptr));
        ChangePassword->setText(QCoreApplication::translate("ViewUsers", "Change Password", nullptr));
        sus_pushButton->setText(QCoreApplication::translate("ViewUsers", "Suspend", nullptr));
        del_pushButton->setText(QCoreApplication::translate("ViewUsers", "Delete", nullptr));
        vth_pushButton_2->setText(QCoreApplication::translate("ViewUsers", "View Transaction History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewUsers: public Ui_ViewUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSERS_H
