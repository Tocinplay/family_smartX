#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlag(Qt::FramelessWindowHint);
//    ui->menubar->setStyleSheet("background-color: rgba(0, 0, 0, 0);");
    setWindowTitle("智慧生活");
    this->setWindowIcon(QIcon(":/new/prefix3/logo/mainlogo.png"));

    QScreen* desktop = QApplication::screenAt(QCursor::pos());
    QRect rect = desktop->availableGeometry();
    move(rect.left()+(rect.width() - width())/2, (rect.height() - height())/2);

//    setMouseTracking(true);

    log = new login;
    username = new QLabel("",this);
    username->setGeometry(30,30,128,32);

    //四个按钮
    weaui = new weather_forcecast;
    ui->btn_weather->setGeometry(100,100,150,100);
    ui->btn_weather->setTextColor(QColor(253,230,224));
    ui->btn_weather->setFont(QFont("得意黑"));
    ui->btn_weather->setFontSize(23);
    connect(ui->btn_weather,&InteractiveButtonBase::clicked,this,[=](){
        this->hide();
        weaui->show();
    });

    connect(weaui,&weather_forcecast::returnmenu,this,&MainWindow::show);

    ui->btn_music->setGeometry(300,100,150,100);
    ui->btn_music->setTextColor(QColor(253,230,224));
    ui->btn_music->setFont(QFont("得意黑"));
    ui->btn_music->setFontSize(20);
    musicui = new MusicPlayer;
    connect(ui->btn_music,&InteractiveButtonBase::clicked,this,[=](){

        this->hide();
        musicui->show();
    });
    connect(musicui,&MusicPlayer::returnmenu,this,&MainWindow::show);

    ui->btn_smarthome->setGeometry(300,300,150,100);
    ui->btn_smarthome->setTextColor(QColor(253,230,224));
    ui->btn_smarthome->setFont(QFont("得意黑"));
    ui->btn_smarthome->setFontSize(23);
    shui = new SmartHome;
    connect(ui->btn_smarthome,&InteractiveButtonBase::clicked,this,[=](){
        this->hide();
        shui->show();
    });
    connect(shui,&SmartHome::send_return,this,&MainWindow::show);

    ui->btn_livevideo->setGeometry(100,300,150,100);
    ui->btn_livevideo->setTextColor(QColor(253,230,224));
    ui->btn_livevideo->setFont(QFont("得意黑"));
    ui->btn_livevideo->setFontSize(23);
    smartui = new PhotoModule;
    connect(ui->btn_livevideo,&InteractiveButtonBase::clicked,this,[=](){

        this->hide();
        smartui->show();
    });
    connect(smartui,&PhotoModule::returnmenu,this,&MainWindow::show);
//    WinMenuButton* menu_btn = new WinMenuButton(this);
//    menu_btn->setGeometry(421, 11, 32, 32);

    //退出登录按钮
    InteractiveButtonBase* logquit_btn = new WaterFloatButton("退出登录", this);
    logquit_btn->setGeometry(369, 11, 84, 32);
    logquit_btn->setBgColor(QColor(192,72,81,192),QColor(192,72,81,255));
    connect(logquit_btn,&InteractiveButtonBase::clicked,this,[=](){
        log->show();
        this->hide();
        username->setText("");
        username->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    });

    //最小化按钮
    WinMinButton *min_btn = new WinMinButton(this);
    min_btn->setGeometry(453, 11, 32, 32);
    connect(min_btn,&WinMinButton::clicked,this,&MainWindow::showMinimized);

    //取消最大化按钮
    WinRestoreButton* res_btn = new WinRestoreButton(this);
    res_btn->hide();
    res_btn->setGeometry(485, 10, 32, 32);

    //最大化按钮
    WinMaxButton *max_btn = new WinMaxButton(this);
    max_btn->setGeometry(485, 11, 32, 32);
    connect(max_btn,&WinMaxButton::clicked,this,[=](){
//        &MainWindow::showMaximized
        this->showMaximized();
        res_btn->show();
        max_btn->hide();
    });

    //绑定取消最大化按钮
    connect(res_btn,&WinRestoreButton::clicked,this,[=](){
        this->showNormal();
        res_btn->hide();
        max_btn->show();
    });




    //关闭按钮
    WinCloseButton* close_btn = new WinCloseButton(this);
    close_btn->setGeometry(517, 11, 32, 32);
    close_btn->setBgColor(Qt::black, QColor(192,72,81));
//    close_btn->setWaterRipple(false);
//    close_btn->setJitterAni(false);

    connect(close_btn,&WinCloseButton::clicked,this,&MainWindow::close);  //绑定关闭按钮


    this->hide();

    log->show();

    //登录成功传进来用户名
    connect(log,&login::logSuccess,this,[=](QString name){
        log->hide();
        this->show();
        username->setText("欢迎,"+name);
        username->setFont(QFont("微软雅黑"));
        username->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(45,46,54);");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enableMenu()
{
    this->show();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset = event->globalPos() - this->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - mOffset);
}

