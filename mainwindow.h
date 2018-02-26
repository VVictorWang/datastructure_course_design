#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./AVL/AVL.h"
#include "people_list.h"
#include <QTabWidget>
#include "search_common.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int userId;
    AVL<InfoNode> *avl;

private:
    Ui::MainWindow *ui;
private slots:
    void enterMainWindow(int,NodeAVL *);
};

#endif // MAINWINDOW_H
