#ifndef PLAYAVL_H
#define PLAYAVL_H

#include <QWidget>
#include "drawavl.h"
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class PlayAVL;
}

class PlayAVL : public QWidget
{
    Q_OBJECT

public:
    explicit PlayAVL(QWidget *parent = 0);
    void setData(NodeAVL *avl);
    NodeAVL *bst;
    DrawAVL *drawAvl;
    void paintEvent(QPaintEvent *);
    ~PlayAVL();

private slots:
    void on_add_clicked();
    void on_remove_clicked();

private:
    Ui::PlayAVL *ui;
};

#endif // PLAYAVL_H
