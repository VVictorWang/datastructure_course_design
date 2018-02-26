#include "people_list.h"
#include "ui_people_list.h"

people_list::people_list(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::people_list)
{
    ui->setupUi(this);
    QObject::connect(ui->addBtn,SIGNAL(clicked(bool)),this,SLOT(on_add_clicked()));
    QObject::connect(ui->deleBtn,SIGNAL(clicked(bool)),this,SLOT(on_delete_clicked()));
}

people_list::~people_list()
{
    delete ui;
}

int people_list::searchNode(QString name){
    List<InfoNode> da;
    avl->traverPre(da);
    Posi(InfoNode)p = da.head();
    while (p!=da.tail()) {
        if(p->data.data.userName.compare(name.toStdString()) == 0)
            return p->data.data.id;
        p = p->next;
    }
    return -1;
}

void people_list::setData(NodeAVL *data,NodeAVL *total,int user){
    userId = user;
    avl = data;
    this->total = total;
    List<InfoNode> da;
    avl->traverPre(da);
    Posi(InfoNode)p = da.head();
    while (p != da.tail()) {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::fromStdString(p->data.data.userName));
        ui->listWidget->addItem(item);
        p = p->next;
    }
    connect(ui->listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(toPerson_Specific(QListWidgetItem *)));
}

void people_list::on_add_clicked(){
    people_add *peadd = new people_add;
    peadd->show();
    connect(peadd,SIGNAL(sendData(ListNode<Info>)),this,SLOT(on_Infodata_received(ListNode<Info>)));
}

void people_list::on_Infodata_received(InfoNode info){
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(QString::fromStdString(info.data.userName));
    ui->listWidget->addItem(item);
    ui->listWidget->update();
}

void people_list::on_delete_clicked(){
    ui->listWidget->removeItemWidget(ui->listWidget->currentItem());
    delete ui->listWidget->currentItem();
    ui->listWidget->update();
}

void people_list::toPerson_Specific(QListWidgetItem *current){
    Person_Specific *person_specific = new Person_Specific();
    person_specific->setData(total,searchNode(current->text()),userId);
    person_specific->show();
}
