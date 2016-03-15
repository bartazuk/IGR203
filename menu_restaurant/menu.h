#ifndef MENU_H
#define MENU_H

#include "plat.h"
#include <vector>
#include <map>
#include <string>
#include <memory>
#include <iostream>
#include <QXmlStreamReader>
using std::map;
using std::vector;

typedef std::shared_ptr<plat> platPtr;

class Menu
{
public:
    //Singleton mode
    static Menu& Instance(){
        static Menu instance;
        return instance;
    }

    void print(){
        for(auto it:plats){
            std::cout << "Name: "<< it.first << std::endl;
            std::cout << "Avis: "<<it.second->getAvis() << std::endl;
        }
        std::cout << "crash?" <<std::endl;
    }

private:
    Menu();
//    ~Menu();
    Menu(const Menu&);
    Menu& operator=(const Menu&);

    void createPlat(QXmlStreamReader&, platPtr, string type);
    void createPlatDuJour(QXmlStreamReader&);

    map<string,platPtr> entrees;
    map<string,platPtr> plats;
    map<string,platPtr> desserts;
    map<string,platPtr> vins;
    map<string,platPtr> platDuJour;
    int prixPlatDuJour;
};

#endif // MENU_H
