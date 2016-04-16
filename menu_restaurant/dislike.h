#ifndef DISLIKE_H
#define DISLIKE_H

#include <QMainWindow>
#include <QLayout>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>

class Dislike : public QMainWindow
{
    Q_OBJECT
public:
    explicit Dislike(QWidget *parent = 0);

signals:

public slots:
    void closeWindow();
};

#endif // DISLIKE_H
