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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayAVL
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *hLayout;

    void setupUi(QWidget *PlayAVL)
    {
        if (PlayAVL->objectName().isEmpty())
            PlayAVL->setObjectName(QStringLiteral("PlayAVL"));
        PlayAVL->resize(542, 512);
        horizontalLayoutWidget = new QWidget(PlayAVL);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 491, 471));
        hLayout = new QHBoxLayout(horizontalLayoutWidget);
        hLayout->setObjectName(QStringLiteral("hLayout"));
        hLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(PlayAVL);

        QMetaObject::connectSlotsByName(PlayAVL);
    } // setupUi

    void retranslateUi(QWidget *PlayAVL)
    {
        PlayAVL->setWindowTitle(QApplication::translate("PlayAVL", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayAVL: public Ui_PlayAVL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYAVL_H
