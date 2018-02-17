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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people_list
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *people_list)
    {
        if (people_list->objectName().isEmpty())
            people_list->setObjectName(QStringLiteral("people_list"));
        people_list->resize(507, 403);
        listWidget = new QListWidget(people_list);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 511, 401));

        retranslateUi(people_list);

        QMetaObject::connectSlotsByName(people_list);
    } // setupUi

    void retranslateUi(QWidget *people_list)
    {
        people_list->setWindowTitle(QApplication::translate("people_list", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class people_list: public Ui_people_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_LIST_H
