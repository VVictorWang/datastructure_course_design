/********************************************************************************
** Form generated from reading UI file 'person_specific.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_SPECIFIC_H
#define UI_PERSON_SPECIFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person_Specific
{
public:
    QLabel *label;
    QLabel *nameLabel;
    QLabel *label_2;
    QLabel *fanCount;
    QLabel *label_3;
    QLabel *friendCount;
    QLabel *label_4;
    QLabel *friends;

    void setupUi(QWidget *Person_Specific)
    {
        if (Person_Specific->objectName().isEmpty())
            Person_Specific->setObjectName(QStringLiteral("Person_Specific"));
        Person_Specific->resize(581, 473);
        label = new QLabel(Person_Specific);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 31, 21));
        nameLabel = new QLabel(Person_Specific);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(120, 30, 61, 21));
        label_2 = new QLabel(Person_Specific);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 60, 41, 21));
        fanCount = new QLabel(Person_Specific);
        fanCount->setObjectName(QStringLiteral("fanCount"));
        fanCount->setGeometry(QRect(130, 60, 51, 21));
        label_3 = new QLabel(Person_Specific);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 90, 41, 21));
        friendCount = new QLabel(Person_Specific);
        friendCount->setObjectName(QStringLiteral("friendCount"));
        friendCount->setGeometry(QRect(130, 90, 51, 21));
        label_4 = new QLabel(Person_Specific);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 140, 51, 31));
        friends = new QLabel(Person_Specific);
        friends->setObjectName(QStringLiteral("friends"));
        friends->setGeometry(QRect(170, 150, 341, 71));

        retranslateUi(Person_Specific);

        QMetaObject::connectSlotsByName(Person_Specific);
    } // setupUi

    void retranslateUi(QWidget *Person_Specific)
    {
        Person_Specific->setWindowTitle(QApplication::translate("Person_Specific", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Person_Specific", "\345\247\223\345\220\215", Q_NULLPTR));
        nameLabel->setText(QString());
        label_2->setText(QApplication::translate("Person_Specific", "\347\262\211\344\270\235\346\225\260", Q_NULLPTR));
        fanCount->setText(QString());
        label_3->setText(QApplication::translate("Person_Specific", "\346\234\213\345\217\213\346\225\260", Q_NULLPTR));
        friendCount->setText(QString());
        label_4->setText(QApplication::translate("Person_Specific", "\345\205\261\345\220\214\345\245\275\345\217\213", Q_NULLPTR));
        friends->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Person_Specific: public Ui_Person_Specific {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_SPECIFIC_H