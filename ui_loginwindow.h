/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QPushButton *loginButton;
    QLineEdit *idEdit;
    QLineEdit *nameEdit;
    QPushButton *drawAVL;

    void setupUi(QDialog *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName(QStringLiteral("loginwindow"));
        loginwindow->resize(423, 319);
        label = new QLabel(loginwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 110, 41, 21));
        label_2 = new QLabel(loginwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 150, 31, 20));
        graphicsView = new QGraphicsView(loginwindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 100, 101, 101));
        loginButton = new QPushButton(loginwindow);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(100, 240, 80, 23));
        idEdit = new QLineEdit(loginwindow);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(190, 110, 171, 23));
        nameEdit = new QLineEdit(loginwindow);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(190, 150, 171, 21));
        drawAVL = new QPushButton(loginwindow);
        drawAVL->setObjectName(QStringLiteral("drawAVL"));
        drawAVL->setGeometry(QRect(230, 240, 80, 23));

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QDialog *loginwindow)
    {
        loginwindow->setWindowTitle(QApplication::translate("loginwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("loginwindow", "\347\224\250\346\210\267id", Q_NULLPTR));
        label_2->setText(QApplication::translate("loginwindow", "\345\247\223\345\220\215", Q_NULLPTR));
        loginButton->setText(QApplication::translate("loginwindow", "\347\231\273\345\275\225", Q_NULLPTR));
        drawAVL->setText(QApplication::translate("loginwindow", "AVL\346\274\224\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
