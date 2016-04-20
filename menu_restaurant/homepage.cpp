#include "homepage.h"
#include "ui_homepage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

HomePage::HomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);

    QWidget* mainWidget = new QWidget;
    setCentralWidget(mainWidget);
    mainWidget->setAutoFillBackground(true);

    QPalette palette;
    QPixmap pixmap(":/myImages/image/background.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    mainWidget->setPalette(palette);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    QVBoxLayout* mainLayout2 = new QVBoxLayout;
    QVBoxLayout* mainLayout1 = new QVBoxLayout;
    QHBoxLayout* mainLayout0 = new QHBoxLayout;
    QHBoxLayout* mainLayout01 = new QHBoxLayout;
    mainLayout->setAlignment(Qt::AlignCenter);
    mainLayout->addLayout(mainLayout0);
    mainLayout->addLayout(mainLayout01);
    mainLayout01->addLayout(mainLayout1);
    mainLayout01->addLayout(mainLayout2);

    QLabel *title = new QLabel(tr("Welcome!"));
    title->setMinimumSize(80,80);
    title->setFont( QFont("Timers" ,28,  QFont::Bold));
    mainLayout0->setAlignment(Qt::AlignCenter);
    mainLayout0->addWidget(title);

    QPushButton* menuButton = new QPushButton(tr("Menu"));
    //menuButton->setFlat(true);
    menuButton->setIcon(QIcon(":/myImages/image/menu.jpg"));
    menuButton->setIconSize(QSize(80,80));

    QPushButton* orderButton = new QPushButton(tr("View My Order"));
    //orderButton->setFlat(true);
    orderButton->setIcon(QIcon(":/myImages/image/myorder.jpg"));
    orderButton->setIconSize(QSize(80,80));
    QPushButton* serviceButton = new QPushButton(tr("Service"));
    //serviceButton->setFlat(true);
    serviceButton->setIcon(QIcon(":/myImages/image/service.jpg"));
    serviceButton->setIconSize(QSize(80,80));
    QPushButton* helpButton = new QPushButton(tr("Help"));
    //helpButton->setFlat(true);
    helpButton->setIcon(QIcon(":/myImages/image/help.jpg"));
    helpButton->setIconSize(QSize(80,80));

    mainLayout1->addWidget(menuButton);
    mainLayout2->addWidget(orderButton);
    mainLayout1->addWidget(serviceButton);
    mainLayout2->addWidget(helpButton);

    mainWidget->setLayout(mainLayout);

    connect(menuButton,SIGNAL(clicked(bool)),this,SLOT(menuClicked()));
    connect(orderButton,SIGNAL(clicked(bool)),this,SLOT(orderClicked()));
    connect(serviceButton,SIGNAL(clicked(bool)),this,SLOT(helpClicked()));
    connect(helpButton,SIGNAL(clicked(bool)),this,SLOT(helpClicked()));

}

HomePage::~HomePage()
{
    delete ui;
}
