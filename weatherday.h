#ifndef WEATHERDAY_H
#define WEATHERDAY_H

#include <QString>


class Today
{
public:
    Today()
    {
        date = "2024-04-08" ;
        city = "长沙市";
        week = "星期一" ;
        wendu = 22;
        shidu = "80%";
        pm25 = 52;
        quality = "良";
        type = "小雨";
        fl = "2级";
        fx = "西北风";
        high = "23℃";
        low = "14℃";
        aqi = 62;
        notice = "雨虽小，注意保暖别感冒";
    }
    QString date;
    QString city;
    QString week;
    int wendu;
    QString shidu;
    int pm25;
    QString quality;
    QString type;
    QString fx;
    QString fl;
    QString high;
    QString low;
    int aqi;
    QString notice;
};

class Day {
public:
    Day()
    {
        date = "2024-04-08";
        week = "星期一";
        type = "多云";
        high = "23℃";
        low = "14℃";
    }

    QString date;
    QString week;
    QString type;
    QString high;
    QString low;

};

#endif // WEATHERDAY_H
