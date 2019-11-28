#-------------------------------------------------
#
# Project created by QtCreator 2019-11-15T10:36:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Trottipret
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    gestionnaireannonce.cpp \
    compte.cpp \
    annonce.cpp \
    date.cpp \
    gestionnairecomptes.cpp \
    mainwindow.cpp

HEADERS += \
    gestionnaireannonce.h \
    compte.h \
    annonce.h \
    date.h \
    gestionnairecomptes.h \
    mainwindow.h

FORMS += \
    mainwindow.ui
