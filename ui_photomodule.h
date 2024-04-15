/********************************************************************************
** Form generated from reading UI file 'photomodule.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOMODULE_H
#define UI_PHOTOMODULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_PhotoModule
{
public:
    QWidget *widget;
    QGroupBox *groupBox;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QVideoWidget *video_output;
    QGroupBox *groupBox_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;

    void setupUi(QWidget *PhotoModule)
    {
        if (PhotoModule->objectName().isEmpty())
            PhotoModule->setObjectName(QString::fromUtf8("PhotoModule"));
        PhotoModule->resize(1000, 600);
        widget = new QWidget(PhotoModule);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 0, 1000, 600));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 521, 541));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 460, 481, 51));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));

        horizontalLayout->addWidget(pushButton);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font3;
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));

        horizontalLayout->addWidget(pushButton_2);

        video_output = new QVideoWidget(groupBox);
        video_output->setObjectName(QString::fromUtf8("video_output"));
        video_output->setGeometry(QRect(10, 25, 500, 400));
        video_output->setMinimumSize(QSize(500, 400));
        video_output->setMaximumSize(QSize(500, 400));
        QFont font4;
        font4.setPointSize(9);
        video_output->setFont(font4);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 30, 371, 531));
        groupBox_2->setFont(font);
        widget_3 = new QWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 40, 255, 39));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_2->addWidget(lineEdit);

        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(30, 90, 210, 46));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));

        horizontalLayout_3->addWidget(pushButton_4);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 221, 201));
        label_3->setScaledContents(true);

        retranslateUi(PhotoModule);

        QMetaObject::connectSlotsByName(PhotoModule);
    } // setupUi

    void retranslateUi(QWidget *PhotoModule)
    {
        PhotoModule->setWindowTitle(QApplication::translate("PhotoModule", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("PhotoModule", "\347\233\221\346\216\247\347\224\273\351\235\242", nullptr));
        label->setText(QApplication::translate("PhotoModule", "\346\221\204\345\203\217\345\244\264\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("PhotoModule", "\346\211\223\345\274\200\347\233\221\346\216\247", nullptr));
        pushButton_2->setText(QApplication::translate("PhotoModule", "\345\205\263\351\227\255\347\233\221\346\216\247", nullptr));
        groupBox_2->setTitle(QApplication::translate("PhotoModule", "\346\213\215\347\205\247\345\214\272\345\237\237", nullptr));
        label_2->setText(QApplication::translate("PhotoModule", "\347\205\247\347\211\207\345\220\215\357\274\232", nullptr));
        pushButton_3->setText(QApplication::translate("PhotoModule", "\346\213\215\347\205\247", nullptr));
        pushButton_4->setText(QApplication::translate("PhotoModule", "\344\277\235\345\255\230", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PhotoModule: public Ui_PhotoModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOMODULE_H
