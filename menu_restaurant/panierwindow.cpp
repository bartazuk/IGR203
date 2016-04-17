#include "panierwindow.h"
#include "ui_panierwindow.h"
#include <QString>
PanierWindow::PanierWindow(QWidget *parent,vector<plat*> _listPlat, int _numClient, int _somme, int _numTable) :
    QDialog(parent), panier(_listPlat,_numClient,_somme,_numTable),
    ui(new Ui::PanierWindow)
{

    ctmp.addItem("---");
//    for(int i=0; i<4; i++){
//        if(!cltInput->getClient(i).isEmpty()){
//            ctmp.addItem(cltInput->getClient(i));
//        }
//    }
    std::cout << "HI" << std::endl;
    ui->setupUi(this);
    std::cout << "HI" << std::endl;
    numPlat=_listPlat.size();
    for(int i=0; i<_listPlat.size(); i++){
//        platIntro* tmp = new platIntro(_listPlat[i]);
        QLabel* tmp = new QLabel(QString::fromStdString(_listPlat[i]->getNom()));
        plats.push_back(tmp);
        ui->gridLayout->addWidget(tmp,i,0);
        QLabel* tmpPrix = new QLabel(QString::number(_listPlat[i]->getPrix()));
        prix.push_back(tmpPrix);
        ui->gridLayout->addWidget(tmpPrix,i,1);
        QComboBox* tmpClt = new QComboBox(&ctmp);
        clients.push_back(tmpClt);
        ui->gridLayout->addWidget(tmpClt,i,2);
        QPushButton* deleteBtn = new QPushButton("Delete");
        ui->gridLayout->addWidget(deleteBtn,i,3);
        btnGroup.addButton(deleteBtn,i);
        somme+=_listPlat[i]->getPrix();
    }
    std::cout << "HI" << std::endl;
    connect(&btnGroup,SIGNAL(buttonClicked(int)),this,SLOT(deletePlat(int)));
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");
    std::cout << "HI" << std::endl;
}



PanierWindow::~PanierWindow()
{
    delete ui;
}

void PanierWindow::addPlat(plat *p){
    int idx = ui->gridLayout->rowCount();
//    platIntro* tmp = new platIntro(p);
    listPlat.push_back(p);
    QLabel* tmp = new QLabel(QString::fromStdString(p->getNom()));
    plats.push_back(tmp);
    ui->gridLayout->addWidget(tmp,idx,0);
    QLabel* tmpPrix = new QLabel(QString::number(p->getPrix()));
    prix.push_back(tmpPrix);
    ui->gridLayout->addWidget(tmpPrix,idx,1);
    QComboBox* tmpClt = new QComboBox(&ctmp);
    clients.push_back(tmpClt);
    ui->gridLayout->addWidget(tmpClt,idx,2);
    QPushButton* deleteBtn = new QPushButton("Delete");
    ui->gridLayout->addWidget(deleteBtn,idx,3);
    btnGroup.addButton(deleteBtn,plats.size()-1);
    somme+=p->getPrix();
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");
    numPlat++;
    emit panierUpdated();
}

void PanierWindow::deletePlat(int idx){
    ui->gridLayout->removeWidget(plats[idx]);
    ui->gridLayout->removeWidget(clients[idx]);
    ui->gridLayout->removeWidget(prix[idx]);
    ui->gridLayout->removeWidget(btnGroup.button(idx));
    somme-=listPlat[idx]->getPrix();
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");
    numPlat--;
    emit panierUpdated();
}
