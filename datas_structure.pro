#-------------------------------------------------
#
# Project created by QtCreator 2018-02-13T17:38:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = datas_structure
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    loginwindow.cpp \
    people_list.cpp \
    person_specific.cpp \
    playavl.cpp \
    secondavl.cpp \
    people_add.cpp \
    search_common.cpp

HEADERS  += mainwindow.h \
    loginwindow.h \
    people_list.h \
    person_specific.h \
    playavl.h \
    secondavl.h \
    people_add.h \
    search_common.h

FORMS    += mainwindow.ui \
    loginwindow.ui \
    people_list.ui \
    person_specific.ui \
    playavl.ui \
    secondavl.ui \
    people_add.ui \
    search_common.ui
