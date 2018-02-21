#ifndef DRAWAVL_H
#define DRAWAVL_H

#include <QWidget>
#include <QPaintEvent>
#include "./AVL/AVL.h"
#include <QPainter>

class DrawAVL : public QWidget
{
     Q_OBJECT
public:
    NodeAVL *bst;
    DrawAVL(QWidget *parent =0);
    void paintEvent(QPaintEvent *);
    void setData(NodeAVL *avl);
};

#endif // DRAWAVL_H
