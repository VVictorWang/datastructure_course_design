#ifndef PLAYAVL_H
#define PLAYAVL_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include "secondavl.h"
#include <QPainter>
#include <QPaintEvent>
#include "./AVL/AVL.h"

namespace Ui {
class PlayAVL;
}

class PlayAVL : public QWidget
{
    Q_OBJECT

public:
    explicit PlayAVL(QWidget *parent = 0);
    void setData(NodeAVL *avl);
    NodeAVL *bst,*origin;
//    DrawAVL *drawAvl;
    SecondAvl *second;
    void paintEvent(QPaintEvent *);
    void avl_union(NodeAVL *data);
    void avl_difference(NodeAVL *data);
    void avl_instersection(NodeAVL *data);
    ~PlayAVL();

private slots:
    void on_add_clicked();
    void on_remove_clicked();
    void on_inter_clicked();
    void on_differ_clicked();
    void on_union_clicked();
    void on_reset_clicked();
    void on_is_subtree_clicked();

    void on_data_received(NodeAVL *data,int operation);

private:
    Ui::PlayAVL *ui;
};

#endif // PLAYAVL_H
