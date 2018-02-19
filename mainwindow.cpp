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
    InfoNode node;
    node.data.id = userId;
    NodeAVL  *myavl = new NodeAVL;
    node = avl->search(node)->data;
    ListNode<Info> *p = node.data.friends;
    while (p != NULL) {
        myavl->insert(p->data);
        p = p->next;
    }
    friends->setData(myavl,avl,userId);
    QIcon icon1("/home/victor/qt/datas_structure/weibo_icon.png");
    ui->tabs->addTab(friends,icon1,"friends");

    people_list *fans = new people_list();
    p = node.data.fans;
    NodeAVL *fanAvl = new NodeAVL;
    while(p!=NULL){
        fanAvl->insert(p->data);
        p = p->next;
    }
    fans->setData(fanAvl,avl,userId);
    ui->tabs->addTab(fans,icon1,"fans");

    people_list *attentions = new people_list();
    p = node.data.attention;
    NodeAVL *attentionAvl = new NodeAVL;
    while(p!=NULL){
        attentionAvl->insert(p->data);
        p = p->next;
    }
    attentions->setData(attentionAvl,avl,userId);
    ui->tabs->addTab(attentions,icon1,"attentions");
}
