#include "musicplayer.h"
#include "ui_musicplayer.h"
#include <QPushButton>
#include <QLabel>

qint32 MusicPlayer::saveListLength = 0;    //歌曲数置0，后面函数会修改这个值
MusicPlayer::MusicPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);

        this->socket = new QTcpSocket(this);

//        QLabel *statu = new QLabel("未连接",this);
//        //ui->statusbar->addWidget(statu);
//        this->setWindowTitle("客户端");
//        ui->host_ip->setText("192.168.20.189");//设置默认地址
//        ui->lineEdit_ports->setText("20000");//设置默认端口

//        //连接按钮
//        connect(ui->btn_connect,&QPushButton::clicked,this,[=](){
//            QString adress = ui->host_ip->text();
//            unsigned int port_num = ui->lineEdit_ports->text().toUInt();
//            this->socket->connectToHost(adress,port_num);//连接服务器，但是不一定能连上
//        });

//        //如果连接成功会触发 connected
//        connect(this->socket,&QTcpSocket::connected,this,[=](){

//            statu->setText("已连接");
//        });
//        connect(ui->btn_disconnect,&QPushButton::clicked,this->socket,&QTcpSocket::disconnectFromHost);

//        //断开连接 触发 disconnected
//        connect(this->socket,&QTcpSocket::disconnected,this,[=](){
//            this->socket->close();
//            statu->setText("未连接");

//        });
//        connect(this->socket,&QTcpSocket::readyRead,this,[=](){
//            QByteArray data = this->socket->readAll();
//            if(data == "播放" )
//        });

    //---------------------------------------------------------------------------------------------------------------------------
    this->player = new QMediaPlayer(this);
    this->playlist = new QMediaPlaylist(this);
    this->player->setPlaylist(playlist);//给播放加设置播放列表
    this->playlist->setPlaybackMode(QMediaPlaylist::Sequential);//默认列表顺序播放
    this->player->setVolume(50);//设置默认音量为50
    ui->volume_control_3->setRange(0,100);//设置音量范围
    ui->volume_control_3->setValue(50);
    ui->volume_control_3->setSingleStep(1);
    //设置视频输出窗口
    this->player->setVideoOutput(ui->widget_3);

    //从文件中读取数据
    readFromFile(saveList);
    qDebug()<<"从文件之中获取的歌曲数目："<<saveList.size();
    //写入歌曲播放列表和listwidget
    QString play_path = "http://music.163.com/song/media/outer/url?id=";
    for (QList<musicinfo>::iterator it = saveList.begin(); it != saveList.end(); ++it) {
            //写入播放列表
            this->playlist->addMedia(QMediaContent(QUrl(play_path+QString::number(it->mID)+".mp3")));
            //写入listwidget中，
            ui->music_list_3->addItem(it->mName);
        }

    //播放 暂停
    connect(ui->btn_play_3,&QPushButton::clicked,this,[=](){
        int select = ui->music_list_3->currentRow();
//        lyricsprintf();
        this->playlist->setCurrentIndex(select);
        if(ui->btn_play_3->text() == "播放")
        {
            this->player->play();
            ui->btn_play_3->setText("暂停");
        }
        else
        {
            this->player->pause();
            ui->btn_play_3->setText("播放");
        }
    });
    //下一曲
    connect(ui->btn_next_3,&QPushButton::clicked,this->playlist,&QMediaPlaylist::next);
    //上一曲
    connect(ui->btn_pre_3,&QPushButton::clicked,this->playlist,&QMediaPlaylist::previous);
    //音量滑块
    connect(ui->volume_control_3,&QSlider::valueChanged,this->player,&QMediaPlayer::setVolume);


    // 设置 QMediaPlayer 和 QSlider 的连接关系
    //通过歌曲时间设置最大音量范围
    connect(player, &QMediaPlayer::durationChanged, this, [&](){

        int select = ui->music_list_3->currentRow();
//        ui->label_5->setPixmap(QPixmap(saveList.at(select).img1v1Url));
        QString lyric = this->saveList.at(select).mlyric;
        qDebug()<< lyric;
        lyricsprintf(lyric);
        ui->progress_bar->setRange(0,player->duration());
    });

    QListWidgetItem *prelyr= nullptr;//记录前一项歌词
    //通过位置改变设置滑块的值
    connect(player, &QMediaPlayer::positionChanged, [&](qint64 position){
        qint64 duration = player->duration(); // 获取歌曲总时长
        if(duration > 0)//当歌曲时长大于0时设置进度条
        {
            int progress = static_cast<int>(position); // 计算进度百分比
            ui->progress_bar->setValue(progress); // 更新进度条的值
            // 将毫秒表示的时间转换为分钟和秒
            QTime currentTime(0, (position / 60000) % 60, (position / 1000) % 60);
            QTime totalTime(0, (duration / 60000) % 60, (duration / 1000) % 60);
            /*--------------------实现自动歌词自动滚动-------------------------*/
            // 遍历歌词列表，找到对应的歌词项
            QListWidgetItem* highlightedItem = nullptr;
            QListWidgetItem* prevItem = nullptr;
            // 创建正常大小的字体
            QFont normalFont;
            normalFont.setPointSize(10); // 设置正常字体大小

            // 创建想要的大字体
            QFont highlightedFont;
            highlightedFont.setPointSize(14); // 设置大字体大小


            for(int i=0; i < lyricList.count(); i++)
            {
                if(lyricList[i].milliseconds >= position)
                {
                    highlightedItem = ui->lyric_widget->item(i+7);
                    break;
                }
            }

            if (highlightedItem) {
                // 找到前一项
                int highlightedIndex = ui->lyric_widget->row(highlightedItem);
                if (highlightedIndex > 0) {
                    prevItem = ui->lyric_widget->item(highlightedIndex - 1);
                }

                // 将前一项的字体设置为正常大小
                if (prevItem) {
                    prevItem->setFont(normalFont);

                }
                // 将当前项居中显示
                ui->lyric_widget->scrollToItem(highlightedItem, QAbstractItemView::PositionAtCenter);
                ui->lyric_widget->setCurrentItem(highlightedItem);
                highlightedItem->setFont(highlightedFont);
                //此处注释掉的代码为是双击歌词跳转播放后，恢复跳转之前歌曲的大小
//                if(prelyr != prevItem)
//                {
//                    int row = ui->lyric_widget->row(prelyr);
//                    if(row >= 8)
//                    {
//                        prelyr->setFont(normalFont);
//                    }
//                }
                prelyr = highlightedItem;
            }


            /* -------------------------------------------------------------*/
            // 将毫秒表示的时间转换为分钟、秒和毫秒
            qint64 currentPositionInMilliseconds = position;
            qint64 totalDurationInMilliseconds = duration;
//            qDebug()<<position<<"a"<<duration;
            // 更新时间标签的文本
            QString currentTimeString = QTime(0, 0).addMSecs(currentPositionInMilliseconds).toString("mm:ss.zzz");//实时时间
            QString totalTimeString = QTime(0, 0).addMSecs(totalDurationInMilliseconds).toString("mm:ss.zzz");
            ui->label_2->setText(QString("%1 / %2").arg(currentTime.toString("mm:ss")).arg(totalTime.toString("mm:ss")));
        }
    });

    // 实现拖动进度条改变播放位置
    connect(ui->progress_bar, &QSlider::sliderMoved, [&]() {
        qint64 duration = player->duration(); //总时长
        int value = ui->progress_bar->value(); //拖动位置
        if(duration > 0){
            player->setPosition(value); //设置百分比位置
        }
        qDebug()<<"目的时长："<<QTime(0,0,0).addMSecs(value).toString("hh:mm:ss");
    });


    //播放模式
    connect(ui->play_model_3,&QComboBox::currentTextChanged,this,[=](const QString &text){
        if(text == "顺序播放")
        {
            this->playlist->setPlaybackMode(QMediaPlaylist::Sequential);
        }
        else if(text == "循环播放")
        {
            this->playlist->setPlaybackMode((QMediaPlaylist::Loop));
        }
        else if(text == "随机播放")
        {
            this->playlist->setPlaybackMode(QMediaPlaylist::Random);
        }
    });

    //设置默认选择歌曲为第0行
    if(ui->music_list_3->count() > 0)
    {
        ui->music_list_3->setCurrentRow(0);
    }
    //音乐列表改变
    connect(this->playlist,&QMediaPlaylist::currentIndexChanged,this,[=](int index){
        ui->music_list_3->setCurrentRow(index);
    });

    //音乐列表双击播放
    connect(ui->music_list_3,&QListWidget::itemDoubleClicked,this,[=](QListWidgetItem *item){
        int current_index = ui->music_list_3->row(item);//获取我这个项目在多少行
        int playing_index = this->playlist->currentIndex();

        if(current_index == playing_index)
        {
            emit ui->btn_play_3->clicked();
        }
        else
        {
            this->playlist->setCurrentIndex(current_index);//设置我要播放那首歌
            this->player->play();//播放
            ui->btn_play_3->setText("暂停");
        }
    });

    //添加音乐到列表
//    connect(ui->music_add_3,&QPushButton::clicked,this,[=](){
//        //添加我们只添加本地音乐
//        QStringList data = QFileDialog::getOpenFileNames(this,"选择音乐","../",
//                                                         "*.mp3 *.mp4 *.wav *.acc");
//        for(int i = 0;i < data.size();i++)
//        {
//            //1、将音乐路径添加到 音乐播放列表
//            if(this->playlist->addMedia(QMediaContent(QUrl::fromLocalFile(data[i]))) )
//            {
//                //成功将音乐添加到播放列表之后我才可以添加到 ui 界面
//                QFileInfo info(data[i]);

//                ui->music_list_3->addItem(info.fileName());
//            }
//        }
//    });
    //删除音乐
    connect(ui->music_delete_3,&QPushButton::clicked,this,[=](){
        //删除指定音乐
        int select_index = ui->music_list_3->currentRow();
        if(this->playlist->removeMedia(select_index))//删除音乐播放列表的文件
        {
            //删除保存文件的列表
            saveList.removeAt(select_index);
            //保存修改的文件
            saveFile(saveList);
            //删除ui文件
            ui->music_list_3->takeItem(select_index);
        }
        else
        {
            QMessageBox::critical(this,"错误","已没有可删除的文件");
        }
    });

    //如果 为视频文件，我们应该设置 视频输出源
//    this->player->setVideoOutput(ui->widget_3);

    //歌曲请求体
    this->http = new QNetworkAccessManager(this);
    //搜索按钮--发送请求
    connect(ui->btn_search_3,&QPushButton::clicked,this,&MusicPlayer::SendRequest);
    //请求完成，处理请求
    connect(this->http,&QNetworkAccessManager::finished,this,&MusicPlayer::handle_info);
    //双击列表添加歌曲
    connect(ui->tableWidget, &QTableWidget::itemClicked, this, &MusicPlayer::onTableItemClicked);

    //歌词请求体
    this->http_lyric = new QNetworkAccessManager(this);
    //处理歌词json
    //    connect(this->http_lyric,&QNetworkAccessManager::finished, this,&MusicPlayer::handle_lyric);
    //通过歌词改变播放的进度
    connect(ui->lyric_widget,&QListWidget::itemDoubleClicked,this,[=](QListWidgetItem *item){
        QFont normalFont;
        normalFont.setPointSize(10); // 设置正常字体大小
        //跳转后歌词的索引
        int row = ui->lyric_widget->row(item);
        if(row<8)
        {
            this->player->setPosition(0);
        }
        //歌词QList中的索引
        int setrow = row - 8;

        //跳转前歌词的索引
        int index = ui->lyric_widget->row(prelyr);
        if(index >= 8)
        {
            prelyr->setFont(normalFont);
        }
//        if(index != ui->lyric_widget->currentRow()-1)
//        {

//        }

        qint64 mill = lyricList[setrow].milliseconds;
        this->player->setPosition(mill);
    });


}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

//发送歌词请求
void MusicPlayer::SendRequest()
{
    //api xiaowang "https://dataiqs.com/api/netease/music/?type=song&msg="
    //api chenxiongwen    "http://iwxyi.com:3000/search?keywords="
    //发送请求 -> 网址  //http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s= + 音乐名 + &type=1&offset=0&total=true&limit=2
    //请求方式 get
        QString url = "http://iwxyi.com:3000/search?keywords=" + ui->lineEdit_search_3->text();/*.toUtf8().toPercentEncoding()*/
//    QString url = "http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s=" + ui->lineEdit_search_3->text()+"&type=1&offset=0&total=true&limit=2";
    QNetworkRequest* request = new QNetworkRequest(url);
    //    request->setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");
    //    request->setHeader(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36");
    this->http->get(*request);
}

//处理歌曲接收体
void MusicPlayer::handle_info(QNetworkReply *reply)
{
    int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<status;
    if(reply->error() != QNetworkReply::NoError || status != 200)
    {
        QMessageBox::critical(this,"错误","网络异常");
        return;
    }
    else{
        QByteArray byteArray = reply->readAll();
        parseJson(byteArray);
    }
    reply->deleteLater();
}

//解析歌曲JSON
void MusicPlayer::parseJson(QByteArray &byteArray)
{
    //    delete []SearchList;//清空歌曲列表
    //    delete []searchList;
    //错误信息
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray, &err);
    if (!doc.isObject() || err.error != QJsonParseError::NoError) {
        qWarning() << "Invalid JSON data!";
        return;
    }
    //解析搜索结果
    QJsonObject resultObj = doc.object().value("result").toObject();
    if (resultObj.isEmpty() || !resultObj.contains("songs")) {
        qWarning() << "No songs found in JSON data!";
        return;
    }
    //解析songs
    QJsonArray songsArray = resultObj.value("songs").toArray();
    ui->tableWidget->setRowCount(songsArray.size());
    ui->tableWidget->setColumnCount(5);
    qDebug()<<songsArray.size();
//    ListLength = songsArray.size();
    //创建搜索歌曲对象，大小为获取到的歌曲数

    searchList = new QString[songsArray.size()];


    for (int i = 0;i < songsArray.size();i++) {
        QJsonObject songObj = songsArray[i].toObject();             //歌曲对象[i]
        QString name = songObj.value("name").toString();            //歌曲名
        QString artists;
        for (const auto &artistValue : songObj.value("artists").toArray()) {
            if (!artists.isEmpty())
                artists += ", ";
            artists += artistValue.toObject().value("name").toString();             //作者名
        }
        QString album = songObj.value("album").toObject().value("name").toString();     //专辑名
        int duration = songObj.value("duration").toInt() / 1000;                        //歌曲时长，变为秒
        QString picUrl = songObj.value("artists").toArray().at(0).toObject().value("img1v1Url").toString(); //专辑图片


        //歌曲
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(name));
        ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        //歌手
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(artists));
        ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        //专辑
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(album));
        ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        //时长
        QString time = QString("%1:%2").arg(duration/60).arg(duration%60);
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(time));
        ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        int music_id =songObj.value("id").toInt();
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(music_id)));
        ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        SearchList[i].mID=music_id;                                                 //音乐ID
        SearchList[i].mName=name;                                                   //音乐名
        SearchList[i].mDuration=songObj.value("duration").toInt();                  //时长,这得是毫秒，不然很麻烦
        SearchList[i].album=album;                                                  //专辑名
        SearchList[i].aName=artists;                                                //作者
        SearchList[i].img1v1Url=picUrl;                                             //专辑封面
        //        SearchList[i].mlyric 不能在这获取，需要读取歌曲播放时获取

//        qDebug()<< "时长" + time;
    }
}

//请求歌词，并且保存到类中
void MusicPlayer::sendRequest_lyric(musicinfo *music)
{
    //请求歌词的请求体
    QString url = "http://iwxyi.com:3000/lyric?id=" + QString::number(music->mID);
    QNetworkRequest* request = new QNetworkRequest(url);
    request->setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");
    request->setHeader(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36");

    //歌曲请求返回体
    connect(this->http_lyric, &QNetworkAccessManager::finished, this, [=](QNetworkReply *reply) {
        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << status;
        if (reply->error() != QNetworkReply::NoError || status != 200) {
            QMessageBox::critical(this, "错误", "网络异常");
            return;
        }
        //读数据
        QByteArray byteArray = reply->readAll();
        //删除请求体
        reply->deleteLater();

        //再次检查有无错误
        QJsonParseError jsonError;
        QJsonDocument jsonResponse = QJsonDocument::fromJson(byteArray, &jsonError);
        if (jsonError.error != QJsonParseError::NoError) {
            qDebug() << "JSON parse error:" << jsonError.errorString();
            return;
        }
        //检查是不是JsonObject
        if (!jsonResponse.isObject()) {
            qDebug() << "JSON data is not an object.";
            return;
        }
        QJsonObject jsonObject = jsonResponse.object();
        QJsonObject lrcObject = jsonObject.value("lrc").toObject();
        if (!lrcObject.contains("lyric")) {
            qDebug() << "Lyrics not found in JSON data.";
            return;
        }
        //取出歌词
        QString lyrics = lrcObject.value("lyric").toString();
        //写入对象之中
        music->mlyric = lyrics;

        saveList.append(*music);//保存列表加入
        saveFile(saveList);//写文件
//        qDebug() << "Lyrics:" << music->mlyric<<"\r\n";
//        qDebug() <<saveList.last().mlyric<<"\r\n";
    });

    this->http_lyric->get(*request);
}

//保存播放列表歌曲到文件之中
void MusicPlayer::saveFile(QList<musicinfo> &saveList)
{
    QFile file("./musicinfo.json");
       if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
       {
           QMessageBox::critical(this, "写入歌曲列表", "写入失败");
           return;
       }

       QJsonArray jsonArray;
       for (const musicinfo &info : saveList)
       {
           QJsonObject jsonObject;
           jsonObject["mName"] = info.mName;
           jsonObject["mID"] = info.mID;
           jsonObject["aName"] = info.aName;
           jsonObject["mDuration"] = info.mDuration;
           jsonObject["album"] = info.album;
           jsonObject["img1v1Url"] = info.img1v1Url;
           jsonObject["mlyric"] = info.mlyric;
           jsonArray.append(jsonObject);
       }

       QJsonDocument jsonDoc(jsonArray);
       file.write(jsonDoc.toJson());
       file.close();
}

//从文件之中读取歌曲到列表之中
void MusicPlayer::readFromFile(QList<musicinfo> &saveList)
{
    QFile file("./musicinfo.json");
       if (!file.open(QIODevice::ReadOnly))
       {
           QMessageBox::critical(this, "加载歌曲列表", "加载失败");
           return;
       }

       QByteArray jsonData = file.readAll();
       QJsonDocument jsonDoc(QJsonDocument::fromJson(jsonData));
       QJsonArray jsonArray = jsonDoc.array();

       saveList.clear();
       for (const QJsonValue &value : jsonArray)
       {
           QJsonObject jsonObject = value.toObject();
           musicinfo info;
           info.mName = jsonObject["mName"].toString();
           info.mID = jsonObject["mID"].toInt();
           info.aName = jsonObject["aName"].toString();
           info.mDuration = jsonObject["mDuration"].toInt();
           info.album = jsonObject["album"].toString();
           info.img1v1Url = jsonObject["img1v1Url"].toString();
           info.mlyric = jsonObject["mlyric"].toString();
           saveList.append(info);
       }

       file.close();
}

void MusicPlayer::lyricsprintf(QString lyrics)
{
    ui->lyric_widget->clear();//歌词显示清空
    lyricList.clear();//歌词列表清空
    QFont font;
    font.setPointSize(10);
//    ui->lyric_widget->setItemHeight(50); // 设置项的高度为50像素
//    ui->lyric_widget->styleSheet("QListWidget::item{rgba:(255,255,255,150);}");
    QRegularExpression re("\\[(\\d{2}):(\\d{2})(\\.\\d{2,3})?\\]");
    QStringList lines = lyrics.split("\n", QString::SkipEmptyParts);
    for(int i=0; i<8; i++)
    {
        ui->lyric_widget->addItem("");
    }
    for(const QString &line: lines)
    {
//        QString time = re.match(line).captured(1);
        QTime curtime;
        QRegularExpressionMatch match = re.match(line);
        if (match.hasMatch()) {
            int minute = match.captured(1).toInt();
            int second = match.captured(2).toInt();
            int millisecond = 0;
            if (match.lastCapturedIndex() == 3) {
                QString millisecondStr = match.captured(3).mid(1);
                millisecond = millisecondStr.toInt();
                if (millisecondStr.length() == 2) {
                    millisecond *= 10; // 将2位毫秒转换为3位毫秒
                }
            }
            curtime = QTime(0, minute, second, millisecond);
            // 使用 curtime
        }

        qDebug()<<curtime.msecsSinceStartOfDay();
        QString lyrstring = line.split("]").at(1);
        QListWidgetItem *lyritem = new QListWidgetItem(lyrstring);
        lyritem->setSizeHint(QSize(-1,30));

        LyricInfo lyricinfo;
        lyricinfo.text = lyrstring;//歌词文本
        lyricinfo.milliseconds = curtime.msecsSinceStartOfDay(); //歌曲时长
        lyricList.append(lyricinfo);
        lyritem->setTextAlignment(Qt::AlignCenter);
        ui->lyric_widget->addItem(lyritem);
    }
    ui->lyric_widget->setFont(font);
}

void MusicPlayer::lyricItemDoubleClicked(QListWidgetItem *item)
{
    if (!item)
           return;
    QString lyricText = item->text();
    for (const LyricInfo& lyric : lyricList) {
        if(lyricText == lyric.text)
        {
            this->player->setPosition(lyric.milliseconds);
        }
    }
}



//关闭窗口事件，返回菜单界面
void MusicPlayer::closeEvent(QCloseEvent *event)
{
    this->player->stop();
    // 发出returnmenu信号
    emit returnmenu();

    // 调用父类的关闭事件处理函数，执行默认的关闭操作
    QWidget::closeEvent(event);
}

//返回点击按钮
void MusicPlayer::on_btn_return_clicked()
{
    this->close();
    emit returnmenu();
}

//从搜索列表添加到播放链表中来
void MusicPlayer::onTableItemClicked(QTableWidgetItem *item)
{
    if (!item) return; // 确保有效的项被双击
    int row = item->row(); // 获取双击的行数

    //    QString play_path = searchList[row]; // 获取对应行数的 play_path
    QString play_path = "http://music.163.com/song/media/outer/url?id=";
    int music_id = ui->tableWidget->item(row, 4)->text().toInt();   //音乐路径
    play_path += QString::number(music_id) +  ".mp3";//这才是完整的音乐播放路径

    QString musicname = ui->tableWidget->item(row, 0)->text(); //音乐名字

    //获取歌词
    sendRequest_lyric(&SearchList[row]);
    // 输出该行第1列的项和对应的 play_path
    this->playlist->addMedia(QMediaContent(QUrl(play_path)));//添加歌曲到播放列表
    ui->music_list_3->addItem(musicname);//添加歌曲到播放列表


    qDebug() << "Clicked item:" << musicname << "Play path:" << play_path;
}
