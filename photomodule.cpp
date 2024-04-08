#include "photomodule.h"
#include "ui_photomodule.h"

PhotoModule::PhotoModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhotoModule)
{
    ui->setupUi(this);
}

PhotoModule::~PhotoModule()
{
    delete ui;
}
