#include "smarthome.h"
#include "ui_smarthome.h"
#include <QPushButton>
#include <QLabel>


SmartHome::SmartHome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmartHome)
{
    ui->setupUi(this);

    ui->spinBox_temperature->setRange(0,30);
    ui->spinBox_temperature->setValue(24);
    ui->spinBox_temperature->setPrefix("temperature:");
    ui->spinBox_temperature->setSuffix("℃");
    ui->spinBox_temperature->setSingleStep(1);
    connect(ui->spinBox_temperature,QOverload<int>::of(&QSpinBox::valueChanged),this,[=](){
        int len = ui->spinBox_temperature->value();
        if(len > 24)
        {
            ui->label_air->setStyleSheet("image: url(:/new/prefix1/image/air1.png);");
            ui->btn_air->setText("切换成热空调");
        }
        if(len<20)
        {
            ui->label_air->setStyleSheet("image: url(:/new/prefix1/image/air2.png);");
            ui->btn_air->setText("关空调");
        }
    });

    this->socket = new QTcpSocket(this);

        QLabel *statu = new QLabel("未连接",this);
        //ui->statusbar->addWidget(statu);
        this->setWindowTitle("客户端");
        ui->host_ip->setText("192.168.20.189");//设置默认地址
        ui->lineEdit_ports->setText("20000");//设置默认端口

        //连接按钮
        connect(ui->btn_connect,&QPushButton::clicked,this,[=](){
            QString adress = ui->host_ip->text();
            unsigned int port_num = ui->lineEdit_ports->text().toUInt();
            this->socket->connectToHost(adress,port_num);//连接服务器，但是不一定能连上
        });

        //如果连接成功会触发 connected
        connect(this->socket,&QTcpSocket::connected,this,[=](){

            statu->setText("已连接");
        });
        connect(ui->btn_disconnect,&QPushButton::clicked,this->socket,&QTcpSocket::disconnectFromHost);

        //断开连接 触发 disconnected
        connect(this->socket,&QTcpSocket::disconnected,this,[=](){
            this->socket->close();
            statu->setText("未连接");

        });


        connect(this->socket,&QTcpSocket::readyRead,this,[=](){
            QByteArray data = this->socket->readAll();
            if(data == "开灯"&& ui->btn_bulb->text() == "开灯")
            {
                ui->btn_bulb->clicked();
            }
            if(data == "关灯"&& ui->btn_bulb->text() == "关灯")
            {
                ui->btn_bulb->clicked();
            }
            if(data == "开空调" && ui->btn_air->text() == "开空调")
            {
                ui->btn_air->clicked();
            }

            if(data == "切换成热空调"  && ui->btn_air->text() == "切换成热空调")
            {
                ui->btn_air->clicked();
            }

            if(data == "关空调"  && ui->btn_air->text() == "关空调")
            {
                ui->btn_air->clicked();
            }

            if(data == "开风扇" && ui->btn_fan->text() == "开风扇")
            {
                ui->btn_fan->clicked();
            }

            if(data == "关风扇" && ui->btn_fan->text() == "关风扇")
            {
                ui->btn_fan->clicked();
            }


        });

}

SmartHome::~SmartHome()
{
    delete ui;
}

void SmartHome::on_btn_air_clicked()
{
    if(ui->btn_air->text() == "开空调")
    {
        QString data = "开空调";
        this->socket->write(data.toUtf8());
        ui->label_air->setStyleSheet("image: url(:/new/prefix1/image/air1.png);");
        ui->btn_air->setText("切换成热空调");
    }
    else if(ui->btn_air->text() == "切换成热空调")
    {
        QString data = "切换成热空调";
        this->socket->write(data.toUtf8());
        ui->label_air->setStyleSheet("image: url(:/new/prefix1/image/air2.png);");
        ui->btn_air->setText("关空调");
    }
    else
    {
        QString data = "关空调";
        this->socket->write(data.toUtf8());
        ui->label_air->setStyleSheet("image: url(:/new/prefix1/image/air0.png);");
        ui->btn_air->setText("开空调");
    }
}

void SmartHome::closeEvent(QCloseEvent *event)
{
    // 发出returnmenu信号
    emit send_return();

    // 调用父类的关闭事件处理函数，执行默认的关闭操作
    QWidget::closeEvent(event);
}

void SmartHome::on_btn_bulb_clicked()
{
    if(ui->btn_bulb->text() == "开灯")
    {
        QString data = "开灯";
        this->socket->write(data.toUtf8());

        ui->label_bulb->setStyleSheet("image: url(:/new/prefix1/image/bulb2.jfif);");
        ui->btn_bulb->setText("关灯");
    }
    else
    {
        QString data = "关灯";
        this->socket->write(data.toUtf8());
        ui->label_bulb->setStyleSheet("image: url(:/new/prefix1/image/bulb1.jfif);");
        ui->btn_bulb->setText("开灯");
    }
}

void SmartHome::on_btn_fan_clicked()
{
    if(ui->btn_fan->text() == "开风扇")
    {
        QString data = "开风扇";
        this->socket->write(data.toUtf8());
        ui->label_fan->setStyleSheet("image: url(:/new/prefix1/image/fan1.png);");
        ui->btn_fan->setText("关风扇");
    }
    else
    {
        QString data = "关风扇";
        this->socket->write(data.toUtf8());
        ui->label_fan->setStyleSheet("image: url(:/new/prefix1/image/fan.png);");
        ui->btn_fan->setText("开风扇");
    }
}

void SmartHome::on_btn_return_clicked()
{
    this->close();
    emit send_return();
}
