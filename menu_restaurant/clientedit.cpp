#include "clientedit.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <iostream>
#include <QHBoxLayout>
clientEdit::clientEdit(ClientInput* _client,QWidget *parent) :
    client(_client),QDialog(parent)
{
//    client->setParent(this);

    QPushButton* cancelBtn = new QPushButton("Cancel");
    QPushButton* confirmBtn = new QPushButton("Confirm");

    QHBoxLayout* buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch(1);
    buttonLayout->addWidget(cancelBtn);
    buttonLayout->addWidget(confirmBtn);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(client);
    mainLayout->addLayout(buttonLayout);

    this->setLayout(mainLayout);

    setModal(true);
//    this->setAutoDefault(true);
    connect(cancelBtn,SIGNAL(clicked(bool)),this,SLOT(cancelButtonClicked()));
    connect(confirmBtn,SIGNAL(clicked(bool)),this,SLOT(confirmButtonClicked()));

    setMinimumSize(300,300);

}

clientEdit::~clientEdit()
{
}

void clientEdit::cancelButtonClicked(){
    this->hide();
    emit cancel(false);
}

void clientEdit::confirmButtonClicked(){
    this->hide();
    emit cancel(true);
}
