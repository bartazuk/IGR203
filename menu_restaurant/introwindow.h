#ifndef INTROWINDOW_H
#define INTROWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class IntroWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit IntroWindow(QWidget *parent = 0);

signals:
    void FINISHED();

public slots:
    void onNextClicked();
    void onSkipClicked();
private:
    QString introQuestion[3];
    QLabel introText;
    int qIdx;// index of the introduction question
    QLabel introLabel; // to display the corresponding question
    QPushButton nextBtn;
    QPushButton skipBtn;
    QPushButton addClient;
};

#endif // INTROWINDOW_H
