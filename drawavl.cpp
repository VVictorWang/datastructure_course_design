#include "drawavl.h"

DrawAVL::DrawAVL(QWidget *parent = 0):QWidget(parent)
{
   bst = new NodeAVL;
}

void DrawAVL::setData(NodeAVL *avl){
    bst = avl;
}

void DrawAVL::paintEvent(QPaintEvent *){
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