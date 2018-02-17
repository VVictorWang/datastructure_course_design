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

void MainWindow::enterMainWindow(int user,NodeAVL *info){
    userId = user;
    avl = info;
    qDebug()<<avl->size();
    people_list *friends = new people_list();
    friends->setData(avl);
    QIcon icon1("/home/victor/qt/datas_structure/weibo_icon.png");
    ui->tabs->addTab(friends,icon1,"friends");
//    for(int i =1;i<=avl->size();i++){
//         InfoNode node;
//         node.data.id = i;
//         node = avl->search(node)->data;
//         QLabel *pImageLabel = new QLabel(this);
//         QPixmap pixmap("/home/victor/qt/datas_structure/weibo_icon.png");
//         pImageLabel->setFixedSize(90,90);
//         pImageLabel->setPixmap(pixmap);
//         pImageLabel->setScaledContents(true);
//         layout->addItem(pImageLabel);

////         QListWidgetItem *item = new QListWidgetItem;
////         item->setText(QString::fromStdString(node.data.userName));

////         ui->listWidget->addItem(item);
//    }
}
