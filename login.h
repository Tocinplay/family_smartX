#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPainter>
#include "interactive_buttons/waterzoombutton.h"
#include "interactive_buttons/winminbutton.h"
#include "interactive_buttons/winclosebutton.h"
#include "widget.h"
#include <QGraphicsBlurEffect>
#include <QFile>
#include <QIODevice>
#include <QDebug>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private:
    Ui::login *ui;
    QPoint m_dragStartPosition;
    int m_blurVal;     // 模糊参数
    widget* m_back;     // 背景控件
    widget* m_log;
    QGraphicsBlurEffect* m_pBlurEffect; //模糊控件
    WinMinButton *min_btn;//最小化按钮
    WinCloseButton* close_btn;//关闭按钮
    //账号密码存储文件
    QFile file;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

signals:
    void logSuccess(QString);

};

#endif // LOGIN_H
