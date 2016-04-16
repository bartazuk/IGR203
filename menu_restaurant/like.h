#ifndef LIKE_H
#define LIKE_H

#include <QMainWindow>
#include <QLayout>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>

class Like : public QMainWindow
{
    Q_OBJECT
public:
    explicit Like(QWidget *parent = 0);

signals:

public slots:
    void closeWindow();
};

#endif // LIKE_H
