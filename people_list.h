#ifndef PEOPLE_LIST_H
#define PEOPLE_LIST_H

#include <QWidget>
#include "./AVL/AVL.h"
#include <QListWidgetItem>
#include <QListWidget>
#include "person_specific.h"
#include "people_add.h"

namespace Ui {
class people_list;
}

class people_list : public QWidget
{
    Q_OBJECT

public:
    explicit people_list(QWidget *parent = 0);
    void setData(NodeAVL *avl,NodeAVL *total,int userId);
    NodeAVL *avl,*total;
    int userId;

    int searchNode(QString);
    ~people_list();

public slots:
     void toPerson_Specific(QListWidgetItem *);
     void on_add_clicked();
     void on_delete_clicked();

     void on_Infodata_received(InfoNode info);

private:
    Ui::people_list *ui;
};

#endif // PEOPLE_LIST_H
