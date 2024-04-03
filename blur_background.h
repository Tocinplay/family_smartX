#ifndef BLUR_BACKGROUND_H
#define BLUR_BACKGROUND_H
//本控件实现模糊背景
#include <QWidget>
#include <QPainter>
#include <QLabel>
#include <QColor>
#include <QGraphicsBlurEffect>
#include <QPen>
#include <QPushButton>
#include <QSlider>
#include <QVBoxLayout>
#include <QDir>
#include "widget.h"

namespace Ui {
class blur_background;
}
class blur_background : public QWidget
{
    Q_OBJECT

public:
    explicit blur_background(QWidget *parent = nullptr);
    ~blur_background();
protected:
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::blur_background *ui;
//    QImage img;
//    QImage constimg;
    int m_blurVal;     // 模糊参数
    widget* m_pw1;     // 上层，和底部进行效果对比
    widget* m_pw2;     // 置于底层且添加模糊
    QGraphicsBlurEffect* m_pBlurEffect;
};

#endif // BLUR_BACKGROUND_H
