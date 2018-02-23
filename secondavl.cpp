#include "secondavl.h"
#include "ui_secondavl.h"

SecondAvl::SecondAvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondAvl)
{
    bst = new NodeAVL;
    operation = 0;
    ui->setupUi(this);
    this->setWindowTitle("生成第二颗AVL");
    QObject::connect(ui->insertBtn,SIGNAL(clicked(bool)),this,SLOT(on_add_clicked()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_remove_clicked()));
    QObject::connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(on_ok_clicked()));
}

void SecondAvl::paintEvent(QPaintEvent *){
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

void SecondAvl::on_add_clicked(){
    QString num = ui->insertEdit->text();
    InfoNode node;
    node.data.id = num.toInt();
    bst->insert(node);
    this->update();
}

void SecondAvl::on_remove_clicked(){
    QString num = ui->removeEdit->text();
    InfoNode node;
    node.data.id = num.toInt();
    bst->remove(node);
    this->update();
}

void SecondAvl::on_ok_clicked(){
    emit sendData(bst,operation);
    this->hide();
}

void SecondAvl::setData(int operation){
    this->operation = operation;
}

SecondAvl::~SecondAvl()
{
    delete ui;
}
