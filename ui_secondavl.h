/********************************************************************************
** Form generated from reading UI file 'secondavl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDAVL_H
#define UI_SECONDAVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondAvl
{
public:
    QLineEdit *insertEdit;
    QPushButton *insertBtn;
    QLineEdit *removeEdit;
    QPushButton *pushButton_2;
    QPushButton *ok;

    void setupUi(QWidget *SecondAvl)
    {
        if (SecondAvl->objectName().isEmpty())
            SecondAvl->setObjectName(QStringLiteral("SecondAvl"));
        SecondAvl->resize(608, 434);
        insertEdit = new QLineEdit(SecondAvl);
        insertEdit->setObjectName(QStringLiteral("insertEdit"));
        insertEdit->setGeometry(QRect(60, 370, 71, 31));
        insertBtn = new QPushButton(SecondAvl);
        insertBtn->setObjectName(QStringLiteral("insertBtn"));
        insertBtn->setGeometry(QRect(130, 370, 71, 31));
        removeEdit = new QLineEdit(SecondAvl);
        removeEdit->setObjectName(QStringLiteral("removeEdit"));
        removeEdit->setGeometry(QRect(240, 370, 81, 31));
        pushButton_2 = new QPushButton(SecondAvl);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 370, 71, 31));
        ok = new QPushButton(SecondAvl);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(460, 370, 71, 31));

        retranslateUi(SecondAvl);

        QMetaObject::connectSlotsByName(SecondAvl);
    } // setupUi

    void retranslateUi(QWidget *SecondAvl)
    {
        SecondAvl->setWindowTitle(QApplication::translate("SecondAvl", "Form", Q_NULLPTR));
        insertBtn->setText(QApplication::translate("SecondAvl", "\346\217\222\345\205\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SecondAvl", "\345\210\240\351\231\244", Q_NULLPTR));
        ok->setText(QApplication::translate("SecondAvl", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondAvl: public Ui_SecondAvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDAVL_H
