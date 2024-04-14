#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonObject>
#include <QTextEdit>
#include <QApplication>
#include <QByteArray>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QTableWidgetItem>
#include <QTimer>
#include <QUrl>
#include <QVariant>
#include <QSlider>
#include <musicinfo.h>
#include <QTcpSocket>
#include <QDataStream>
#include <QListWidget>

namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = nullptr);
    ~MusicPlayer();
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    QNetworkAccessManager *http;
    QNetworkAccessManager *http_lyric;
    void SendRequest();
    void handle_info(QNetworkReply *reply);
    void parseJson(QByteArray &byteArray);
    void sendRequest_lyric(musicinfo *music);
    void handle_lyric(QNetworkReply *reply);
    //void onSliderValueChanged(int value);
    //void updateSliderValue();

    void saveFile(QList<musicinfo> &saveList);
    void readFromFile(QList<musicinfo> &saveList);
    void lyricsprintf(QString lyrics);
    void lyricItemDoubleClicked(QListWidgetItem* item);//通过歌词定位时间----直接通过歌词改变播放的位置
    QList<LyricInfo> lyricList;

    QTcpSocket *socket;//客户端用于通信的套接字
    static qint32 saveListLength;                      //保存的歌数组长度
    QList<musicinfo> saveList;                      //保存和读取歌的对象数组
protected:
    void closeEvent(QCloseEvent *event)override;    //关闭事件返回主菜单
    musicinfo SearchList[30];                          //歌对象



signals:
    void returnmenu();

private slots:
    void on_btn_return_clicked();
    void onTableItemClicked(QTableWidgetItem *item);

private:
    Ui::MusicPlayer *ui;
    QString *searchList;


};

#endif // MUSICPLAYER_H
