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

NodeAVL Person_Specific::build_avl_by_list(ListNode<Info> *data){
    NodeAVL *myavl = new NodeAVL;
    ListNode<Info> *p = data;
    while (p != NULL) {
        myavl->insert(p->data);
        p = p->next;
    }
    return *myavl;
}

void Person_Specific::setData(NodeAVL *total,int current,int user){
//    avl = data;
    this->total = total;
    userId = user;
    InfoNode node;
    node.data.id = current;
    node = total->search(node)->data;
    ui->nameLabel->setText(QString::fromStdString(node.data.userName));

    NodeAVL friends = build_avl_by_list(node.data.friends);
    NodeAVL fans = build_avl_by_list(node.data.fans);
    NodeAVL attentions = build_avl_by_list(node.data.attention);

    node.data.id = userId;
    node = total->search(node)->data;
    NodeAVL myFriends = build_avl_by_list((node.data.friends));
    NodeAVL myFans = build_avl_by_list((node.data.fans));
    NodeAVL myAttention = build_avl_by_list(node.data.attention);

    List<InfoNode> tree1data, result;
    friends.traverPre(tree1data);
    Posi(InfoNode)p = tree1data.head();
    while (p != tree1data.tail()) {
        if (myFriends.contains(p->data)) {
              result.insertAsLast(p->data);
         }
        p = p->next;
    }
    p = result.head();
    ui->friends->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    ui->friends->setWordWrap(true);
    while(p!=result.tail()){
        ui->friends->setText(ui->friends->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
        p = p->next;
    }


    tree1data.clear();
    result.clear();
    fans.traverPre(tree1data);
    p = tree1data.head();
    while (p != tree1data.tail()) {
        if (myFans.contains(p->data)) {
              result.insertAsLast(p->data);
         }
        p = p->next;
    }
    p = result.head();
    ui->fans->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    ui->fans->setWordWrap(true);
    while(p!=result.tail()){
        ui->fans->setText(ui->fans->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
        p = p->next;
    }

    tree1data.clear();
    result.clear();
    attentions.traverPre(tree1data);
    p = tree1data.head();
    while (p != tree1data.tail()) {
        if (myAttention.contains(p->data)) {
              result.insertAsLast(p->data);
         }
        p = p->next;
    }
    p = result.head();
    ui->attentions->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    ui->attentions->setWordWrap(true);
    while(p!=result.tail()){
        ui->attentions->setText(ui->attentions->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
        p = p->next;
    }
}




