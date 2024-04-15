/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <dynamicunderlinelineedit.h>
#include <interactive_buttons/waterzoombutton.h>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    WaterZoomButton *btn_reg;
    WaterZoomButton *btn_log;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_headimg;
    QGridLayout *gridLayout;
    QLabel *lab_pswd;
    DynamicUnderlineLineEdit *lineEdit_pswd;
    DynamicUnderlineLineEdit *lineEdit_user;
    QLabel *lab_user;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *box_dpy_pswd;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(560, 500);
        login->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_reg = new WaterZoomButton(widget);
        btn_reg->setObjectName(QString::fromUtf8("btn_reg"));

        horizontalLayout_2->addWidget(btn_reg);

        btn_log = new WaterZoomButton(widget);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));

        horizontalLayout_2->addWidget(btn_log);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lab_headimg = new QLabel(widget);
        lab_headimg->setObjectName(QString::fromUtf8("lab_headimg"));

        horizontalLayout->addWidget(lab_headimg);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lab_pswd = new QLabel(widget);
        lab_pswd->setObjectName(QString::fromUtf8("lab_pswd"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lab_pswd->setFont(font);
        lab_pswd->setStyleSheet(QString::fromUtf8("text-shadow: -1px -1px 1px white;"));

        gridLayout->addWidget(lab_pswd, 1, 0, 1, 1);

        lineEdit_pswd = new DynamicUnderlineLineEdit(widget);
        lineEdit_pswd->setObjectName(QString::fromUtf8("lineEdit_pswd"));
        lineEdit_pswd->setStyleSheet(QString::fromUtf8("DynamicUnderlineLineEdit \n"
"{ \n"
"	spacing: 20px; \n"
"}"));

        gridLayout->addWidget(lineEdit_pswd, 1, 1, 1, 1);

        lineEdit_user = new DynamicUnderlineLineEdit(widget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setContextMenuPolicy(Qt::ActionsContextMenu);
        lineEdit_user->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_user, 0, 1, 1, 1);

        lab_user = new QLabel(widget);
        lab_user->setObjectName(QString::fromUtf8("lab_user"));
        lab_user->setFont(font);

        gridLayout->addWidget(lab_user, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        box_dpy_pswd = new QCheckBox(widget);
        box_dpy_pswd->setObjectName(QString::fromUtf8("box_dpy_pswd"));
        box_dpy_pswd->setFont(font);

        verticalLayout_2->addWidget(box_dpy_pswd);


        gridLayout_2->addLayout(verticalLayout_2, 2, 3, 1, 1);


        verticalLayout->addWidget(widget);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
        btn_reg->setText(QApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        btn_log->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        lab_headimg->setText(QApplication::translate("login", "TextLabel", nullptr));
        lab_pswd->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        lab_user->setText(QApplication::translate("login", "\350\264\246\345\217\267", nullptr));
        box_dpy_pswd->setText(QApplication::translate("login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
