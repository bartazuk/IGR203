#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <numeric>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    preference = new Like();// Ruimin-initialize like window
    ne_mange_pas = new Dislike();//Ruimin-initialize dislike window
 std::cout << "hi" << std::endl;
    ui->scrollAreaWidget_list_entree->setLayout(&entreeLayout);
    ui->scrollAreaWidget_list_plat->setLayout(&platLayout);
    ui->scrollAreaWidget_list_boisson->setLayout(&boissonLayout);
    ui->scrollAreaWidget_list_dessert->setLayout(&dessertLayout);
    ui->scrollAreaWidget_list_platdujour->setLayout(&platdujourLayout);

        std::cout << "hi" << std::endl;
    std::cout <<Menu::Instance().entrees.begin()->first << std::endl;
//    for(map<string,plat*>::iterator it=Menu::Instance().platDuJour.begin(); it!=Menu::Instance().platDuJour.end();it++){
//        std::cout << it->second->getNom() << std::endl;
//        platIntro* intro = new platIntro(it->second);
//        platdujourList.push_back(intro);
//        platdujourLayout.addWidget(intro);
//    }

    for(map<string,plat*>::iterator it=Menu::Instance().entrees.begin(); it!=Menu::Instance().entrees.end();it++){
        if(!it->second) continue;
        platIntro* intro = new platIntro(it->second);
        entreeList.push_back(intro);
        entreeLayout.addWidget(intro);
        connect(intro,SIGNAL(afficherDetails(plat*)),this, SLOT(afficheDetail(plat*)));
    }
    for(map<string,plat*>::iterator it=Menu::Instance().plats.begin(); it!=Menu::Instance().plats.end();it++){
        if(!it->second) continue;
        platIntro* intro = new platIntro(it->second);
        platList.push_back(intro);
        platLayout.addWidget(intro);
        connect(intro,SIGNAL(afficherDetails(plat*)),this, SLOT(afficheDetail(plat*)));
    }
    for(map<string,plat*>::iterator it=Menu::Instance().desserts.begin(); it!=Menu::Instance().desserts.end();it++){
        if(!it->second) continue;
        platIntro* intro = new platIntro(it->second);
        dessertList.push_back(intro);
        dessertLayout.addWidget(intro);
        connect(intro,SIGNAL(afficherDetails(plat*)),this, SLOT(afficheDetail(plat*)));
    }
    for(map<string,plat*>::iterator it=Menu::Instance().boissons.begin(); it!=Menu::Instance().boissons.end();it++){
        if(!it->second) continue;
        platIntro* intro = new platIntro(it->second);
        boissonList.push_back(intro);
        boissonLayout.addWidget(intro);
        connect(intro,SIGNAL(afficherDetails(plat*)),this, SLOT(afficheDetail(plat*)));
    }
    std::cout << "hi" << std::endl;

 //update preference
   connect(preference, SIGNAL(confirm()),this,SLOT(like_label()));
    connect(ne_mange_pas, SIGNAL(confirm()),this,SLOT(dislike_label()));

}


MainWindow::~MainWindow()
{
    delete ui;
}





//void MainWindow::on_like_boisson_clicked()
//{

//    preference->show();
//}



//void MainWindow::on_dislike_boisson_clicked()
//{

//    ne_mange_pas ->show();
//}

/*
 * Layout settings du liste a droit
 * Et les tests pour la classe plaiIntro - Yuqi
 */
//void MainWindow::SetUpLayout()
//{
//    QWidget	*showPlatWidget= new QWidget();
//    QVBoxLayout *showPlatLayout = new QVBoxLayout();

//    QWidget	*showPlatWidget2= new QWidget();
//    QVBoxLayout *showPlatLayout2 = new QVBoxLayout();

//    QWidget	*showPlatWidget4= new QWidget();
//    QVBoxLayout *showPlatLayout4= new QVBoxLayout();

//    QWidget	*showPlatWidget3= new QWidget();
//    QVBoxLayout *showPlatLayout3 = new QVBoxLayout();

//    QWidget	*showPlatWidget5= new QWidget();
//    QVBoxLayout *showPlatLayout5 = new QVBoxLayout();


//    ui->scrollArea_15->setWidgetResizable(true);
//    ui->scrollArea_15->setWidget(showPlatWidget);

//    ui->scrollArea_14->setWidgetResizable(true);
//    ui->scrollArea_14->setWidget(showPlatWidget2);

//    ui->scrollArea_13->setWidgetResizable(true);
//    ui->scrollArea_13->setWidget(showPlatWidget3);

//    ui->scrollArea_12->setWidgetResizable(true);
//    ui->scrollArea_12->setWidget(showPlatWidget4);

//    ui->scrollArea_11->setWidgetResizable(true);
//    ui->scrollArea_11->setWidget(showPlatWidget5);

//    //ui->scrollArea_12->setWidget(showPlatWidget);
//    //ui->scrollArea_13->setWidget(showPlatWidget);
//    //ui->scrollArea_14->setWidget(showPlatWidget);
//    //ui->scrollArea_15->setWidget(showPlatWidget);

//    showPlatWidget->setLayout(showPlatLayout);
//    showPlatWidget2->setLayout(showPlatLayout2);
//    showPlatWidget3->setLayout(showPlatLayout3);
//    showPlatWidget4->setLayout(showPlatLayout4);
//    showPlatWidget5->setLayout(showPlatLayout5);

//    vector<string> test2;
//    test2.push_back("hahaha");
//    test2.push_back("\n_1ingredient");
//    test2.push_back("\n_2ingredient");
//    plat *test = new plat("test",test2,1,2,1,":/myImages/image/testpic2.png");
//    plat *test3 = new plat("test",test2,3,3,3,":/myImages/image/testpic3.png");
// //   plat *test4 = new plat("test",test2,4,3,4,":/myImages/image/testpic3.png");
//    plat *test5 = new plat("test5",test2,5,3,5,":/myImages/image/testpic3.png");
//    plat *test6 = new plat("test6",test2,6,3,6,":/myImages/image/testpic3.png");
//    plat *test7 = new plat("test7",test2,7,3,7,":/myImages/image/testpic3.png");
//    plat *test8 = new plat("test8",test2,8,3,8,":/myImages/image/testpic3.png");
//    plat *test9 = new plat("test9",test2,9,3,9,":/myImages/image/testpic3.png");
//    plat *test10 = new plat("test10",test2,10,3,10,":/myImages/image/testpic3.png");

//    platIntro *plattest = new platIntro(test);
//    platIntro *plattest5 = new platIntro(test);
//    platIntro *plattest6 = new platIntro(test);
//    platIntro *plattest7 = new platIntro(test);
//    platIntro *plattest8 = new platIntro(test);
//    platIntro *plattest9 = new platIntro(test);
//    platIntro *plattest10= new platIntro(test);

//    connect(plattest,SIGNAL(afficherDetails(plat*)),this,SLOT(afficheDetail(plat*)));

//    showPlatLayout->addWidget(plattest);
//    showPlatLayout2->addWidget(plattest5);
//    showPlatLayout2->addWidget(plattest9);
//    showPlatLayout2->addWidget(plattest10);
//    showPlatLayout3->addWidget(plattest6);
//    showPlatLayout4->addWidget(plattest7);
//    showPlatLayout5->addWidget(plattest8);

//    platIntro *plattest2 = new platIntro(test);

//    showPlatLayout->addWidget(plattest2);

//    platIntro *plattest3 = new platIntro(test3);
//    showPlatLayout->addWidget(plattest3);
//    platIntro *plattest4 = new platIntro(test3);

//    showPlatLayout->addWidget(plattest4);

//}

void MainWindow::afficheDetail(plat *selectedPlat){

//    std::cout << selectedPlat->getNom() << std::endl;
//    ui->pj_name->setText(QString::fromStdString(selectedPlat->getNom()));

//    ui->pj_prix->setText(QString::number(selectedPlat->getPrix()));

//    ui->pj_calorie->setText(QString::number(selectedPlat->getCalorie()));

//    ui->pj_note->setText(QString::number(selectedPlat->getAvis()));

//    std::string s;
//    vector<std::string> v=selectedPlat->getIngredient();
//    s = std::accumulate(v.begin(), v.end(), s);

//    ui->pj_description->setText(QString::fromStdString(s));

//    QPixmap *image = selectedPlat->getImage();
//    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
//    ui->pj_picture->setPixmap(image2);*


    int index_window=ui->tabWidget->currentIndex();
    switch(index_window)
    {
    case 0:
    {
    ui->pj_name->setText(QString::fromStdString(selectedPlat->getNom()));
    ui->pj_prix->setText(QString::number(selectedPlat->getPrix()));
    ui->pj_calorie->setText(QString::number(selectedPlat->getCalorie()));
    ui->pj_note->setText(QString::number(selectedPlat->getAvis()));
    std::string s;
    vector<std::string> v=selectedPlat->getIngredient();
    s = accumulate(v.begin(), v.end(), s);
    ui->pj_description->setText(QString::fromStdString(s));

    QPixmap *image = selectedPlat->getImage();
    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
    ui->pj_picture->setPixmap(image2);
    }
    case 1:
    {
    ui->e_name->setText(QString::fromStdString(selectedPlat->getNom()));
    ui->e_prix->setText(QString::number(selectedPlat->getPrix()));
    ui->e_calorie->setText(QString::number(selectedPlat->getCalorie()));
    ui->e_note->setText(QString::number(selectedPlat->getAvis()));
    std::string s;
    vector<std::string> v=selectedPlat->getIngredient();
    s = accumulate(v.begin(), v.end(), s);
    ui->e_description->setText(QString::fromStdString(s));

    QPixmap *image = selectedPlat->getImage();
    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
    ui->e_picture->setPixmap(image2);
    cout<<"hello 22222"<<endl;

    }
    case 2:
    {
    if(ui->tab_3->isActiveWindow())
    ui->p_name->setText(QString::fromStdString(selectedPlat->getNom()));
    ui->p_prix->setText(QString::number(selectedPlat->getPrix()));
    ui->p_calorie->setText(QString::number(selectedPlat->getCalorie()));
    ui->p_note->setText(QString::number(selectedPlat->getAvis()));
    std::string s;
    vector<std::string> v=selectedPlat->getIngredient();
    s = accumulate(v.begin(), v.end(), s);
    ui->p_description->setText(QString::fromStdString(s));

    QPixmap *image = selectedPlat->getImage();
    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
    ui->p_picture->setPixmap(image2);
    }
    case 3:
    {
    // if(ui->tab_4->isActiveWindow())
    ui->d_name->setText(QString::fromStdString(selectedPlat->getNom()));
    ui->d_prix->setText(QString::number(selectedPlat->getPrix()));
    ui->d_calorie->setText(QString::number(selectedPlat->getCalorie()));
    ui->d_note->setText(QString::number(selectedPlat->getAvis()));
    std::string s;
    vector<std::string> v=selectedPlat->getIngredient();
    s = accumulate(v.begin(), v.end(), s);
    ui->d_description->setText(QString::fromStdString(s));

    QPixmap *image = selectedPlat->getImage();
    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
    ui->d_picture->setPixmap(image2);
    }
    case 4:
    {
    // if(ui->tab_5->isActiveWindow())
    ui->b_name->setText(QString::fromStdString(selectedPlat->getNom()));
    ui->b_prix->setText(QString::number(selectedPlat->getPrix()));
    ui->b_calorie->setText(QString::number(selectedPlat->getCalorie()));
    ui->b_note->setText(QString::number(selectedPlat->getAvis()));
    std::string s;
    vector<std::string> v=selectedPlat->getIngredient();
    s = accumulate(v.begin(), v.end(), s);
    ui->b_description->setText(QString::fromStdString(s));

    QPixmap *image = selectedPlat->getImage();
    QPixmap image2 = image->scaled(200,200,Qt::KeepAspectRatio);
    ui->b_picture->setPixmap(image2);
    }

    }
}


void MainWindow::like_label()
{
    switch (preference->label) {
    case 0 :
        updateLike(&platdujourLayout,platdujourList);
        break;
    case 1:
         updateLike(&entreeLayout,entreeList);
         break;
    case 2:
        updateLike(&platLayout,platList);
        break;
    case 3:
        updateLike(&dessertLayout,dessertList);
        break;
    case 4:
        updateLike(&boissonLayout,boissonList);
        break;
    default:
        break;
    }
}

void MainWindow::dislike_label()
{
    switch (ne_mange_pas->label) {
    case 0 :
        updatedisLike(&platdujourLayout,platdujourList);
        break;
    case 1:
         updatedisLike(&entreeLayout,entreeList);
         break;
    case 2:
        updatedisLike(&platLayout,platList);
        break;
    case 3:
        updatedisLike(&dessertLayout,dessertList);
        break;
    case 4:
        updatedisLike(&boissonLayout,boissonList);
        break;
    default:
        break;
    }
}

void MainWindow::on_boisson_addlike_clicked()
{
     preference->label=4;
     preference->show();
}



void MainWindow::on_boisson_adddislike_clicked()
{
     ne_mange_pas->label=4;
     ne_mange_pas ->show();
}


void MainWindow::on_dessert_addlike_clicked()
{
     preference->label=3;
     preference->show();
}


void MainWindow::on_dessert_adddislike_clicked()
{
     ne_mange_pas->label=3;
    ne_mange_pas ->show();
}


void MainWindow::on_plat_addlike_clicked()
{
     preference->label=2;
//     preference->list = this->getplatList();
//     preference->platLayout =this->getentreeLayout();
//     platLayout.removeWidget(platList[0]);
//     platLayout.addWidget(platList[0]);
     preference->show();
}


void MainWindow::on_plat_adddislike_clicked()
{
     ne_mange_pas->label=2;
    ne_mange_pas ->show();
}



void MainWindow::on_entree_addlike_clicked()
{
     preference->label=1;
     preference->show();
}


void MainWindow::on_entree_adddislike_clicked()
{
     ne_mange_pas->label=1;
     ne_mange_pas ->show();
}

void MainWindow::on_platdujour_addlike_clicked()
{
    preference->label=0;
    preference->show();
}


void MainWindow::on_platdujour_adddislike_clicked()
{
     ne_mange_pas->label=0;
    ne_mange_pas ->show();
}


void MainWindow::updateLike( QVBoxLayout* layout_,vector<platIntro*> &list_)
{
        cout<<"label    "<<preference->label<<endl;
        int len =0;
        vector<platIntro*> deletedlist;
        vector<platIntro*>::iterator iter;
        for (iter=list_.begin();iter!=list_.end();iter++)
            {
              len =  (**iter)._plat->getIngredient().size();
              for (int i=0;i<len;i++)
              {
                  vector<string>::iterator iter1;
                  for(iter1=preference->ingrediantName.begin();iter1!=preference->ingrediantName.end();iter1++)
                  {
                  if ((**iter)._plat->getIngredient()[i]==(*iter1))
                  {

                  deletedlist.push_back((*iter));
                  layout_->removeWidget(*iter);
                  break;
                  }
                  }
              }
            }

        for (iter=deletedlist.begin();iter!=deletedlist.end();iter++)
        {
             cout<<(**iter)._plat->getNom()<<endl;
             layout_->insertWidget(0,(*iter));

        }
   preference->ingrediantName.clear();

}
 void MainWindow:: updatedisLike(QVBoxLayout* layout_,vector<platIntro*> &list_)
 {

     cout<<"label    "<<preference->label<<endl;

     int len =0;
     vector<platIntro*> deletedlist;
     deletedlist.clear();
     vector<platIntro*>::iterator iter;
     for (iter=list_.begin();iter!=list_.end();iter++)
         {
           len =  (**iter)._plat->getIngredient().size();
           for (int i=0;i<len;i++)
           {
               vector<string>::iterator iter1;
               for(iter1=ne_mange_pas->ingrediantName.begin();iter1!=ne_mange_pas->ingrediantName.end();iter1++)
               {
               if ((**iter)._plat->getIngredient()[i]==(*iter1))
               {
               cout<<(**iter)._plat->getIngredient()[i]<<endl;
               (**iter).hide();
               break;
               }
               }
           }
         }
     ne_mange_pas->ingrediantName.clear();
 }




