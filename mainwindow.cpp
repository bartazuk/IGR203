#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

   ui->setupUi(this);
  preference = new Like();// Ruimin-initialize like window
  ne_mange_pas = new Dislike();//Ruimin-initialize dislike window
  SetUpLayout();//Yuqi-set layout de chaque list a droit

}

void MainWindow::on_like_platdujour_clicked()
{

    preference->show();
}

void MainWindow::on_dislike_platdujour_clicked()
{

   ne_mange_pas ->show();
}



void MainWindow::on_like_entree_clicked()
{

    preference->show();
}


void MainWindow::on_dislike_entree_clicked()
{

    ne_mange_pas ->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_like_plat_clicked()
{

    preference->show();
}


void MainWindow::on_dislike_plat_clicked()
{

    ne_mange_pas ->show();
}


void MainWindow::on_like_dessert_clicked()
{

    preference->show();
}


void MainWindow::on_dislike_dessert_clicked()
{

    ne_mange_pas ->show();
}

void MainWindow::on_like_boisson_clicked()
{

    preference->show();
}



void MainWindow::on_dislike_boisson_clicked()
{

    ne_mange_pas ->show();
}

/*
 * Layout settings du liste a droit
 * Et les tests pour la classe plaiIntro - Yuqi
 */
void MainWindow::SetUpLayout()
{
    QWidget	*showPlatWidget= new QWidget();
    QVBoxLayout *showPlatLayout = new QVBoxLayout();

    QWidget	*showPlatWidget2= new QWidget();
    QVBoxLayout *showPlatLayout2 = new QVBoxLayout();

    QWidget	*showPlatWidget4= new QWidget();
    QVBoxLayout *showPlatLayout4= new QVBoxLayout();

    QWidget	*showPlatWidget3= new QWidget();
    QVBoxLayout *showPlatLayout3 = new QVBoxLayout();

    QWidget	*showPlatWidget5= new QWidget();
    QVBoxLayout *showPlatLayout5 = new QVBoxLayout();


    ui->scrollArea_15->setWidgetResizable(true);
    ui->scrollArea_15->setWidget(showPlatWidget);

    ui->scrollArea_14->setWidgetResizable(true);
    ui->scrollArea_14->setWidget(showPlatWidget2);

    ui->scrollArea_13->setWidgetResizable(true);
    ui->scrollArea_13->setWidget(showPlatWidget3);

    ui->scrollArea_12->setWidgetResizable(true);
    ui->scrollArea_12->setWidget(showPlatWidget4);

    ui->scrollArea_11->setWidgetResizable(true);
    ui->scrollArea_11->setWidget(showPlatWidget5);

    //ui->scrollArea_12->setWidget(showPlatWidget);
    //ui->scrollArea_13->setWidget(showPlatWidget);
    //ui->scrollArea_14->setWidget(showPlatWidget);
    //ui->scrollArea_15->setWidget(showPlatWidget);

    showPlatWidget->setLayout(showPlatLayout);
    showPlatWidget2->setLayout(showPlatLayout2);
    showPlatWidget3->setLayout(showPlatLayout3);
    showPlatWidget4->setLayout(showPlatLayout4);
    showPlatWidget5->setLayout(showPlatLayout5);

    vector<string> test2;
    plat *test = new plat("test",test2,1,2,3,"/Users/huyuqi/Downloads/f60d6056d304be859987e91a416e3a40.jpg");
    plat *test3 = new plat("test",test2,2,3,4,"/Users/huyuqi/Downloads/f60d6056d304be859987e91a416e3a40.jpg");
    platIntro *plattest = new platIntro();
    platIntro *plattest5 = new platIntro();
    platIntro *plattest6 = new platIntro();
    platIntro *plattest7 = new platIntro();
    platIntro *plattest8 = new platIntro();
    platIntro *plattest9 = new platIntro();
    platIntro *plattest10= new platIntro();
    plattest->SetUpLayout(test);
    plattest5->SetUpLayout(test);
    plattest6->SetUpLayout(test);
    plattest7->SetUpLayout(test);
    plattest8->SetUpLayout(test);
    plattest9->SetUpLayout(test);
    plattest10->SetUpLayout(test);
    showPlatLayout->addWidget(plattest);
    showPlatLayout2->addWidget(plattest5);
    showPlatLayout2->addWidget(plattest9);
    showPlatLayout2->addWidget(plattest10);
    showPlatLayout3->addWidget(plattest6);
    showPlatLayout4->addWidget(plattest7);
    showPlatLayout5->addWidget(plattest8);

    platIntro *plattest2 = new platIntro();
    plattest2->SetUpLayout(test);
    showPlatLayout->addWidget(plattest2);

    platIntro *plattest3 = new platIntro();
    plattest3->SetUpLayout(test3);
    showPlatLayout->addWidget(plattest3);
    platIntro *plattest4 = new platIntro();
    plattest4->SetUpLayout(test3);
    showPlatLayout->addWidget(plattest4);

}

