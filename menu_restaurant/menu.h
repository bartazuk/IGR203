#ifndef MENU_H
#define MENU_H

#include "plat.h"
#include <vector>
#include <map>
#include <string>
#include <memory>
#include <iostream>
#include <QXmlStreamReader>
#include <QWidget>
using std::map;
using std::vector;

class Menu
{
public:
    //Singleton mode
    static Menu& Instance(){
        static Menu instance;
        return instance;
    }
    void print(){
        std::cout << "Hello" << std::endl;
    }

private:
    Menu();
//    ~Menu();
    Menu(const Menu&);
    Menu& operator=(const Menu&);

    void createPlat(QXmlStreamReader&, plat *, string type);
    void createPlatDuJour(QXmlStreamReader&);

    map<string,plat *> entrees;
    map<string,plat *> plats;
    map<string,plat *> desserts;
    map<string,plat *> vins;
    map<string,plat *> platDuJour;
    int prixPlatDuJour;
};

#endif // MENU_H
