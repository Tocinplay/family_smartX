/********************************************************************************
** Form generated from reading UI file 'smarthome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOME_H
#define UI_SMARTHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHome
{
public:
    QLabel *label_air;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_return;
    QPushButton *btn_connect;
    QPushButton *btn_disconnect;
    QLabel *label_temperature;
    QPushButton *btn_air;
    QLabel *label_fan;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *host_ip;
    QLabel *label_2;
    QLineEdit *lineEdit_ports;
    QPushButton *btn_bulb;
    QPushButton *btn_fan;
    QSpinBox *spinBox_temperature;
    QLabel *label_bulb;

    void setupUi(QWidget *SmartHome)
    {
        if (SmartHome->objectName().isEmpty())
            SmartHome->setObjectName(QString::fromUtf8("SmartHome"));
        SmartHome->resize(1000, 600);
        label_air = new QLabel(SmartHome);
        label_air->setObjectName(QString::fromUtf8("label_air"));
        label_air->setGeometry(QRect(380, -60, 521, 331));
        label_air->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/air0.png);"));
        layoutWidget = new QWidget(SmartHome);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 341, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_return = new QPushButton(layoutWidget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        horizontalLayout->addWidget(btn_return);

        btn_connect = new QPushButton(layoutWidget);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));

        horizontalLayout->addWidget(btn_connect);

        btn_disconnect = new QPushButton(layoutWidget);
        btn_disconnect->setObjectName(QString::fromUtf8("btn_disconnect"));

        horizontalLayout->addWidget(btn_disconnect);

        label_temperature = new QLabel(SmartHome);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));
        label_temperature->setGeometry(QRect(439, 390, 421, 281));
        label_temperature->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/temperature.png);"));
        btn_air = new QPushButton(SmartHome);
        btn_air->setObjectName(QString::fromUtf8("btn_air"));
        btn_air->setGeometry(QRect(10, 130, 97, 29));
        btn_air->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(198, 255, 229, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        label_fan = new QLabel(SmartHome);
        label_fan->setObjectName(QString::fromUtf8("label_fan"));
        label_fan->setGeometry(QRect(690, 230, 211, 171));
        label_fan->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/fan.png);"));
        layoutWidget_2 = new QWidget(SmartHome);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 40, 301, 52));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        host_ip = new QLineEdit(layoutWidget_2);
        host_ip->setObjectName(QString::fromUtf8("host_ip"));

        gridLayout->addWidget(host_ip, 0, 1, 1, 2);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_ports = new QLineEdit(layoutWidget_2);
        lineEdit_ports->setObjectName(QString::fromUtf8("lineEdit_ports"));

        gridLayout->addWidget(lineEdit_ports, 1, 2, 1, 1);

        btn_bulb = new QPushButton(SmartHome);
        btn_bulb->setObjectName(QString::fromUtf8("btn_bulb"));
        btn_bulb->setGeometry(QRect(10, 180, 97, 29));
        btn_bulb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(198, 255, 229, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        btn_fan = new QPushButton(SmartHome);
        btn_fan->setObjectName(QString::fromUtf8("btn_fan"));
        btn_fan->setGeometry(QRect(10, 230, 97, 29));
        btn_fan->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(198, 255, 229, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        spinBox_temperature = new QSpinBox(SmartHome);
        spinBox_temperature->setObjectName(QString::fromUtf8("spinBox_temperature"));
        spinBox_temperature->setGeometry(QRect(560, 490, 231, 31));
        label_bulb = new QLabel(SmartHome);
        label_bulb->setObjectName(QString::fromUtf8("label_bulb"));
        label_bulb->setGeometry(QRect(360, 230, 321, 161));
        label_bulb->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/bulb1.jfif);"));

        retranslateUi(SmartHome);

        QMetaObject::connectSlotsByName(SmartHome);
    } // setupUi

    void retranslateUi(QWidget *SmartHome)
    {
        SmartHome->setWindowTitle(QApplication::translate("SmartHome", "Form", nullptr));
        label_air->setText(QString());
        btn_return->setText(QApplication::translate("SmartHome", "\350\277\224\345\233\236", nullptr));
        btn_connect->setText(QApplication::translate("SmartHome", "\350\277\236\346\216\245", nullptr));
        btn_disconnect->setText(QApplication::translate("SmartHome", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        label_temperature->setText(QString());
        btn_air->setText(QApplication::translate("SmartHome", "\345\274\200\347\251\272\350\260\203", nullptr));
        label_fan->setText(QString());
        label->setText(QApplication::translate("SmartHome", "IP\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SmartHome", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        btn_bulb->setText(QApplication::translate("SmartHome", "\345\274\200\347\201\257", nullptr));
        btn_fan->setText(QApplication::translate("SmartHome", "\345\274\200\351\243\216\346\211\207", nullptr));
        label_bulb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SmartHome: public Ui_SmartHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_H
