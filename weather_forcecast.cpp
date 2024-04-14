#include "weather_forcecast.h"
#include "ui_weather_forcecast.h"



weather_forcecast::weather_forcecast(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::weather_forcecast)
{
    ui->setupUi(this);

    //设置窗口
    setWindowFlag(Qt::FramelessWindowHint); //设置无边框窗口
    //    setAttribute(Qt::WA_TranslucentBackground);  //设置背景透明
    setFixedSize(width(), height()); //设置固定窗口大小
    setWindowIcon(QIcon(":/new/prefix3/logo/wea1.png"));
    setWindowTitle("天气");

    //初始化网络请求体
    this->http = new QNetworkAccessManager(this);

    //UI初始化，控件添加到控件数组
    //星期 标签
    mWeekList << ui->lbl_week_0 <<ui->lbl_week_1 <<ui->lbl_week_2 <<ui->lbl_week_3 <<ui->lbl_week_4 <<ui->lbl_week_5 <<ui->lbl_week_6;
    //最低温标签
    mLowList << ui->lbl_low_0 << ui->lbl_low_1 << ui->lbl_low_2 << ui->lbl_low_3 << ui->lbl_low_4 << ui->lbl_low_5 << ui->lbl_low_6;
    //最高温标签
    mHighList << ui->lbl_high_0 << ui->lbl_high_1 << ui->lbl_high_2 << ui->lbl_high_3<<ui->lbl_high_4<<ui->lbl_high_5<<ui->lbl_high_6;
    //widget框列表
    mWidgetList<< ui->widget_4 << ui->widget_5<< ui->widget_6<<ui->widget_7<<ui->widget_8<<ui->widget_9<<ui->widget_10;
    //天气图标标签
    mTypeList << ui->lbl_icon_0 << ui->lbl_icon_1 << ui->lbl_icon_2 << ui->lbl_icon_3 << ui->lbl_icon_4 << ui->lbl_icon_5 << ui->lbl_icon_6;

    //根据keys,设置icon的路径
    mTypeMap.insert("暴雪",":/new/prefix2/gif/icons8-snow-storm.gif");
    mTypeMap.insert("暴雨",":/new/prefix2/gif/icons8-heavy-rain.gif");
    mTypeMap.insert("暴雨到大暴雨",":/new/prefix2/gif/icons8-rainfall.gif");
    mTypeMap.insert("大暴雨",":/new/prefix2/gif/icons8-rainfall.gif");
    mTypeMap.insert("大暴雨到特大暴雨",":/new/prefix2/gif/icons8-rainfall.gif");
    mTypeMap.insert("大到暴雪",":/new/prefix2/gif/icons8-snow-storm.gif");
    mTypeMap.insert("大雪",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("大雨",":/new/prefix2/gif/icons8-rain.gif");
    mTypeMap.insert("冻雨",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("多云",":/new/prefix2/gif/icons8-cloud.gif");
    mTypeMap.insert("浮沉",":/new/prefix2/gif/icons8-wind.gif");
    mTypeMap.insert("雷阵雨",":/new/prefix2/gif/icons8-storm.gif");
    mTypeMap.insert("雷阵雨伴有冰雹",":/new/prefix2/gif/icons8-snow-storm.gif");
    mTypeMap.insert("霾",":/new/prefix2/gif/icons8-haze.gif");
    mTypeMap.insert("强沙尘暴",":/new/prefix2/gif/icons8-wind.gif");
    mTypeMap.insert("晴",":/new/prefix2/gif/icons8-sun.gif");
    mTypeMap.insert("沙尘暴",":/new/prefix2/gif/icons8-wind.gif");
    mTypeMap.insert("特大暴雨",":/new/prefix2/gif/icons8-rainfall.gif");
    mTypeMap.insert("undefined",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/new/prefix2/gif/icons8-haze.gif");
    mTypeMap.insert("小到中雪",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("小到中雨",":/new/prefix2/gif/icons8-rain-cloud.gif");
    mTypeMap.insert("小雪",":/new/prefix2/gif/icons8-light-snow.gif");
    mTypeMap.insert("小雨",":/new/prefix2/gif/icons8-light-rain.gif");
    mTypeMap.insert("雪",":/new/prefix2/gif/icons8-light-snow.gif");
    mTypeMap.insert("扬沙",":/new/prefix2/gif/icons8-wind.gif");
    mTypeMap.insert("阴","::/new/prefix2/gif/icons8-cloud-48.png");
    mTypeMap.insert("雨",":/new/prefix2/gif/icons8-rain.gif");
    mTypeMap.insert("雨夹雪",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("阵雪",":/new/prefix2/gif/icons8-light-snow.gif");
    mTypeMap.insert("阵雨",":/new/prefix2/gif/icons8-rain.gif");
    mTypeMap.insert("中到大雪",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("中到大雨",":/new/prefix2/gif/icons8-rain.gif");
    mTypeMap.insert("中雪",":/new/prefix2/gif/icons8-snow.gif");
    mTypeMap.insert("中雨",":/new/prefix2/gif/icons8-rain.gif");
    mTypeMap.insert("阴",":/new/prefix2/gif/icons8-cloud.gif");


    sendRequest(getCityCode(mToday.city));



    //窗口最小化
    connect(ui->btn_min,&WinMinButton::clicked,this,&QWidget::showMinimized);
    //窗口关闭
    connect(ui->btn_close,&WinCloseButton::clicked,this,[=](){
        emit returnmenu();
        this->close();
    });
    //搜索按钮
    connect(ui->btn_search,&QPushButton::clicked,this,[=](){
        sendRequest(getCityCode(ui->lineEdit_city->text()));
    });
    //请求处理
    connect(http,&QNetworkAccessManager::finished,this,&weather_forcecast::handle_info);

    //直接在构造中，请求天气数据 30min自动刷新一次
    QTimer *timer = new QTimer();
    timer->setInterval(1800000);
    timer->start();
    connect(timer, &QTimer::timeout, this, [=](){
        sendRequest(getCityCode(mToday.city));
    });

}

weather_forcecast::~weather_forcecast()
{
    delete ui;
}

void weather_forcecast::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // 记录鼠标相对于窗口的位置
        m_dragStartPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void weather_forcecast::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        // 移动窗口
        move(event->globalPos() - m_dragStartPosition);
        event->accept();
    }
}

QString weather_forcecast::getCityCode(const QString &cityName)
{
    QFile file(":/new/prefix1/citycode.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file.";
        return "";
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull()) {
        qDebug() << "Failed to create JSON document.";
        return "";
    }

    if (!doc.isArray()) {
        qDebug() << "JSON document is not an array.";
        return "";
    }

    QJsonArray jsonArray = doc.array();
    for (const auto &item : jsonArray) {
        if (item.isObject()) {
            QJsonObject obj = item.toObject();
            if (obj.contains("city_name") && obj.contains("city_code")) {
                QString cityNameInFile = obj.value("city_name").toString();
                QString cityCode = obj.value("city_code").toString();
                if (cityNameInFile == cityName) {
                    return cityCode;
                }
            }
        }
    }

    qDebug() << "City code not found for" << cityName;
    return "";
}

void weather_forcecast::sendRequest(QString citycode)
{
    QString ip = "http://t.weather.itboy.net/api/weather/city/" + citycode;
    qDebug()<<ip;
    this->http->get(QNetworkRequest(QUrl(ip)));
}

void weather_forcecast::handle_info(QNetworkReply *reply)
{
    //处理读取的信息
    //看状态码 是否为200
    int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<status;
    if(reply->error() != QNetworkReply::NoError || status != 200)
    {
        qDebug() << reply->errorString().toLatin1().data();
        QMessageBox::information(this,"天气","网络异常,请求失败",QMessageBox::Ok);
    }
    else
    {
        //如果 是正常的，我们就需要解析数据
        QByteArray data = reply->readAll();
        parseJson(data);
    }
    reply->deleteLater();
}

void weather_forcecast::parseJson(QByteArray &byteArray)
{
    //错误信息
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray, &err);
    if(err.error != QJsonParseError::NoError)
    {
        return ;//有错误直接返回
    }

    //设置封面今日数据
    QJsonObject rootObj = doc.object();                                                 //根数据
    mToday.date = rootObj.value("time").toString().split(" ").at(0);                    //设置时间
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();        //设置城市

    QJsonObject objData = rootObj.value("data").toObject();                             //data数据
    mToday.shidu = objData.value("shidu").toString();                                   //湿度
    mToday.pm25 = objData.value("pm25").toInt();                                        //pm2.5
    mToday.quality = objData.value("quality").toString();                               //空气质量
    mToday.wendu = objData.value("wendu").toString().toInt();                           //当前温度


    QJsonArray forecastArr = objData.value("forecast").toArray();                       //获取forcast中数据
    mToday.week = forecastArr[0].toObject().value("week").toString();                   //星期
    mToday.type = forecastArr[0].toObject().value("type").toString();                   //天气类型
    mToday.fl = forecastArr[0].toObject().value("fl").toString();                       //风力
    mToday.fx = forecastArr[0].toObject().value("fx").toString();                       //风向
    mToday.high = forecastArr[0].toObject().value("high").toString().split(" ").at(1);  //最高温
    mToday.low = forecastArr[0].toObject().value("low").toString().split(" ").at(1);    //最低温
    mToday.aqi = forecastArr[0].toObject().value("aqi").toInt();                        //空气指数aqi
    mToday.notice = forecastArr[0].toObject().value("notice").toString();               //注意事项

    //设置一周数据
    for(int i=0; i < 7; i++)
    {
        QJsonObject objForecast = forecastArr[i].toObject();
        mDay[i].week = objForecast.value("week").toString();
        mDay[i].date = objForecast.value("ymd").toString();
        mDay[i].type = objForecast.value("type").toString();
        mDay[i].high = objForecast.value("high").toString().split(" ").at(1);
        mDay[i].low = objForecast.value("low").toString().split(" ").at(1);

    }
    mDay[0].week = QString("今天");
    updateUI();
}

void weather_forcecast::updateUI()
{
    // 更新日期和城市
    QString lblcity = mToday.city;
    QString lbltype = mToday.type;
    QString lbltemp = QString::number(mToday.wendu);
//    ui->lab_date->setText(QDateTime::fromString(mToday.date, "yyyy-MM-dd").toString("yyyy/MM/dd") + " " + mToday.week);
    ui->lab_date->setText(mToday.date+ " " + mToday.week);
    ui->lbl_city->setText(lblcity);
    ui->lbl_temp->setText(lbltemp + "℃");
    ui->lbl_temp_range->setText(mToday.low + "~" + mToday.high + " " + lbltype);
    ui->lbl_shidu->setText(mToday.shidu);
    ui->lbl_pm25->setText(QString::number(mToday.pm25));
    ui->lbl_aqi->setText(QString::number(mToday.aqi) + "/" + mToday.quality);
    ui->lbl_wind->setText(mToday.fl + "\r\n" + mToday.fx);
    ui->label->setText(mToday.notice);

    QString gifFilePath = mTypeMap[mToday.type];
    qDebug()<<gifFilePath;
    QMovie *movie = new QMovie(gifFilePath);

    // 设置动画循环播放
    movie->setCacheMode(QMovie::CacheAll);
    movie->setSpeed(100);
    movie->start();
    ui->lbl_icon->setMovie(movie);

    // 设置 QMovie 对象为 QLabel 的动画
//    QLabel *ll = new QLabel(ui->widget_12);
//    ll->move(40,40);
//    ll->setFixedSize(111,121);
//    ll->setScaledContents(true);
//    ll->setMovie(movie);
//    //ll->show();
//    ll->setFrameShape(QFrame::Box);
//    // 开始播放动画
//    //ui->lbl_icon = ll;

    for(int i=0; i<7; i++)
    {
        QString FilePath = mTypeMap[mDay[i].type];
        qDebug()<<FilePath;
        QMovie *weagif = new QMovie(FilePath);
        mWeekList[i]->setText(mDay[i].week);
        mLowList[i]->setText(mDay[i].low);
        mHighList[i]->setText(mDay[i].high);
//        QLabel *giflab = new QLabel(mWidgetList[i]);
//        giflab->setGeometry(80,5,40,40);
//        giflab->setScaledContents(true);
        weagif->setCacheMode(QMovie::CacheAll);
        weagif->setSpeed(100);
        // 设置 QMovie 对象为 QLabel 的动画
//        giflab->setMovie(weagif);
        mTypeList[i]->setMovie(weagif);
        // 开始播放动画
        weagif->start();
    }

}
