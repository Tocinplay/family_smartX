/********************************************************************************
** Form generated from reading UI file 'weather_forcecast.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_FORCECAST_H
#define UI_WEATHER_FORCECAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <dynamicunderlinelineedit.h>
#include <interactive_buttons/interactivebuttonbase.h>
#include <interactive_buttons/winclosebutton.h>
#include <interactive_buttons/winminbutton.h>

QT_BEGIN_NAMESPACE

class Ui_weather_forcecast
{
public:
    QWidget *widget;
    WinCloseButton *btn_close;
    WinMinButton *btn_min;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    DynamicUnderlineLineEdit *lineEdit_city;
    InteractiveButtonBase *btn_search;
    QSpacerItem *horizontalSpacer;
    QLabel *lab_date;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_week_0;
    QLabel *lbl_icon_0;
    QLabel *lbl_low_0;
    QLabel *lbl_high_0;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_week_1;
    QLabel *lbl_icon_1;
    QLabel *lbl_low_1;
    QLabel *lbl_high_1;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_week_2;
    QLabel *lbl_icon_2;
    QLabel *lbl_low_2;
    QLabel *lbl_high_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_week_3;
    QLabel *lbl_icon_3;
    QLabel *lbl_low_3;
    QLabel *lbl_high_3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_week_4;
    QLabel *lbl_icon_4;
    QLabel *lbl_low_4;
    QLabel *lbl_high_4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_week_5;
    QLabel *lbl_icon_5;
    QLabel *lbl_low_5;
    QLabel *lbl_high_5;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_week_6;
    QLabel *lbl_icon_6;
    QLabel *lbl_low_6;
    QLabel *lbl_high_6;
    QWidget *widget_11;
    QLabel *label;
    QWidget *widget_12;
    QLabel *lbl_icon;
    QLabel *lbl_city;
    QLabel *lbl_temp_range;
    QLabel *lbl_temp;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *lbl_shidu;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *lbl_pm25;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *lbl_aqi;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QLabel *lbl_wind;

    void setupUi(QWidget *weather_forcecast)
    {
        if (weather_forcecast->objectName().isEmpty())
            weather_forcecast->setObjectName(QString::fromUtf8("weather_forcecast"));
        weather_forcecast->resize(1000, 620);
        weather_forcecast->setStyleSheet(QString::fromUtf8("	border-radius: 4px;"));
        widget = new QWidget(weather_forcecast);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1000, 620));
        widget->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        btn_close = new WinCloseButton(widget);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(968, 0, 32, 32));
        btn_min = new WinMinButton(widget);
        btn_min->setObjectName(QString::fromUtf8("btn_min"));
        btn_min->setGeometry(QRect(936, 0, 32, 32));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 50, 870, 70));
        widget_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(231, 124, 142);\n"
"\n"
"border: 1px;\n"
"border-radius: 4px;\n"
""));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_city = new DynamicUnderlineLineEdit(widget_2);
        lineEdit_city->setObjectName(QString::fromUtf8("lineEdit_city"));
        lineEdit_city->setMinimumSize(QSize(230, 40));
        lineEdit_city->setStyleSheet(QString::fromUtf8("font: italic 20pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgba(255, 255, 255, 130);"));
        lineEdit_city->setInputMask(QString::fromUtf8(""));

        horizontalLayout->addWidget(lineEdit_city);

        btn_search = new InteractiveButtonBase(widget_2);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setStyleSheet(QString::fromUtf8("font: italic 15pt \"\345\276\227\346\204\217\351\273\221\";"));

        horizontalLayout->addWidget(btn_search);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lab_date = new QLabel(widget_2);
        lab_date->setObjectName(QString::fromUtf8("lab_date"));
        lab_date->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_date->sizePolicy().hasHeightForWidth());
        lab_date->setSizePolicy(sizePolicy);
        lab_date->setStyleSheet(QString::fromUtf8("font: italic 24pt \"\345\276\227\346\204\217\351\273\221\";"));
        lab_date->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lab_date);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(60, 198, 290, 371));
        widget_3->setStyleSheet(QString::fromUtf8("font: italic 12pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgba(86, 152, 195, 200);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_week_0 = new QLabel(widget_4);
        lbl_week_0->setObjectName(QString::fromUtf8("lbl_week_0"));
        lbl_week_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbl_week_0);

        lbl_icon_0 = new QLabel(widget_4);
        lbl_icon_0->setObjectName(QString::fromUtf8("lbl_icon_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(lbl_icon_0->sizePolicy().hasHeightForWidth());
        lbl_icon_0->setSizePolicy(sizePolicy1);
        lbl_icon_0->setMinimumSize(QSize(30, 30));
        lbl_icon_0->setMaximumSize(QSize(40, 40));
        lbl_icon_0->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_0->setScaledContents(true);

        horizontalLayout_2->addWidget(lbl_icon_0);

        lbl_low_0 = new QLabel(widget_4);
        lbl_low_0->setObjectName(QString::fromUtf8("lbl_low_0"));
        lbl_low_0->setStyleSheet(QString::fromUtf8("font: italic 12pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_low_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbl_low_0);

        lbl_high_0 = new QLabel(widget_4);
        lbl_high_0->setObjectName(QString::fromUtf8("lbl_high_0"));
        lbl_high_0->setStyleSheet(QString::fromUtf8("font: italic 12pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_high_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbl_high_0);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_week_1 = new QLabel(widget_5);
        lbl_week_1->setObjectName(QString::fromUtf8("lbl_week_1"));
        lbl_week_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_week_1);

        lbl_icon_1 = new QLabel(widget_5);
        lbl_icon_1->setObjectName(QString::fromUtf8("lbl_icon_1"));
        lbl_icon_1->setMinimumSize(QSize(30, 30));
        lbl_icon_1->setMaximumSize(QSize(40, 40));
        lbl_icon_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_1->setScaledContents(true);

        horizontalLayout_3->addWidget(lbl_icon_1);

        lbl_low_1 = new QLabel(widget_5);
        lbl_low_1->setObjectName(QString::fromUtf8("lbl_low_1"));
        lbl_low_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_low_1);

        lbl_high_1 = new QLabel(widget_5);
        lbl_high_1->setObjectName(QString::fromUtf8("lbl_high_1"));
        lbl_high_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_high_1);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbl_week_2 = new QLabel(widget_6);
        lbl_week_2->setObjectName(QString::fromUtf8("lbl_week_2"));
        lbl_week_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_week_2);

        lbl_icon_2 = new QLabel(widget_6);
        lbl_icon_2->setObjectName(QString::fromUtf8("lbl_icon_2"));
        lbl_icon_2->setMinimumSize(QSize(30, 30));
        lbl_icon_2->setMaximumSize(QSize(40, 40));
        lbl_icon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_2->setScaledContents(true);

        horizontalLayout_4->addWidget(lbl_icon_2);

        lbl_low_2 = new QLabel(widget_6);
        lbl_low_2->setObjectName(QString::fromUtf8("lbl_low_2"));
        lbl_low_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_low_2);

        lbl_high_2 = new QLabel(widget_6);
        lbl_high_2->setObjectName(QString::fromUtf8("lbl_high_2"));
        lbl_high_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_high_2);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbl_week_3 = new QLabel(widget_7);
        lbl_week_3->setObjectName(QString::fromUtf8("lbl_week_3"));
        lbl_week_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbl_week_3);

        lbl_icon_3 = new QLabel(widget_7);
        lbl_icon_3->setObjectName(QString::fromUtf8("lbl_icon_3"));
        lbl_icon_3->setMinimumSize(QSize(30, 30));
        lbl_icon_3->setMaximumSize(QSize(40, 40));
        lbl_icon_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_3->setScaledContents(true);

        horizontalLayout_5->addWidget(lbl_icon_3);

        lbl_low_3 = new QLabel(widget_7);
        lbl_low_3->setObjectName(QString::fromUtf8("lbl_low_3"));
        lbl_low_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbl_low_3);

        lbl_high_3 = new QLabel(widget_7);
        lbl_high_3->setObjectName(QString::fromUtf8("lbl_high_3"));
        lbl_high_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbl_high_3);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lbl_week_4 = new QLabel(widget_8);
        lbl_week_4->setObjectName(QString::fromUtf8("lbl_week_4"));
        lbl_week_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbl_week_4);

        lbl_icon_4 = new QLabel(widget_8);
        lbl_icon_4->setObjectName(QString::fromUtf8("lbl_icon_4"));
        lbl_icon_4->setMinimumSize(QSize(30, 30));
        lbl_icon_4->setMaximumSize(QSize(40, 40));
        lbl_icon_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_4->setScaledContents(true);

        horizontalLayout_6->addWidget(lbl_icon_4);

        lbl_low_4 = new QLabel(widget_8);
        lbl_low_4->setObjectName(QString::fromUtf8("lbl_low_4"));
        lbl_low_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbl_low_4);

        lbl_high_4 = new QLabel(widget_8);
        lbl_high_4->setObjectName(QString::fromUtf8("lbl_high_4"));
        lbl_high_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbl_high_4);


        verticalLayout->addWidget(widget_8);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);"));
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbl_week_5 = new QLabel(widget_9);
        lbl_week_5->setObjectName(QString::fromUtf8("lbl_week_5"));
        lbl_week_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_week_5);

        lbl_icon_5 = new QLabel(widget_9);
        lbl_icon_5->setObjectName(QString::fromUtf8("lbl_icon_5"));
        lbl_icon_5->setMinimumSize(QSize(30, 30));
        lbl_icon_5->setMaximumSize(QSize(40, 40));
        lbl_icon_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_5->setScaledContents(true);

        horizontalLayout_7->addWidget(lbl_icon_5);

        lbl_low_5 = new QLabel(widget_9);
        lbl_low_5->setObjectName(QString::fromUtf8("lbl_low_5"));
        lbl_low_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_low_5);

        lbl_high_5 = new QLabel(widget_9);
        lbl_high_5->setObjectName(QString::fromUtf8("lbl_high_5"));
        lbl_high_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_high_5);


        verticalLayout->addWidget(widget_9);

        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 204, 217, 50);\n"
""));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lbl_week_6 = new QLabel(widget_10);
        lbl_week_6->setObjectName(QString::fromUtf8("lbl_week_6"));
        lbl_week_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_week_6);

        lbl_icon_6 = new QLabel(widget_10);
        lbl_icon_6->setObjectName(QString::fromUtf8("lbl_icon_6"));
        lbl_icon_6->setMinimumSize(QSize(30, 30));
        lbl_icon_6->setMaximumSize(QSize(40, 40));
        lbl_icon_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbl_icon_6->setScaledContents(true);

        horizontalLayout_8->addWidget(lbl_icon_6);

        lbl_low_6 = new QLabel(widget_10);
        lbl_low_6->setObjectName(QString::fromUtf8("lbl_low_6"));
        lbl_low_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_low_6);

        lbl_high_6 = new QLabel(widget_10);
        lbl_high_6->setObjectName(QString::fromUtf8("lbl_high_6"));
        lbl_high_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_high_6);


        verticalLayout->addWidget(widget_10);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(60, 130, 291, 61));
        label = new QLabel(widget_11);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 271, 41));
        label->setStyleSheet(QString::fromUtf8("font: italic 15pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(196, 203, 207);"));
        label->setAlignment(Qt::AlignCenter);
        widget_12 = new QWidget(widget);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(360, 130, 571, 231));
        widget_12->setStyleSheet(QString::fromUtf8("background-color: rgba(86, 152, 195, 200);\n"
"border: 1px;\n"
"border-radius: 4px;"));
        lbl_icon = new QLabel(widget_12);
        lbl_icon->setObjectName(QString::fromUtf8("lbl_icon"));
        lbl_icon->setGeometry(QRect(40, 40, 111, 101));
        lbl_icon->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255\357\274\2140);"));
        lbl_icon->setScaledContents(true);
        lbl_city = new QLabel(widget_12);
        lbl_city->setObjectName(QString::fromUtf8("lbl_city"));
        lbl_city->setGeometry(QRect(180, 10, 211, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\227\346\204\217\351\273\221"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        lbl_city->setFont(font);
        lbl_city->setStyleSheet(QString::fromUtf8("font: italic 36pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgba(255, 255, 255,0);\n"
"color: rgb(105,105,105);"));
        lbl_city->setAlignment(Qt::AlignCenter);
        lbl_temp_range = new QLabel(widget_12);
        lbl_temp_range->setObjectName(QString::fromUtf8("lbl_temp_range"));
        lbl_temp_range->setGeometry(QRect(180, 160, 211, 51));
        lbl_temp_range->setStyleSheet(QString::fromUtf8("font: italic 18pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(186, 204, 217);"));
        lbl_temp_range->setAlignment(Qt::AlignCenter);
        lbl_temp = new QLabel(widget_12);
        lbl_temp->setObjectName(QString::fromUtf8("lbl_temp"));
        lbl_temp->setGeometry(QRect(410, 40, 111, 101));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_temp->sizePolicy().hasHeightForWidth());
        lbl_temp->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\227\346\204\217\351\273\221"));
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        lbl_temp->setFont(font1);
        lbl_temp->setStyleSheet(QString::fromUtf8("font: italic 30pt \"\345\276\227\346\204\217\351\273\221\";\n"
"color: rgb(112,128,144);\n"
"background-color: rgba(0, 255, 255, 0);"));
        lbl_temp->setAlignment(Qt::AlignCenter);
        widget_13 = new QWidget(widget);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(360, 380, 571, 191));
        widget_13->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 203, 207);"));
        horizontalLayout_9 = new QHBoxLayout(widget_13);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(16, 174, 194, 100);"));
        verticalLayout_2 = new QVBoxLayout(widget_14);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(widget_14);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: italic 10pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(186, 204, 217);"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        lbl_shidu = new QLabel(widget_14);
        lbl_shidu->setObjectName(QString::fromUtf8("lbl_shidu"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(50);
        sizePolicy3.setHeightForWidth(lbl_shidu->sizePolicy().hasHeightForWidth());
        lbl_shidu->setSizePolicy(sizePolicy3);
        lbl_shidu->setStyleSheet(QString::fromUtf8("font: italic 26pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_shidu->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_shidu);


        horizontalLayout_9->addWidget(widget_14);

        widget_15 = new QWidget(widget_13);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(16, 174, 194, 100);"));
        verticalLayout_3 = new QVBoxLayout(widget_15);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(widget_15);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: italic 10pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(186, 204, 217);"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        lbl_pm25 = new QLabel(widget_15);
        lbl_pm25->setObjectName(QString::fromUtf8("lbl_pm25"));
        sizePolicy3.setHeightForWidth(lbl_pm25->sizePolicy().hasHeightForWidth());
        lbl_pm25->setSizePolicy(sizePolicy3);
        lbl_pm25->setStyleSheet(QString::fromUtf8("font: italic 26pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_pm25->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbl_pm25);


        horizontalLayout_9->addWidget(widget_15);

        widget_16 = new QWidget(widget_13);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(16, 174, 194, 100);"));
        verticalLayout_4 = new QVBoxLayout(widget_16);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(widget_16);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: italic 10pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(186, 204, 217);"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        lbl_aqi = new QLabel(widget_16);
        lbl_aqi->setObjectName(QString::fromUtf8("lbl_aqi"));
        sizePolicy3.setHeightForWidth(lbl_aqi->sizePolicy().hasHeightForWidth());
        lbl_aqi->setSizePolicy(sizePolicy3);
        lbl_aqi->setStyleSheet(QString::fromUtf8("font: italic 26pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_aqi->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbl_aqi);


        horizontalLayout_9->addWidget(widget_16);

        widget_17 = new QWidget(widget_13);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(16, 174, 194, 100);"));
        verticalLayout_5 = new QVBoxLayout(widget_17);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_10 = new QLabel(widget_17);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: italic 10pt \"\345\276\227\346\204\217\351\273\221\";\n"
"background-color: rgb(186, 204, 217);"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_10);

        lbl_wind = new QLabel(widget_17);
        lbl_wind->setObjectName(QString::fromUtf8("lbl_wind"));
        sizePolicy3.setHeightForWidth(lbl_wind->sizePolicy().hasHeightForWidth());
        lbl_wind->setSizePolicy(sizePolicy3);
        lbl_wind->setStyleSheet(QString::fromUtf8("font: italic 26pt \"\345\276\227\346\204\217\351\273\221\";"));
        lbl_wind->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbl_wind);


        horizontalLayout_9->addWidget(widget_17);


        retranslateUi(weather_forcecast);

        QMetaObject::connectSlotsByName(weather_forcecast);
    } // setupUi

    void retranslateUi(QWidget *weather_forcecast)
    {
        weather_forcecast->setWindowTitle(QApplication::translate("weather_forcecast", "Form", nullptr));
        btn_close->setText(QString());
        btn_min->setText(QString());
        lineEdit_city->setText(QApplication::translate("weather_forcecast", "\351\225\277\346\262\231\345\270\202", nullptr));
        btn_search->setText(QApplication::translate("weather_forcecast", "\346\220\234\347\264\242", nullptr));
        lab_date->setText(QApplication::translate("weather_forcecast", "2024-04-07 \346\230\237\346\234\237\346\227\245", nullptr));
        lbl_week_0->setText(QApplication::translate("weather_forcecast", "\344\273\212\345\244\251", nullptr));
        lbl_icon_0->setText(QString());
        lbl_low_0->setText(QApplication::translate("weather_forcecast", "14\342\204\203", nullptr));
        lbl_high_0->setText(QApplication::translate("weather_forcecast", "23\342\204\203", nullptr));
        lbl_week_1->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\344\270\200", nullptr));
        lbl_icon_1->setText(QString());
        lbl_low_1->setText(QApplication::translate("weather_forcecast", "14\342\204\203", nullptr));
        lbl_high_1->setText(QApplication::translate("weather_forcecast", "22\342\204\203", nullptr));
        lbl_week_2->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\344\272\214", nullptr));
        lbl_icon_2->setText(QString());
        lbl_low_2->setText(QApplication::translate("weather_forcecast", "16\342\204\203", nullptr));
        lbl_high_2->setText(QApplication::translate("weather_forcecast", "24\342\204\203", nullptr));
        lbl_week_3->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\344\270\211", nullptr));
        lbl_icon_3->setText(QString());
        lbl_low_3->setText(QApplication::translate("weather_forcecast", "18\342\204\203", nullptr));
        lbl_high_3->setText(QApplication::translate("weather_forcecast", "23\342\204\203", nullptr));
        lbl_week_4->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\345\233\233", nullptr));
        lbl_icon_4->setText(QString());
        lbl_low_4->setText(QApplication::translate("weather_forcecast", "19\342\204\203", nullptr));
        lbl_high_4->setText(QApplication::translate("weather_forcecast", "26\342\204\203", nullptr));
        lbl_week_5->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\344\272\224", nullptr));
        lbl_icon_5->setText(QString());
        lbl_low_5->setText(QApplication::translate("weather_forcecast", "19\342\204\203", nullptr));
        lbl_high_5->setText(QApplication::translate("weather_forcecast", "24\342\204\203", nullptr));
        lbl_week_6->setText(QApplication::translate("weather_forcecast", "\346\230\237\346\234\237\345\205\255", nullptr));
        lbl_icon_6->setText(QString());
        lbl_low_6->setText(QApplication::translate("weather_forcecast", "21\342\204\203", nullptr));
        lbl_high_6->setText(QApplication::translate("weather_forcecast", "26\342\204\203", nullptr));
        label->setText(QApplication::translate("weather_forcecast", "\351\233\250\350\231\275\345\260\217\357\274\214\346\263\250\346\204\217\344\277\235\346\232\226\345\210\253\346\204\237\345\206\222", nullptr));
        lbl_icon->setText(QString());
        lbl_city->setText(QApplication::translate("weather_forcecast", "\351\225\277\346\262\231\345\270\202", nullptr));
        lbl_temp_range->setText(QApplication::translate("weather_forcecast", "14\342\204\203~23\342\204\203 \345\260\217\351\233\250", nullptr));
        lbl_temp->setText(QApplication::translate("weather_forcecast", "17\342\204\203", nullptr));
        label_7->setText(QApplication::translate("weather_forcecast", "\346\271\277\345\272\246", nullptr));
        lbl_shidu->setText(QApplication::translate("weather_forcecast", "93%", nullptr));
        label_8->setText(QApplication::translate("weather_forcecast", "pm2.5", nullptr));
        lbl_pm25->setText(QApplication::translate("weather_forcecast", "59.0", nullptr));
        label_9->setText(QApplication::translate("weather_forcecast", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lbl_aqi->setText(QApplication::translate("weather_forcecast", "62/\350\211\257", nullptr));
        label_10->setText(QApplication::translate("weather_forcecast", "\351\243\216\345\220\221", nullptr));
        lbl_wind->setText(QApplication::translate("weather_forcecast", "\350\245\277\345\214\227\351\243\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class weather_forcecast: public Ui_weather_forcecast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_FORCECAST_H
