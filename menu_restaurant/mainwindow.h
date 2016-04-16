#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "plat.h"
#include "platintro.h"
#include "like.h"
#include "dislike.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SetUpLayout();


private slots:
        void on_like_platdujour_clicked();

        void on_dislike_platdujour_clicked();

        void on_like_entree_clicked();

        void on_dislike_entree_clicked();

        void on_like_plat_clicked();

        void on_dislike_plat_clicked();

        void on_like_dessert_clicked();

        void on_dislike_dessert_clicked();

        void on_like_boisson_clicked();

        void on_dislike_boisson_clicked();

        void afficheDetail(plat*);
private:
    Ui::MainWindow *ui;
    Like *preference;
    Dislike *ne_mange_pas;

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

    void updateDisplayList();
};

#endif // MAINWINDOW_H
