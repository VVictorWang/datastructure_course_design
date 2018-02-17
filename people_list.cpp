#include "people_list.h"
#include "ui_people_list.h"

people_list::people_list(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::people_list)
{
    ui->setupUi(this);
}

people_list::~people_list()
{
    delete ui;
}

void people_list::setData(NodeAVL *avl){
    for(int i =1;i<=avl->size();i++){
           InfoNode node;
           node.data.id = i;
           node = avl->search(node)->data;
           QListWidgetItem *item = new QListWidgetItem;
           item->setText(QString::fromStdString(node.data.userName));
           ui->listWidget->addItem(item);
    }
}
