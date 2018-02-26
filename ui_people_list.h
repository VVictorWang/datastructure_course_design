/********************************************************************************
** Form generated from reading UI file 'people_list.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_LIST_H
#define UI_PEOPLE_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people_list
{
public:
    QListWidget *listWidget;
    QPushButton *addBtn;
    QPushButton *deleBtn;

    void setupUi(QWidget *people_list)
    {
        if (people_list->objectName().isEmpty())
            people_list->setObjectName(QStringLiteral("people_list"));
        people_list->resize(584, 450);
        listWidget = new QListWidget(people_list);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 0, 561, 411));
        addBtn = new QPushButton(people_list);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(390, 380, 61, 21));
        deleBtn = new QPushButton(people_list);
        deleBtn->setObjectName(QStringLiteral("deleBtn"));
        deleBtn->setGeometry(QRect(470, 380, 61, 21));

        retranslateUi(people_list);

        QMetaObject::connectSlotsByName(people_list);
    } // setupUi

    void retranslateUi(QWidget *people_list)
    {
        people_list->setWindowTitle(QApplication::translate("people_list", "Form", Q_NULLPTR));
        addBtn->setText(QApplication::translate("people_list", "\346\267\273\345\212\240", Q_NULLPTR));
        deleBtn->setText(QApplication::translate("people_list", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class people_list: public Ui_people_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_LIST_H
