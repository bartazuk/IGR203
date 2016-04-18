#ifndef EMENU_H
#define EMENU_H

#include "mainwindow.h"
#include "introwindow.h"

class eMenu : public QObject
{
    Q_OBJECT
public:
    eMenu();
    void start();
private slots:
    void introFinished();
private:
    // three mode enum : introduction, order, afterorder
    enum MODE { INTRO, ORDER, AFTERORDER } mode;
    MainWindow mw;
    IntroWindow intro;
};

#endif // EMENU_H
