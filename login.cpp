#include "login.h"
#include "ui_login.h"

#include <QDir>
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowIcon(QIcon(":/new/prefix3/logo/mainlogo.png")); //设置图标
    //设置背景
    QPixmap pix(":/new/prefix1/image/1.jpg");
    m_back = new widget(this);
    m_back->setPixmap(pix);
    //Effect
    m_blurVal = 15;
    m_pBlurEffect = new QGraphicsBlurEffect();
    m_pBlurEffect->setBlurRadius(m_blurVal);
    m_pBlurEffect->setBlurHints(QGraphicsBlurEffect::PerformanceHint);
    m_back->setGraphicsEffect(m_pBlurEffect);
    m_back->lower();
    setWindowTitle(QString("登录"));
    //1.设置头像
    ui->lab_headimg->setPixmap(QPixmap(":/new/prefix1/image/cat_meme.jpg"));
    ui->lab_headimg->setScaledContents(true);
    ui->lab_headimg->setAlignment(Qt::AlignHCenter);
    ui->lab_headimg->setFixedSize(150,150);

    //字间距
    QString styleSheet = "QLineEdit {"
                        "   letter-spacing: 2px;" // 设置字间距为 2 像素
                        "}";
    //设置账号密码文本框
    ui->lineEdit_user->setTextColor(QColor(45,46,54));
    ui->lineEdit_user->setPlaceholderTextColor(QColor(94,97,109,50));//鱼尾灰
    ui->lineEdit_user->setStyleSheet(styleSheet);
    ui->lineEdit_user->setFont(QFont("微软雅黑"));
    ui->lineEdit_user->setPlaceholderText("请输入账号");
    ui->lineEdit_user->setLinePen(QPen(QColor(255, 150, 0),2),QPen(Qt::lightGray,2));
    ui->lineEdit_user->setAttribute(Qt::WA_TranslucentBackground);

    ui->lineEdit_pswd->setTextColor(QColor(45,46,54));
    ui->lineEdit_pswd->setStyleSheet(styleSheet);
    ui->lineEdit_pswd->setPlaceholderTextColor(QColor(94,97,109,50));
    ui->lineEdit_pswd->setFont(QFont("微软雅黑"));
    ui->lineEdit_pswd->setPlaceholderText("请输入密码");
    ui->lineEdit_pswd->setLinePen(QPen(QColor(255, 150, 0),2),QPen(Qt::lightGray,2));
    ui->lineEdit_pswd->setEchoMode(QLineEdit::Password);

    //设置标签背景
    ui->lab_user->setStyleSheet("background-color: rgba(255, 255, 255, 0.3); color: rgb(45,46,54); text-shadow: -1px -1px 1px;");
    ui->lab_pswd->setStyleSheet("background-color: rgba(255, 255, 255, 0.3); color: rgb(45,46,54);");

    ui->box_dpy_pswd->setStyleSheet("background-color: rgba(255, 255, 255, 0.3); color: rgb(45,46,54);");
//    ui->box_rmb_pswd->setStyleSheet("background-color: rgba(255, 255, 255, 0.3); color: rgb(45,46,54);");
    //2.显示密码
    connect(ui->box_dpy_pswd,&QCheckBox::stateChanged,this,[=](int check){
        if(check>1)
        {
            ui->lineEdit_pswd->setEchoMode(QLineEdit::Normal);
        }
        else{
            ui->lineEdit_pswd->setEchoMode(QLineEdit::Password);
        }
    });
    //3.记住密码
    //4.按钮设置
    ui->btn_reg->setBgColor(QColor(240,128,128));
    ui->btn_reg->setBgColor(Qt::transparent, QColor(0x88, 0x88, 0x88, 0x64));
    ui->btn_reg->setRadius(10, 5);
    ui->btn_reg->setChokingProp(0.18);

    ui->btn_log->setBgColor(QColor(240,128,128));
    ui->btn_log->setBgColor(Qt::transparent, QColor(0x88, 0x88, 0x88, 0x64));
    ui->btn_log->setRadius(10, 5);
    ui->btn_log->setChokingProp(0.18);

    //5.缩小和关闭按钮
    //最小化按钮
    min_btn = new WinMinButton(this);
    min_btn->setGeometry(width()-64, 0, 32, 32);
    connect(min_btn,&WinMinButton::clicked,this,&login::showMinimized);

    close_btn = new WinCloseButton(this);
    close_btn->setGeometry(width()-32, 0, 32, 32);
    close_btn->setBgColor(Qt::black, QColor(192,72,81));

    connect(close_btn,&WinCloseButton::clicked,this,&login::close);  //绑定关闭按钮
    this->setAttribute(Qt::WA_DeleteOnClose);
    file.setFileName(":/new/prefix1/user_info.txt");
    qDebug() << QDir::currentPath();

    //注册按钮
    connect(ui->btn_reg,&InteractiveButtonBase::clicked,this,[&](){
        QDialog *dlg = new QDialog;
        //dlg.resize(100,100);//他是 可以变的大小，如果你的界面设置小了，然后里面东西 很大，会自动把你的界面变大！！
        dlg->setFixedSize(300,300);
        dlg->setWindowTitle("注册");
        QLabel *reges = new QLabel("注册账号",dlg);
        QLabel *pass_w = new QLabel("密码",dlg);
        QLabel *pass_sure = new QLabel("确认密码",dlg);
        QLineEdit *l1 = new QLineEdit(dlg);
        QLineEdit *l2 = new QLineEdit(dlg);
        QLineEdit *l3 = new QLineEdit(dlg);
        QGridLayout *part1 = new QGridLayout;
        part1->addWidget(reges,0,0);
        part1->addWidget(pass_w,1,0);
        part1->addWidget(pass_sure,2,0);
        part1->addWidget(l1,0,1);
        part1->addWidget(l2,1,1);
        part1->addWidget(l3,2,1);

        QPushButton *yes = new QPushButton("注册",dlg);
        QPushButton *no = new QPushButton("取消",dlg);
        QHBoxLayout *part2 = new QHBoxLayout;
        part2->addWidget(yes);
        part2->addWidget(no);

        QVBoxLayout *dlg_layout = new QVBoxLayout;
        dlg_layout->addLayout(part1);
        dlg_layout->addLayout(part2);
        //dlg_layout 将 part1 和 part2 添加过来了，此时part1 和 part2 依赖于dlg_layout
        //dlg_layout 就是他们两个的父对象

        //将dlg_layout 设置给 dlg,此时dlg_layout 就依赖于 dlg
        //那么 dlg 就是 dlg_layout 的父对象！！
        dlg->setLayout(dlg_layout);

        //设置 对话框 关闭就被析构
        dlg->setAttribute(Qt::WA_DeleteOnClose);
        connect(yes,&QPushButton::clicked,this,[&](){

            QString s1 = l1->text();
            if(s1.length()<6)
            {
                QMessageBox::critical(this,"失败","账号不能少于6位");
                return;
            }
            QString s2 = l2->text();
            QString s3 = l3->text();
            if(s2 != s3)
            {
                QMessageBox::information(dlg,"注册","两次密码输入不一致，请重新输入");
                return;
            }
            else{
                if(!file.open(QIODevice::ReadOnly))
                {
                    QMessageBox::critical(this,"失败","无法打开文件");
                    return;
                }
                while(!file.atEnd())
                {
                    QByteArray data = file.readLine();
                    QString info = data;
                    int ipos = info.indexOf('\t');
                    QString value = info.mid(0,ipos);
                    qDebug()<<value;
                    if(ui->lineEdit_user->text() == value)
                    {
                        //找到账号密码登录成功
                        qDebug()<<"账号已存在";
                        file.close();
                        QMessageBox::information(dlg,"注册","账号已存在，请重新注册");
                        l1->clear();
                        l2->clear();
                        l3->clear();
                        return;
                    }
                }
                file.close();
                if(!file.open(QIODevice::Append | QIODevice::Text))
                {
                    QMessageBox::critical(this,"失败","无法打开文件");
                    return;
                }
                QString user = s1 + '\t' + s2 ;
                QByteArray data = user.toUtf8();
                file.write(data);
                file.write("\r\n");
                file.close();
                dlg->close();
            }

        });
        connect(no,&QPushButton::clicked,dlg,&QDialog::close);

        //当 注册界面 被销毁的时候，要显示父窗口
        connect(dlg,&QDialog::destroyed,this,[=](){
            file.close();
            this->show();
        });

        this->hide();//显示注册界面之前，隐藏父窗口
        dlg->exec();

    });

    connect(ui->btn_log,&InteractiveButtonBase::clicked,this,[=](){
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::critical(this,"失败","无法打开文件");
            return;
        }
        while(!file.atEnd())
        {
            QByteArray data = file.readLine();
            QString info = data;
            int ipos = info.indexOf('\t');
            QString value = info.mid(0,ipos);
            QString key = info.mid(ipos+1);
            key = key.replace("\r\r\n","");
//            qDebug()<<value<<"-"<<key;
            if(ui->lineEdit_user->text() == value && ui->lineEdit_pswd->text() == key)
            {
                //找到账号密码登录成功
                qDebug()<<"登录成功";
                file.close();
                emit logSuccess(value);
                return;
            }
        }
        if(file.atEnd())
            QMessageBox::critical(this,"登录失败","账号或者密码错误");
        file.close();
    });
}

login::~login()
{
    delete ui;
}

void login::mousePressEvent(QMouseEvent *event)
{
   if (event->button() == Qt::LeftButton)
   {
       // 记录鼠标相对于窗口的位置
       m_dragStartPosition = event->globalPos() - frameGeometry().topLeft();
       event->accept();
   }
}

void login::mouseMoveEvent(QMouseEvent *event)
{
   if (event->buttons() & Qt::LeftButton)
   {
       // 移动窗口
       move(event->globalPos() - m_dragStartPosition);
       event->accept();
    }
}

void login::resizeEvent(QResizeEvent *event)
{
    m_back->setGeometry(0, 0, width() , height());  // 最底层放置一层模糊的图片
    min_btn->setGeometry(width()-64, 0, 32, 32);
    close_btn->setGeometry(width()-32, 0, 32, 32);
    return QWidget::resizeEvent(event);
}

void login::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

}
