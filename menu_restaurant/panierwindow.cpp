#include "panierwindow.h"
#include "ui_panierwindow.h"
#include <QString>
#include <QDebug>
#include <QMainWindow>
PanierWindow::PanierWindow(QWidget *parent,vector<plat*> _listPlat, int _numClient, int _somme, int _numTable) :
    QDialog(parent), panier(_listPlat,_numClient,_somme,_numTable),
    ui(new Ui::PanierWindow)
{


    ui->setupUi(this);
    numPlat=_listPlat.size();
    for(int i=0; i<_listPlat.size(); i++){
//        platIntro* tmp = new platIntro(_listPlat[i]);
        QLabel* tmp = new QLabel(QString::fromStdString(_listPlat[i]->getNom()));
        plats.push_back(tmp);
        ui->gridLayout->addWidget(tmp,i,0);
        QLabel* tmpPrix = new QLabel(QString::number(_listPlat[i]->getPrix()));
        prix.push_back(tmpPrix);
        ui->gridLayout->addWidget(tmpPrix,i,1);
        QComboBox* tmpClt = new QComboBox;
        tmpClt->addItem("---");
        clients.push_back(tmpClt);
        ui->gridLayout->addWidget(tmpClt,i,2);
        QPushButton* deleteBtn = new QPushButton("Delete");
        ui->gridLayout->addWidget(deleteBtn,i,3);
        btnGroup.addButton(deleteBtn,i);
        somme+=_listPlat[i]->getPrix();
    }
    connect(&btnGroup,SIGNAL(buttonClicked(int)),this,SLOT(deletePlat(int)));
    connect(ui->addBtn,SIGNAL(clicked(bool)),this,SLOT(addClient()));
    connect(ui->retourBtn,SIGNAL(clicked(bool)),this,SLOT(close()));
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");


}

PanierWindow::~PanierWindow()
{
    delete ui;
    delete cltInput;
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
    QComboBox* clt = new QComboBox;
    clt->addItems(clist);
    clients.push_back(clt);
    ui->gridLayout->addWidget(clients.back(),idx,2);
    QPushButton* deleteBtn = new QPushButton("Delete");
    ui->gridLayout->addWidget(deleteBtn,idx,3);
    btnGroup.addButton(deleteBtn,plats.size()-1);
    somme+=p->getPrix();
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");
    numPlat++;
    emit panierUpdated();
}

void PanierWindow::deletePlat(int idx){
    plats[idx]->close();
    clients[idx]->close();
    prix[idx]->close();
    btnGroup.button(idx)->close();
    somme-=listPlat[idx]->getPrix();
    ui->prixLabel->setText("Somme: "+QString::number(somme)+" EUR");
    numPlat--;
    emit panierUpdated();
}

void PanierWindow::addClient(){
    cltInput->show();
}

void PanierWindow::updateClient(bool update){
    if(update){
        clist.clear();
        clist.push_back("---");
        for(int i=0; i<4; i++){
            QString name = cltInput->getClient()->getClient(i);
            if(!name.isEmpty()){
                clist.push_back(name);
            }
        }

        for(int i=0; i<clients.size(); i++){
            clients[i]->clear();
            clients[i]->addItems(clist);
        }

    }
}

void PanierWindow::confirmOrder(){
    std::cout << "Order confirmed" << std::endl;
    emit orderComfirmed();
    this->close();
}
