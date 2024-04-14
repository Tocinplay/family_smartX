QT       += core gui
QT += winextras
QT += network
QT += multimedia
QT += multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DynamicUnderlineLineEdit.cpp \
    blur_background.cpp \
    interactive_buttons/interactivebuttonbase.cpp \
    interactive_buttons/waterfloatbutton.cpp \
    interactive_buttons/waterzoombutton.cpp \
    interactive_buttons/winclosebutton.cpp \
    interactive_buttons/winmaxbutton.cpp \
    interactive_buttons/winminbutton.cpp \
    interactive_buttons/winrestorebutton.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    musicplayer.cpp \
    photomodule.cpp \
    smarthome.cpp \
    weather_forcecast.cpp \
    widget.cpp

HEADERS += \
    DynamicUnderlineLineEdit.h \
    blur_background.h \
    interactive_buttons/interactivebuttonbase.h \
    interactive_buttons/waterfloatbutton.h \
    interactive_buttons/waterzoombutton.h \
    interactive_buttons/winclosebutton.h \
    interactive_buttons/winmaxbutton.h \
    interactive_buttons/winminbutton.h \
    interactive_buttons/winrestorebutton.h \
    login.h \
    mainwindow.h \
    musicinfo.h \
    musicplayer.h \
    photomodule.h \
    smarthome.h \
    weather_forcecast.h \
    weatherday.h \
    widget.h

FORMS += \
    blur_background.ui \
    login.ui \
    mainwindow.ui \
    musicplayer.ui \
    photomodule.ui \
    smarthome.ui \
    weather_forcecast.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    city.qrc  \
    image.qrc


DISTFILES +=
