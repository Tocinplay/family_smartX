#ifndef SMARTHOME_H
#define SMARTHOME_H

#include <QWidget>
#include <QWidget>
#include <QTcpSocket>
#include <QKeyEvent>
QT_BEGIN_NAMESPACE


namespace Ui {
class SmartHome;
}

class SmartHome : public QWidget
{
    Q_OBJECT

public:
    explicit SmartHome(QWidget *parent = nullptr);
    ~SmartHome();

    QTcpSocket *socket;//客户端用于通信的套接字

signals:
    void send_return();
private slots:
void on_btn_return_clicked();

void on_btn_bulb_clicked();

void on_btn_fan_clicked();

void on_btn_air_clicked();

private:
    Ui::SmartHome *ui;

protected:
    void closeEvent(QCloseEvent *event)override;

};

#endif // SMARTHOME_H
