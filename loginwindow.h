#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "mainwindow.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include "./AVL/AVL.h"


namespace Ui {
class loginwindow;
}

class loginwindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = 0);
    ~loginwindow();
    AVL<InfoNode> *avl;

private:
    Ui::loginwindow *ui;

signals:
    void toMainWindow();
private slots:
    void onLoginClicked();
    bool validUser(QString,QString);
};

#endif // LOGINWINDOW_H