#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <vector>
#include "plat.h"
#include "platintro.h"
#include "like.h"
#include "dislike.h"
#include "panierwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    void SetUpLayout();
    void updateLike(QVBoxLayout* layout_,vector<platIntro*> &list_);
    void updatedisLike(QVBoxLayout* layout_,vector<platIntro*> &list_);

    vector<platIntro*> entreeList;
    vector<platIntro*> platList;
    vector<platIntro*> dessertList;
    vector<platIntro*> boissonList;
    vector<platIntro*> platdujourList;

    QVBoxLayout entreeLayout;
    QVBoxLayout platLayout;
    QVBoxLayout dessertLayout;
    QVBoxLayout boissonLayout;
    QVBoxLayout platdujourLayout;

    void setClient(ClientInput* _client){ panier->setClient(_client);}
private slots:

     void afficheDetail(plat*);
     void on_boisson_addlike_clicked();

     void on_boisson_adddislike_clicked();

     void on_dessert_addlike_clicked();

     void on_dessert_adddislike_clicked();

     void on_plat_addlike_clicked();

     void on_plat_adddislike_clicked();

     void on_entree_addlike_clicked();

     void on_entree_adddislike_clicked();

     void on_platdujour_addlike_clicked();

     void on_platdujour_adddislike_clicked();

     void like_label();
     void dislike_label();

     void openPanier();

     void updatePanier();

private:
    Ui::MainWindow *ui;
    Like *preference;
    Dislike *ne_mange_pas;
    PanierWindow* panier;


    void updateDisplayList();
};

#endif // MAINWINDOW_H
