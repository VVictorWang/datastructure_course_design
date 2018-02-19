#ifndef PERSON_SPECIFIC_H
#define PERSON_SPECIFIC_H

#include <QWidget>
#include "./AVL/AVL.h"
#include <QLabel>

namespace Ui {
class Person_Specific;
}

class Person_Specific : public QWidget
{
    Q_OBJECT

public:
    explicit Person_Specific(QWidget *parent = 0);
    void setData(NodeAVL *total,int current,int userId);
    NodeAVL build_avl_by_list(ListNode<Info> *data);
    NodeAVL *total;
    int userId;
    ~Person_Specific();

private:
    Ui::Person_Specific *ui;
};

#endif // PERSON_SPECIFIC_H
