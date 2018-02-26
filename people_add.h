#ifndef PEOPLE_ADD_H
#define PEOPLE_ADD_H

#include <QWidget>
#include "./AVL/Info.h"
#include <QPushButton>
#include <QLineEdit>

namespace Ui {
class people_add;
}

class people_add : public QWidget
{
    Q_OBJECT

public:
    explicit people_add(QWidget *parent = 0);
    InfoNode info;
    ~people_add();

signals:
    void sendData(InfoNode info);
private slots:
    void on_ok_clicked();
private:
    Ui::people_add *ui;
};

#endif // PEOPLE_ADD_H
