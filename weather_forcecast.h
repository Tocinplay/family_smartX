#ifndef WEATHER_FORCECAST_H
#define WEATHER_FORCECAST_H

#include <QWidget>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QLabel>
#include <QMessageBox>
#include <QMovie>
#include "weatherday.h"

namespace Ui {
class weather_forcecast;
}

class weather_forcecast : public QWidget
{
    Q_OBJECT

public:
    explicit weather_forcecast(QWidget *parent = nullptr);
    ~weather_forcecast();


protected:
    void mousePressEvent(QMouseEvent *event) override;      //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event) override;       //窗口移动

    QString getCityCode(const QString &cityName);           //获取城市代码
    void sendRequest(QString citycode);                     //发送请求
    void handle_info(QNetworkReply *reply);                 //解析请求
    void parseJson(QByteArray& byteArray);                  //解析json
    void updateUI();                                        //更新UI界面
private:
    Ui::weather_forcecast *ui;
    QPoint m_dragStartPosition;                             //鼠标移动点

    QNetworkAccessManager *http;                            //请求体指针
    QList<QLabel*> mWeekList;                               //周列表
    QList<QLabel*> mLowList;                                //最低温列表
    QList<QLabel*> mHighList;                               //最高温列表
    QList<QLabel*> mTypeList;                               // 天气
    QList<QWidget*> mWidgetList;                           //框列表
    QMap<QString, QString> mTypeMap;                        //图标和天气类型键值对
    Today mToday;                                           //今日数据
    Day mDay[7];                                            //七天数据
signals:
    void returnmenu();                                      //返回菜单信号
};

#endif // WEATHER_FORCECAST_H
