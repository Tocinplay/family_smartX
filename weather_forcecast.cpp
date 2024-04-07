#include "weather_forcecast.h"
#include "ui_weather_forcecast.h"

weather_forcecast::weather_forcecast(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::weather_forcecast)
{
    ui->setupUi(this);
}

weather_forcecast::~weather_forcecast()
{
    delete ui;
}
