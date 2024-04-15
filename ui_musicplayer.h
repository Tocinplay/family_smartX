/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QWidget *widget;
    QGroupBox *groupBox;
    QListWidget *music_list_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *music_add_3;
    QPushButton *music_delete_3;
    QGroupBox *groupBox_2;
    QVideoWidget *widget_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit_search_3;
    QPushButton *btn_search_3;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_9;
    QSlider *progress_bar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_pre_3;
    QPushButton *btn_play_3;
    QPushButton *btn_next_3;
    QLabel *label_6;
    QComboBox *play_model_3;
    QLabel *label_8;
    QSlider *volume_control_3;
    QListWidget *lyric_widget;

    void setupUi(QWidget *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName(QString::fromUtf8("MusicPlayer"));
        MusicPlayer->resize(1100, 750);
        widget = new QWidget(MusicPlayer);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1100, 750));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 270, 222, 451));
        music_list_3 = new QListWidget(groupBox);
        music_list_3->setObjectName(QString::fromUtf8("music_list_3"));
        music_list_3->setGeometry(QRect(10, 26, 202, 371));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 410, 202, 31));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        music_add_3 = new QPushButton(layoutWidget_2);
        music_add_3->setObjectName(QString::fromUtf8("music_add_3"));

        horizontalLayout_9->addWidget(music_add_3);

        music_delete_3 = new QPushButton(layoutWidget_2);
        music_delete_3->setObjectName(QString::fromUtf8("music_delete_3"));

        horizontalLayout_9->addWidget(music_delete_3);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 280, 301, 211));
        groupBox_2->setMinimumSize(QSize(0, 0));
        widget_3 = new QVideoWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 20, 301, 171));
        layoutWidget_3 = new QWidget(widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(5, 46, 521, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        lineEdit_search_3 = new QLineEdit(layoutWidget_3);
        lineEdit_search_3->setObjectName(QString::fromUtf8("lineEdit_search_3"));

        horizontalLayout->addWidget(lineEdit_search_3);

        btn_search_3 = new QPushButton(layoutWidget_3);
        btn_search_3->setObjectName(QString::fromUtf8("btn_search_3"));

        horizontalLayout->addWidget(btn_search_3);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 521, 181));
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(970, 500, 111, 31));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(241, 501, 849, 16));
        progress_bar = new QSlider(widget);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setGeometry(QRect(240, 510, 721, 22));
        progress_bar->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(241, 552, 831, 161));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        btn_pre_3 = new QPushButton(layoutWidget);
        btn_pre_3->setObjectName(QString::fromUtf8("btn_pre_3"));

        horizontalLayout_8->addWidget(btn_pre_3);

        btn_play_3 = new QPushButton(layoutWidget);
        btn_play_3->setObjectName(QString::fromUtf8("btn_play_3"));

        horizontalLayout_8->addWidget(btn_play_3);

        btn_next_3 = new QPushButton(layoutWidget);
        btn_next_3->setObjectName(QString::fromUtf8("btn_next_3"));

        horizontalLayout_8->addWidget(btn_next_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        play_model_3 = new QComboBox(layoutWidget);
        play_model_3->addItem(QString());
        play_model_3->addItem(QString());
        play_model_3->addItem(QString());
        play_model_3->setObjectName(QString::fromUtf8("play_model_3"));

        horizontalLayout_8->addWidget(play_model_3);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        volume_control_3 = new QSlider(layoutWidget);
        volume_control_3->setObjectName(QString::fromUtf8("volume_control_3"));
        volume_control_3->setOrientation(Qt::Vertical);

        horizontalLayout_8->addWidget(volume_control_3);

        lyric_widget = new QListWidget(widget);
        lyric_widget->setObjectName(QString::fromUtf8("lyric_widget"));
        lyric_widget->setGeometry(QRect(540, 10, 551, 481));
        lyric_widget->setStyleSheet(QString::fromUtf8("QListWidget::item:selected \n"
"{\n"
"	background-color: rgba(231, 124, 142,100);\n"
"	color: rgb(0, 0, 0);\n"
"	font-size:20px;\n"
"}\n"
"QListWidget::item\n"
"{\n"
"	color: rgba(47, 47, 53, 150);\n"
"	font-size: 20px;\n"
"}"));
        lyric_widget->setIconSize(QSize(20, 20));
        lyric_widget->setTextElideMode(Qt::ElideMiddle);
        lyric_widget->setSpacing(0);

        retranslateUi(MusicPlayer);

        lyric_widget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QApplication::translate("MusicPlayer", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("MusicPlayer", "\351\237\263\344\271\220\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        music_add_3->setText(QApplication::translate("MusicPlayer", "\346\267\273\345\212\240", nullptr));
        music_delete_3->setText(QApplication::translate("MusicPlayer", "\345\210\240\351\231\244", nullptr));
        groupBox_2->setTitle(QApplication::translate("MusicPlayer", "\350\247\206\351\242\221\346\222\255\346\224\276", nullptr));
        label_10->setText(QApplication::translate("MusicPlayer", "\351\237\263\344\271\220", nullptr));
        btn_search_3->setText(QApplication::translate("MusicPlayer", "\346\220\234\347\264\242", nullptr));
        label_2->setText(QApplication::translate("MusicPlayer", "0:00/3:21", nullptr));
        label_9->setText(QString());
        btn_pre_3->setText(QApplication::translate("MusicPlayer", "\344\270\212\344\270\200\351\246\226", nullptr));
        btn_play_3->setText(QApplication::translate("MusicPlayer", "\346\222\255\346\224\276", nullptr));
        btn_next_3->setText(QApplication::translate("MusicPlayer", "\344\270\213\344\270\200\351\246\226", nullptr));
        label_6->setText(QApplication::translate("MusicPlayer", "\346\222\255\346\224\276\346\250\241\345\274\217", nullptr));
        play_model_3->setItemText(0, QApplication::translate("MusicPlayer", "\345\210\227\350\241\250\346\222\255\346\224\276", nullptr));
        play_model_3->setItemText(1, QApplication::translate("MusicPlayer", "\351\232\217\346\234\272\346\222\255\346\224\276", nullptr));
        play_model_3->setItemText(2, QApplication::translate("MusicPlayer", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));

        label_8->setText(QApplication::translate("MusicPlayer", "\351\237\263\351\207\217\346\216\247\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
