#include "mainwindow.h"
#include "plat.h"
#include "boisson.h"
#include "menu.h"
#include "emenu.h"
#include <string>
#include <vector>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Menu::Instance().print();
//    eMenu app;
//    app.start();
    return a.exec();
}
