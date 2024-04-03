#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground);
//    setWindowFlag(Qt::FramelessWindowHint);
    ui->menubar->setStyleSheet("background-color: rgba(0, 0, 0, 0);");
}

MainWindow::~MainWindow()
{
    delete ui;
}

