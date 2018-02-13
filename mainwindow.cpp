#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enterMainWindow(){
    ui->setupUi(this);
//    ui->show();
}
