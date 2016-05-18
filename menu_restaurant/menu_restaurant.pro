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
    menu.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/dislike.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/like.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/mainwindow.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/clientinput.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/emenu.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/introwindow.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/main.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/panier.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/panierwindow.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/menu.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/plat.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/platintro.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/boisson.cpp \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/food_list.cpp

HEADERS  += mainwindow.h \
    plat.h \
    menu.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/panier.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/dislike.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/like.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/clientinput.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/emenu.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/introwindow.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/mainwindow.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/panierwindow.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/menu.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/plat.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/platintro.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/boisson.h \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/food_list.h

FORMS    += mainwindow.ui \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/clientinput.ui \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/mainwindow.ui \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/panierwindow.ui

DISTFILES += \
    menu.xml \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/menu.xml \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/index.jpeg

RESOURCES += \
    xmlsources.qrc \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/imageresource.qrc \
    ../../Desktop/telecom/github/IGR203/menu_restaurant/xmlsources.qrc
