#ifndef WEATHER_FORCECAST_H
#define WEATHER_FORCECAST_H

#include <QWidget>

namespace Ui {
class weather_forcecast;
}

class weather_forcecast : public QWidget
{
    Q_OBJECT

public:
    explicit weather_forcecast(QWidget *parent = nullptr);
    ~weather_forcecast();

private:
    Ui::weather_forcecast *ui;
};

#endif // WEATHER_FORCECAST_H
