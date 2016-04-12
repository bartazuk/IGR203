#ifndef PLATINTRO_H
#define PLATINTRO_H

#include "plat.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QImage>
#include <QString>
#include <QPushButton>
#include <QPainter>

/*
 * classe pour le liste a droit - yuqi
 */
class platIntro : public QWidget
{
    Q_OBJECT
public:
    explicit platIntro(QWidget *parent = 0);
    QHBoxLayout *layoutGlobal;
    QHBoxLayout *layoutImage;
    QVBoxLayout *layoutDescrip;
    QHBoxLayout *layoutPlatName;
    QHBoxLayout *layoutPlatEtoile;
    QHBoxLayout *layoutShowDetail;

    QLabel *showImage;
    QPushButton *showDetail;
    QPushButton *add;

    QLabel *showName;
    QLabel *showPrice;
    QLabel *showAvis;

    void SetUpLayout(plat *plat);
    virtual void paintEvent(QPaintEvent *);

private slots:
    void on_Add_clicked();//slot pour le button add
    void on_Detail_clicked();//slot pour le button detail

signals:
    void addToPanier();
    void afficherDetails();//signal pour ajouter les templates
};

#endif // PLATINTRO_H
