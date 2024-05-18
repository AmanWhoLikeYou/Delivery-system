#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // //测试商家界面
    // Merchant *m=new Merchant();
    // m->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}
