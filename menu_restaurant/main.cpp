#include "mainwindow.h"
#include "plat.h"
#include "menu.h"
#include <string>
#include <vector>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
