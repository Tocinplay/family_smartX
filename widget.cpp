#include "widget.h"

#include <QPushButton>
#include <QGraphicsBlurEffect>
#include <QPainter>
#include <QPixmap>


widget::widget(QWidget *parent) : QWidget(parent)
{
//    auto btn = new QPushButton("观察此子控件是否模糊", this);
//        btn->move(10, 10);
}

void widget::setPixmap(const QPixmap &pix)
{
    m_pix = pix;
//    m_pix.save("p22.jpg");
}

void widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    if (!m_pix.isNull())
        painter.drawPixmap(rect(), m_pix);

    QPainter pa(this);
    pa.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    if (!m_pix.isNull())
        pa.drawPixmap(rect(), m_pix);

//    // 解开就是遮罩效果
//    QColor colBrush("#131313");
//    colBrush.setAlphaF(0.6);
//    pa.setBrush(colBrush);
//    QColor colPen("#FFFFFF");
//    colPen.setAlphaF(0.1);
//    QPen pen(colPen, 1);
//    pa.setPen(pen);

//    const int margin1 = 1;
//    pa.drawRoundedRect(contentsRect().adjusted(margin1, margin1, -margin1, -margin1), 4, 4);

//    colPen.setNamedColor("#000000");
//    colPen.setAlphaF(0.1);
//    pa.setPen(colPen);
//    pa.setBrush(Qt::NoBrush);
//    const int margin2 = 0;
//    pa.drawRoundedRect(contentsRect().adjusted(margin2, margin2, -margin2, -margin2), 4, 4);
}
