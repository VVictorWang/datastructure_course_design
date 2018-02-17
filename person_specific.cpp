#include "person_specific.h"
#include "ui_person_specific.h"

Person_Specific::Person_Specific(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Person_Specific)
{
    ui->setupUi(this);
}

Person_Specific::~Person_Specific()
{
    delete ui;
}

void Person_Specific::setData(NodeAVL *data,int current,int user){
    avl = data;
    userId = user;
    InfoNode node;
    node.data.id = current;
    node = avl->search(node)->data;
    ui->nameLabel->setText(QString::fromStdString(node.data.userName));
//    NodeAVL friends = avl->buid_avl_by_list((*node.data.friends));
//    node.data.id = userId;
//    node = avl->search(node)->data;
//    NodeAVL myFriends = avl->buid_avl_by_list((*node.data.friends));
//    List<InfoNode> unions = friends.avl_union(myFriends);

}
