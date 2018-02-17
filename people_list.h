#ifndef PEOPLE_LIST_H
#define PEOPLE_LIST_H

#include <QWidget>
#include "./AVL/AVL.h"
#include <QListWidgetItem>
#include <QListWidget>
namespace Ui {
class people_list;
}

class people_list : public QWidget
{
    Q_OBJECT

public:
    explicit people_list(QWidget *parent = 0);
    void setData(NodeAVL *avl);
    ~people_list();

private:
    Ui::people_list *ui;
};

#endif // PEOPLE_LIST_H
