#ifndef PHOTOMODULE_H
#define PHOTOMODULE_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QDateTime>
#include <QMessageBox>
#include "interactive_buttons/winclosebutton.h"

namespace Ui {
class PhotoModule;
}

class PhotoModule : public QWidget
{
    Q_OBJECT

public:
    explicit PhotoModule(QWidget *parent = nullptr);
    ~PhotoModule();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::PhotoModule *ui;

    QList<QCameraInfo> cameraList;//摄像头类型
    QCamera *camera;
    QCameraImageCapture *cameraimg;

    bool state_camera;//监控状态
    //QPixmap *pixmap;
    void video_open();   //启动摄像头
    void video_close();  //关闭摄像头
    void video_Photo();  //拍照按钮

    void onClose();
signals:
    void returnmenu();
};

#endif // PHOTOMODULE_H
