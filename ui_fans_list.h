/********************************************************************************
** Form generated from reading UI file 'fans_list.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANS_LIST_H
#define UI_FANS_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fans_list
{
public:

    void setupUi(QWidget *fans_list)
    {
        if (fans_list->objectName().isEmpty())
            fans_list->setObjectName(QStringLiteral("fans_list"));
        fans_list->resize(400, 300);

        retranslateUi(fans_list);

        QMetaObject::connectSlotsByName(fans_list);
    } // setupUi

    void retranslateUi(QWidget *fans_list)
    {
        fans_list->setWindowTitle(QApplication::translate("fans_list", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fans_list: public Ui_fans_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANS_LIST_H
