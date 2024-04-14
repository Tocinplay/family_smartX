#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QScreen>
#include <QAction>
#include <login.h>
#include <QLabel>
#include "interactive_buttons/interactivebuttonbase.h"
#include "interactive_buttons/winclosebutton.h"
#include "interactive_buttons/winmaxbutton.h"
#include "interactive_buttons/winmenubutton.h"
#include "interactive_buttons/winminbutton.h"
#include "interactive_buttons/winrestorebutton.h"
#include "interactive_buttons/waterfloatbutton.h"
#include "weather_forcecast.h"
#include "photomodule.h"
#include "musicplayer.h"
#include "smarthome.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void recv_log(QString user);

private:
    Ui::MainWindow *ui;
    login *log = NULL;                      //登录界面模块
    QLabel *username = NULL;                //用户名
    weather_forcecast *weaui = NULL;        //天气界面模块
    PhotoModule *smartui = NULL;            //摄像界面模块
    MusicPlayer *musicui = NULL;            //音乐播放器界面模块
    SmartHome *shui = NULL;

    QPoint mOffset; //窗口移动偏移量

public slots:
    void enableMenu();
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
};
#endif // MAINWINDOW_H
