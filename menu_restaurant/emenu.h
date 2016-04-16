#ifndef EMENU_H
#define EMENU_H

#include "mainwindow.h"
#include "introwindow.h"

class eMenu
{
public:
    eMenu();
    void start();
private:
    // three mode enum : introduction, order, afterorder
    enum MODE { INTRO, ORDER, AFTERORDER } mode;
    MainWindow mw;
    IntroWindow intro;
};

#endif // EMENU_H
