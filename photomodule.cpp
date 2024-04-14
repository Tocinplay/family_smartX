#include "photomodule.h"
#include "ui_photomodule.h"

PhotoModule::PhotoModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhotoModule)
{
    ui->setupUi(this);
    setWindowTitle("camera");

    camera = new QCamera();
    //添加摄像头类型信息
    cameraList = QCameraInfo::availableCameras();
    for(int i = 0;i< cameraList.size();i++)//摄像头类型
    {
        ui->comboBox->addItem(cameraList[i].description());//摄像头类型信息添加到ui
    }



    //创建摄像头对象
    camera = new QCamera();
    //添加摄像头类型信息
    cameraList = QCameraInfo::availableCameras();
    for(int i = 0;i< cameraList.size();i++)//摄像头类型
    {
        ui->comboBox->addItem(cameraList[i].description());//摄像头类型信息添加到ui
    }
    //点击打开摄像头
    connect(ui->pushButton,&QPushButton::clicked,this,&PhotoModule::video_open);
    //点击关闭摄像头
    connect(ui->pushButton_2,&QPushButton::clicked,this,&PhotoModule::video_close);
    //点击删除照片
    connect(ui->pushButton_4,&QPushButton::clicked,this,[=](){
        ui->label_3->clear();
    });

    //处理捕获照片
    cameraimg = new QCameraImageCapture(camera); //实例化对象
    cameraimg->setCaptureDestination(QCameraImageCapture::CaptureToFile); //设置拍照将图像捕获到文件中
    //捕获拍照信息
    connect(cameraimg,&QCameraImageCapture::imageCaptured,this,[=](int,const QImage &image){
        QPixmap pixmap = QPixmap::fromImage(image);
        ui->label_3->setPixmap(pixmap);
    });
    //点击拍照
    connect(ui->pushButton_3,&QPushButton::clicked,this,&PhotoModule::video_Photo);

    //窗口关闭
//    connect(this, &PhotoModule::destroy, this, [=](){
//        qDebug()<<"发出信号";
//        this->onClose();
//    });
    WinCloseButton* close_btn = new WinCloseButton(this);
    close_btn->setGeometry(width()-32, 0, 32, 32);
    close_btn->setBgColor(Qt::black, QColor(192,72,81));
//    close_btn->setWaterRipple(false);
//    close_btn->setJitterAni(false);

    connect(close_btn,&WinCloseButton::clicked,this,[=](){
        qDebug()<<"发出信号";
        emit returnmenu();
        this->close();
    });  //绑定关闭按钮
}

PhotoModule::~PhotoModule()
{
    delete ui;
}

void PhotoModule::closeEvent(QCloseEvent *event)
{
    // 发出returnmenu信号
    emit returnmenu();

    // 调用父类的关闭事件处理函数，执行默认的关闭操作
    QWidget::closeEvent(event);
}

void PhotoModule::video_open()
{
    ui->video_output->show();
    camera->setCaptureMode(QCamera::CaptureStillImage);                //设置捕捉模式为静态帧
    //camera->setCaptureMode(QCamera::CaptureMode::CaptureViewfinder);  //将采集到取景器中
    ui->video_output->setAspectRatioMode(Qt::IgnoreAspectRatio);
    camera->setViewfinder(ui->video_output);                           //设置数据显示到video_output控件中
    camera->start();  //启动摄像头
}

void PhotoModule::video_close()
{
    camera->stop();
    ui->video_output->close();
}

void PhotoModule::video_Photo()
{
    camera->searchAndLock();      //上锁
    cameraimg->capture();      //拍照
    camera->unlock();
}

//void PhotoModule::onClose()
//{
//    // 发射自定义信号
//    emit returnmenu();
//}
