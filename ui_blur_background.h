/********************************************************************************
** Form generated from reading UI file 'blur_background.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUR_BACKGROUND_H
#define UI_BLUR_BACKGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blur_background
{
public:

    void setupUi(QWidget *blur_background)
    {
        if (blur_background->objectName().isEmpty())
            blur_background->setObjectName(QString::fromUtf8("blur_background"));
        blur_background->resize(864, 605);

        retranslateUi(blur_background);

        QMetaObject::connectSlotsByName(blur_background);
    } // setupUi

    void retranslateUi(QWidget *blur_background)
    {
        blur_background->setWindowTitle(QApplication::translate("blur_background", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class blur_background: public Ui_blur_background {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUR_BACKGROUND_H
