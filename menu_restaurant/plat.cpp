#include "plat.h"

plat::plat(string _nom, vector<string> _ingredient, int _avis, int _calorie, int _prix){
    nom = _nom;
    ingredient = _ingredient;
    avis = _avis;
    calorie = _calorie;
    prix = _prix;
}

plat::~plat(){
    delete(image);
}

string plat::getNom() const
{
    return nom;
}

void plat::setNom(const string &_nom)
{
    nom = _nom;
}
vector<string> plat::getIngredient() const
{
    return ingredient;
}

void plat::setIngredient(const vector<string> &_ingredient)
{
    ingredient = _ingredient;
}
int plat::getAvis() const
{
    return avis;
}

void plat::setAvis(int _avis)
{
    avis = _avis;
}
int plat::getCalorie() const
{
    return calorie;
}

void plat::setCalorie(int _calorie)
{
    calorie = _calorie;
}
int plat::getPrix() const
{
    return prix;
}

void plat::setPrix(int _prix)
{
    prix = _prix;
}
QPixmap * plat::getImage() const
{
    return image;
}

void plat::setImage(const QString path)
{
    image = new QPixmap(path);
}


