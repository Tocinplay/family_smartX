/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <interactive_buttons/interactivebuttonbase.h>
#include "blur_background.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    blur_background *widget;
    QGridLayout *gridLayout;
    InteractiveButtonBase *btn_smarthome;
    InteractiveButtonBase *btn_music;
    InteractiveButtonBase *btn_livevideo;
    InteractiveButtonBase *btn_weather;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(560, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new blur_background(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_smarthome = new InteractiveButtonBase(widget);
        btn_smarthome->setObjectName(QString::fromUtf8("btn_smarthome"));

        gridLayout->addWidget(btn_smarthome, 1, 1, 1, 1);

        btn_music = new InteractiveButtonBase(widget);
        btn_music->setObjectName(QString::fromUtf8("btn_music"));

        gridLayout->addWidget(btn_music, 0, 1, 1, 1);

        btn_livevideo = new InteractiveButtonBase(widget);
        btn_livevideo->setObjectName(QString::fromUtf8("btn_livevideo"));

        gridLayout->addWidget(btn_livevideo, 1, 0, 1, 1);

        btn_weather = new InteractiveButtonBase(widget);
        btn_weather->setObjectName(QString::fromUtf8("btn_weather"));

        gridLayout->addWidget(btn_weather, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_smarthome->setText(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\256\266\345\261\205", nullptr));
        btn_music->setText(QApplication::translate("MainWindow", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", nullptr));
        btn_livevideo->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\346\250\241\345\235\227", nullptr));
        btn_weather->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
