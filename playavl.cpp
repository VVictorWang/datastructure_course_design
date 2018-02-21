#include "playavl.h"
#include "ui_playavl.h"

PlayAVL::PlayAVL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayAVL)
{
    bst = new NodeAVL;
    ui->setupUi(this);
    QObject::connect(ui->insertBtn,SIGNAL(clicked(bool)),this,SLOT(on_add_clicked()));
    QObject::connect(ui->removeBtn,SIGNAL(clicked(bool)),this,SLOT(on_remove_clicked()));
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
//    drawAvl->setData(avl);
//    drawAvl->update();

    List<InfoNode> data;
    avl->traverPre(data);
    Posi(InfoNode) p = data.head();
    int count = 20,i=0;
    while (p!=data.tail() && i<count) {
        bst->insert(p->data);
        p = p->next;
        i++;
    }
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


PlayAVL::~PlayAVL()
{
    delete ui;
}
