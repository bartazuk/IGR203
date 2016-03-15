#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T09:11:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = menu_restaurant
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    plat.cpp \
    menu.cpp

HEADERS  += mainwindow.h \
    plat.h \
    menu.h

FORMS    += mainwindow.ui

DISTFILES += \
    menu.xml

RESOURCES += \
    xmlsources.qrc
