#include "boisson.h"

boisson::boisson(string _nom, int _avis, int _prix, const QString _imagePath):
    plat(_nom, {}, _avis, 0,_prix, _imagePath){}

float boisson::getAlcool_degre() const
{
    return alcool_degre;
}

void boisson::setAlcool_degre(float value)
{
    if (value >= 0)
        alcool_degre = value;
    else
        ERROR_BAD_VALUE(alcool_degre, value);
}

int boisson::getTaille() const
{
    return taille;
}

void boisson::setTaille(int value)
{
    if (taille > 0)
        taille = value;
    else
        ERROR_BAD_VALUE(taille, value);
}

bool boisson::isAlcool()
{
    return (alcool_degre > 0);
}


// Surcharge des fonctions de traitement des attributs non utilisés pour renvoyer une erreur

int boisson::getCalorie() const
{
    ERROR_NO_ATTRIB(calorie, boisson);
    return -1;
}

void boisson::setCalorie(int value)
{
    UNUSED(value);
    ERROR_NO_ATTRIB(calorie, boisson);
}

vector<string> boisson::getIngredient() const
{
    ERROR_NO_ATTRIB(ingredient, boisson);
    return {};
}

void boisson::setIngredient(const vector<string> &value)
{
    UNUSED(value);
    ERROR_NO_ATTRIB(ingredient, boisson);
}


