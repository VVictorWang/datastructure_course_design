/********************************************************************************
** Form generated from reading UI file 'search_common.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_COMMON_H
#define UI_SEARCH_COMMON_H

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

class Ui_Search_Common
{
public:
    QLabel *label;
    QLineEdit *firstIdEdit;
    QLabel *label_2;
    QLineEdit *secondIdEdit;
    QLabel *label_6;
    QLabel *fans;
    QLabel *friends;
    QLabel *attentions;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *searchBtn;

    void setupUi(QWidget *Search_Common)
    {
        if (Search_Common->objectName().isEmpty())
            Search_Common->setObjectName(QStringLiteral("Search_Common"));
        Search_Common->resize(578, 351);
        label = new QLabel(Search_Common);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 81, 21));
        firstIdEdit = new QLineEdit(Search_Common);
        firstIdEdit->setObjectName(QStringLiteral("firstIdEdit"));
        firstIdEdit->setGeometry(QRect(120, 20, 81, 21));
        label_2 = new QLabel(Search_Common);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 20, 81, 21));
        secondIdEdit = new QLineEdit(Search_Common);
        secondIdEdit->setObjectName(QStringLiteral("secondIdEdit"));
        secondIdEdit->setGeometry(QRect(350, 20, 71, 21));
        label_6 = new QLabel(Search_Common);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 190, 51, 31));
        fans = new QLabel(Search_Common);
        fans->setObjectName(QStringLiteral("fans"));
        fans->setGeometry(QRect(90, 130, 391, 61));
        friends = new QLabel(Search_Common);
        friends->setObjectName(QStringLiteral("friends"));
        friends->setGeometry(QRect(100, 70, 361, 61));
        attentions = new QLabel(Search_Common);
        attentions->setObjectName(QStringLiteral("attentions"));
        attentions->setGeometry(QRect(90, 200, 381, 61));
        label_4 = new QLabel(Search_Common);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 60, 51, 31));
        label_5 = new QLabel(Search_Common);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 130, 51, 21));
        searchBtn = new QPushButton(Search_Common);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(460, 20, 61, 21));

        retranslateUi(Search_Common);

        QMetaObject::connectSlotsByName(Search_Common);
    } // setupUi

    void retranslateUi(QWidget *Search_Common)
    {
        Search_Common->setWindowTitle(QApplication::translate("Search_Common", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Search_Common", "\347\254\254\344\270\200\344\275\215\347\224\250\346\210\267id", Q_NULLPTR));
        label_2->setText(QApplication::translate("Search_Common", "\347\254\254\344\272\214\344\275\215\347\224\250\346\210\267id", Q_NULLPTR));
        label_6->setText(QApplication::translate("Search_Common", "\345\205\261\345\220\214\345\205\263\346\263\250", Q_NULLPTR));
        fans->setText(QString());
        friends->setText(QString());
        attentions->setText(QString());
        label_4->setText(QApplication::translate("Search_Common", "\345\205\261\345\220\214\345\245\275\345\217\213", Q_NULLPTR));
        label_5->setText(QApplication::translate("Search_Common", "\345\205\261\345\220\214\347\262\211\344\270\235", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("Search_Common", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search_Common: public Ui_Search_Common {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_COMMON_H
