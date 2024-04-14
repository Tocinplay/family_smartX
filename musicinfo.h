#ifndef MUSICINFO_H
#define MUSICINFO_H

#include <QJsonObject>
#include <QString>


class musicinfo
{
public:
    musicinfo(){
        mName="";
        mID=0;
        aName="";
        mDuration=0;
        album="";
        img1v1Url="";
        mlyric="";
    }
    musicinfo(const QString &name, qint32 id, const QString &author, qint32 duration,
              const QString &album, const QString &imageUrl, const QString &lyric)
        : mName(name), mID(id), aName(author), mDuration(duration),
          album(album), img1v1Url(imageUrl), mlyric(lyric) {}
    QString mName;              //歌曲名
    qint32 mID;                    //歌曲ID
    QString aName;              //作者名
    qint32 mDuration;              //歌曲总时长
    QString album;              //专辑名
    QString img1v1Url;          //专辑图片
    QString mlyric;         //歌词



};
struct LyricInfo {
    QString text;
    int milliseconds;
};

#endif // MUSICINFO_H
