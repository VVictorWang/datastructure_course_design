#ifndef SEARCH_COMMON_H
#define SEARCH_COMMON_H

#include <QWidget>
#include <QLabel>
#include "./AVL/AVL.h"
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class Search_Common;
}

class Search_Common : public QWidget
{
    Q_OBJECT

public:
    explicit Search_Common(QWidget *parent = 0);
    NodeAVL *total;
    void setData(NodeAVL *data);
    ~Search_Common();

private slots:
    void on_search_clicked();
private:
    Ui::Search_Common *ui;
};

#endif // SEARCH_COMMON_H
