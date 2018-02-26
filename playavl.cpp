#include "playavl.h"
#include "ui_playavl.h"

PlayAVL::PlayAVL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayAVL)
{
    bst = new NodeAVL;
    second = new SecondAvl;
    connect(second,SIGNAL(sendData(NodeAVL*,int)),this,SLOT(on_data_received(NodeAVL*,int)));
    ui->setupUi(this);
    this->setWindowTitle("AVL演示");
    QObject::connect(ui->insertBtn,SIGNAL(clicked(bool)),this,SLOT(on_add_clicked()));
    QObject::connect(ui->removeBtn,SIGNAL(clicked(bool)),this,SLOT(on_remove_clicked()));
    QObject::connect(ui->interBtn,SIGNAL(clicked(bool)),this,SLOT(on_inter_clicked()));
    QObject::connect(ui->differBtn,SIGNAL(clicked(bool)),this,SLOT(on_differ_clicked()));
    QObject::connect(ui->unionBtn,SIGNAL(clicked(bool)),this,SLOT(on_union_clicked()));
    QObject::connect(ui->resetBtn,SIGNAL(clicked(bool)),this,SLOT(on_reset_clicked()));
    QObject::connect(ui->isSubBtn,SIGNAL(clicked(bool)),this,SLOT(on_is_subtree_clicked()));
}

void PlayAVL::paintEvent(QPaintEvent *){
    QPainter painter(this);
    if (!bst->empty())
    {
        bst->display(); //调用命令行显示 从而计算结点位置

        //层次遍历第一遍 画线
        Queue<BinNodePosi(InfoNode)> q;
        BinNodePosi(InfoNode) x = bst->root();
        q.enqueue(x);
        while (!q.empty())
        {
            x = q.dequeue();
            if (x)
            {
                if (x && x->parent)
                    painter.drawLine(10*x->horizontal_position+10, 10+50 * x->distance_to_root, 10*x->parent->horizontal_position+10, 10+50 * x->parent->distance_to_root);
            }
            if (x->lchild) q.enqueue(x->lchild);
            if (x->rchild) q.enqueue(x->rchild);
        }

        //层次遍历第二遍 画结点
        x = bst->root();
        q.enqueue(x);
        while (!q.empty())
        {
            x = q.dequeue();
            if (x)
            {
                painter.setBrush(Qt::blue);
                painter.drawEllipse(10*x->horizontal_position, 50 * x->distance_to_root, 30, 30);
                painter.drawText(10*x->horizontal_position+10, 50 * x->distance_to_root+15, QString::number(x->data.data.id));
            }
            if (x->lchild) q.enqueue(x->lchild);
            if (x->rchild) q.enqueue(x->rchild);
        }
    }
}

void PlayAVL::setData(NodeAVL *avl){
    List<InfoNode> data;
    avl->traverPre(data);
    Posi(InfoNode) p = data.head();
    int count = 20,i=0;
    while (p!=data.tail() && i<count) {
        bst->insert(p->data);
        p = p->next;
        i++;
    }
    origin = bst;
}

void PlayAVL::on_add_clicked(){
    QString num = ui->addEdit->text();
    InfoNode node;
    node.data.id = num.toInt();
    bst->insert(node);
    this->update();
}

void PlayAVL::on_remove_clicked(){
    QString num = ui->removeEdit->text();
    InfoNode node;
    node.data.id = num.toInt();
    bst->remove(node);
    this->update();
}

void PlayAVL::on_inter_clicked(){
    second->setData(0);
    second->show();
}

void PlayAVL::on_differ_clicked(){
    second->setData(1);
    second->show();
}

void PlayAVL::on_union_clicked(){
    second->setData(2);
    second->show();
}

void PlayAVL::on_is_subtree_clicked(){
    second->setData(3);
    second->show();
}

void PlayAVL::on_reset_clicked(){
    bst = origin;
    this->update();
}

void PlayAVL::avl_union(NodeAVL *data){
    List<InfoNode> tree1data;
    data->traverPre(tree1data);
    Posi(InfoNode)p = tree1data.head();
    cout << p->data << '\t';
    while (p != tree1data.tail()) {
        bst->insert(p->data);
        p = p->next;
    }
}

void PlayAVL::avl_difference(NodeAVL *data){
    List<InfoNode> data2;
    data->traverPre(data2);
    Posi(InfoNode)p = data2.head();
    while (p != data2.tail()) {
        bst->remove(p->data);
        p = p->next;
    }
}

void PlayAVL::avl_instersection(NodeAVL *data){
    List<InfoNode> data2;
    NodeAVL *result = new NodeAVL;
    data->traverPre(data2);
    Posi(InfoNode)p = data2.head();
    while (p != data2.tail()) {
        if (bst->contains(p->data)) {
            result->insert(p->data);
        }
        p = p->next;
    }
    bst = result;
}

void PlayAVL::on_data_received(NodeAVL *data,int operation){
    switch (operation) {
    case 0:
        avl_instersection(data);
        break;
    case 1:
        avl_difference(data);
        break;
    case 2:
        avl_union(data);
        break;
    case 3:
        if(bst->avl_is_subtree(data)){
            QMessageBox::information(this,"提示","该集合是其子集");
        }else {
            QMessageBox::information(this,"提示","该集合不是其子集");
        }
        break;
    default:
        break;
    }
    this->update();
}

PlayAVL::~PlayAVL()
{
    delete ui;
}
