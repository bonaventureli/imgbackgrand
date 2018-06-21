#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QWSServer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
setWindowFlags(Qt::FramelessWindowHint);//set no top widge
QPalette pal;
QString filename = QDir::currentPath()+ "/img/456.png";
QPixmap pixmap(filename);
pal.setBrush(QPalette::Window,QBrush(pixmap));
setPalette(pal);

}

MainWindow::~MainWindow()
{
    delete ui;
}
