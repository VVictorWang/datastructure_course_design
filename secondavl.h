#ifndef SECONDAVL_H
#define SECONDAVL_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include "./AVL/AVL.h"
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class SecondAvl;
}

class SecondAvl : public QWidget
{
    Q_OBJECT

public:
    explicit SecondAvl(QWidget *parent = 0);
    NodeAVL *bst;
    int operation;
    void paintEvent(QPaintEvent *);
    ~SecondAvl();
    void setData(int operation);

signals:
    void sendData(NodeAVL *data,int);
private slots:
    void on_add_clicked();
    void on_remove_clicked();
    void on_ok_clicked();

private:
    Ui::SecondAvl *ui;
};

#endif // SECONDAVL_H
