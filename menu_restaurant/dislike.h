#ifndef DISLIKE_H
#define DISLIKE_H

#include <QMainWindow>
#include <QLayout>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <iostream>

using namespace std;
class Dislike : public QMainWindow
{
    Q_OBJECT
public:
    explicit Dislike(QWidget *parent = 0);
    int label;
    vector<string> ingrediantName;
    QCheckBox *ing1;
    QCheckBox *ing2;
    QCheckBox *ing3;
    QCheckBox *ing4;
    QCheckBox *ing5;
    QCheckBox *ing6;
    QCheckBox *ing7;

signals:
     void confirm();

public slots:

    void confirmSLOT();
};

#endif // DISLIKE_H
