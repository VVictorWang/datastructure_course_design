/********************************************************************************
** Form generated from reading UI file 'people_add.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_ADD_H
#define UI_PEOPLE_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people_add
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *idEdit;
    QLineEdit *nameEdit;
    QPushButton *okBtn;

    void setupUi(QWidget *people_add)
    {
        if (people_add->objectName().isEmpty())
            people_add->setObjectName(QStringLiteral("people_add"));
        people_add->resize(400, 300);
        label = new QLabel(people_add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 51, 31));
        label_2 = new QLabel(people_add);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 41, 21));
        idEdit = new QLineEdit(people_add);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(140, 30, 113, 23));
        nameEdit = new QLineEdit(people_add);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(140, 80, 113, 23));
        okBtn = new QPushButton(people_add);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(300, 210, 71, 31));

        retranslateUi(people_add);

        QMetaObject::connectSlotsByName(people_add);
    } // setupUi

    void retranslateUi(QWidget *people_add)
    {
        people_add->setWindowTitle(QApplication::translate("people_add", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("people_add", "\347\224\250\346\210\267id", Q_NULLPTR));
        label_2->setText(QApplication::translate("people_add", "\345\247\223\345\220\215", Q_NULLPTR));
        okBtn->setText(QApplication::translate("people_add", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class people_add: public Ui_people_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_ADD_H
