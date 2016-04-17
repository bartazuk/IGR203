#ifndef PANIERWINDOW_H
#define PANIERWINDOW_H

#include <QDialog>
#include "panier.h"
#include "platintro.h"
#include <QComboBox>
#include <vector>
#include <QButtonGroup>
#include "clientinput.h"
namespace Ui {
class PanierWindow;
}

class PanierWindow : public QDialog, public panier
{
    Q_OBJECT

public:
//    explicit PanierWindow(QWidget *parent = 0);
    PanierWindow(QWidget *parent=0,vector<plat*> _listPlat={}, int _numClient=0, int _somme=0, int _numTable=0);
    ~PanierWindow();
    void setClient(ClientInput* _cltInput) {cltInput = _cltInput;}
    int getNumPlat() const {return numPlat;}
signals:
    void panierUpdated();

public slots:
    void addPlat(plat*);
    void deletePlat(int idx);
private:
    Ui::PanierWindow *ui;
//    std::vector<platIntro*> plats;
    std::vector<QLabel*> plats;
    std::vector<QLabel*> prix;
    std::vector<QComboBox*> clients;
    QButtonGroup btnGroup;
    ClientInput* cltInput;
    QComboBox ctmp;
    int numPlat;
};

#endif // PANIERWINDOW_H
