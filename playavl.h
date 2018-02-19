#ifndef PLAYAVL_H
#define PLAYAVL_H

#include <QWidget>
#include "drawavl.h"
#include <QHBoxLayout>

namespace Ui {
class PlayAVL;
}

class PlayAVL : public QWidget
{
    Q_OBJECT

public:
    explicit PlayAVL(QWidget *parent = 0);
    void setData(NodeAVL *avl);
    void updateUI();
    NodeAVL *bst;
    DrawAVL *drawAvl;
    ~PlayAVL();

private:
    Ui::PlayAVL *ui;
};

#endif // PLAYAVL_H
