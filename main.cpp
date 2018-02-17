#include "mainwindow.h"
#include <QApplication>
#include "loginwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginwindow *login = new loginwindow();
    login->show();
//    MainWindow w;
//    w.show();

    return a.exec();
}
