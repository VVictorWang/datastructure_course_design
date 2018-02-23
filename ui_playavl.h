/********************************************************************************
** Form generated from reading UI file 'playavl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYAVL_H
#define UI_PLAYAVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayAVL
{
public:
    QPushButton *insertBtn;
    QPushButton *removeBtn;
    QLineEdit *addEdit;
    QLineEdit *removeEdit;
    QPushButton *interBtn;
    QPushButton *unionBtn;
    QPushButton *differBtn;
    QPushButton *resetBtn;
    QPushButton *isSubBtn;

    void setupUi(QWidget *PlayAVL)
    {
        if (PlayAVL->objectName().isEmpty())
            PlayAVL->setObjectName(QStringLiteral("PlayAVL"));
        PlayAVL->resize(898, 569);
        insertBtn = new QPushButton(PlayAVL);
        insertBtn->setObjectName(QStringLiteral("insertBtn"));
        insertBtn->setGeometry(QRect(130, 520, 71, 31));
        removeBtn = new QPushButton(PlayAVL);
        removeBtn->setObjectName(QStringLiteral("removeBtn"));
        removeBtn->setGeometry(QRect(330, 520, 71, 31));
        addEdit = new QLineEdit(PlayAVL);
        addEdit->setObjectName(QStringLiteral("addEdit"));
        addEdit->setGeometry(QRect(50, 520, 81, 31));
        removeEdit = new QLineEdit(PlayAVL);
        removeEdit->setObjectName(QStringLiteral("removeEdit"));
        removeEdit->setGeometry(QRect(250, 520, 81, 31));
        interBtn = new QPushButton(PlayAVL);
        interBtn->setObjectName(QStringLiteral("interBtn"));
        interBtn->setGeometry(QRect(420, 520, 61, 31));
        unionBtn = new QPushButton(PlayAVL);
        unionBtn->setObjectName(QStringLiteral("unionBtn"));
        unionBtn->setGeometry(QRect(490, 520, 51, 31));
        differBtn = new QPushButton(PlayAVL);
        differBtn->setObjectName(QStringLiteral("differBtn"));
        differBtn->setGeometry(QRect(550, 520, 51, 31));
        resetBtn = new QPushButton(PlayAVL);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));
        resetBtn->setGeometry(QRect(750, 520, 61, 31));
        isSubBtn = new QPushButton(PlayAVL);
        isSubBtn->setObjectName(QStringLiteral("isSubBtn"));
        isSubBtn->setGeometry(QRect(610, 520, 81, 31));

        retranslateUi(PlayAVL);

        QMetaObject::connectSlotsByName(PlayAVL);
    } // setupUi

    void retranslateUi(QWidget *PlayAVL)
    {
        PlayAVL->setWindowTitle(QApplication::translate("PlayAVL", "Form", Q_NULLPTR));
        insertBtn->setText(QApplication::translate("PlayAVL", "\346\217\222\345\205\245", Q_NULLPTR));
        removeBtn->setText(QApplication::translate("PlayAVL", "\345\210\240\351\231\244", Q_NULLPTR));
        interBtn->setText(QApplication::translate("PlayAVL", "\344\272\244", Q_NULLPTR));
        unionBtn->setText(QApplication::translate("PlayAVL", "\345\271\266", Q_NULLPTR));
        differBtn->setText(QApplication::translate("PlayAVL", "\345\267\256", Q_NULLPTR));
        resetBtn->setText(QApplication::translate("PlayAVL", "\350\277\230\345\216\237", Q_NULLPTR));
        isSubBtn->setText(QApplication::translate("PlayAVL", "\346\230\257\345\220\246\344\270\272\345\255\220\351\233\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayAVL: public Ui_PlayAVL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYAVL_H
