#include "homepage.h"
#include "ui_homepage.h"
#include <QVBoxLayout>
#include <QPushButton>

HomePage::HomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);

    QWidget* mainWidget = new QWidget;
    setCentralWidget(mainWidget);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setAlignment(Qt::AlignCenter);

    QPushButton* menuButton = new QPushButton(tr("Menu"));
    QPushButton* orderButton = new QPushButton(tr("View My Order"));
    QPushButton* serviceButton = new QPushButton(tr("Help"));

    mainLayout->addWidget(menuButton);
    mainLayout->addWidget(orderButton);
    mainLayout->addWidget(serviceButton);

    mainWidget->setLayout(mainLayout);

    connect(menuButton,SIGNAL(clicked(bool)),this,SLOT(menuClicked()));
    connect(orderButton,SIGNAL(clicked(bool)),this,SLOT(orderClicked()));
    connect(serviceButton,SIGNAL(clicked(bool)),this,SLOT(helpClicked()));

}

HomePage::~HomePage()
{
    delete ui;
}
