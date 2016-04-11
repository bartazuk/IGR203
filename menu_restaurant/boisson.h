#ifndef BOISSON_H
#define BOISSON_H

#include "plat.h"

using namespace std;

class boisson : public plat
{
public:
    boisson(string _nom="", int _avis=0, int _prix=0, const QString _imagePath="");

    float getAlcool_degre() const;
    void setAlcool_degre(float value);

    int getTaille() const;
    void setTaille(int value);


    int getCalorie() const;
    void setCalorie(int value);

    vector<string> getIngredient() const;
    void setIngredient(const vector<string> &value);

    bool isAlcool();

private:
    float alcool_degre;
    int taille; // 25cl, 50cl etc...
};

#endif // BOISSON_H
