#ifndef PLAT_H
#define PLAT_H
#include <string>
#include <vector>
#include <QPixmap>
#include <QString>

using namespace std;

class plat
{
public:
    plat(string _nom="", vector<string> _ingredient={}, int _avis=0, int _calorie=0, int _prix=0, const QString imagePath="");
     ~plat();

    string getNom() const;
    void setNom(const string &value);

    vector<string> getIngredient() const;
    void setIngredient(const vector<string> &value);

    int getAvis() const;
    void setAvis(int value);

    int getCalorie() const;
    void setCalorie(int value);

    int getPrix() const;
    void setPrix(int value);

    QPixmap * getImage() const;
    void setImage(const QString value);

private:
    string nom;
    vector<string> ingredient;
    int avis;
    int calorie;
    int prix;
    QPixmap * image;
};

#endif // PLAT_H
