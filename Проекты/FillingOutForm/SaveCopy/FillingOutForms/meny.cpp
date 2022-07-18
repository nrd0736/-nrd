#include "meny.h"

meny::meny(QWidget *parent)
    : QWidget{parent}
{

    QTextEdit test;


    setWindowTitle("Автоматическое заполнение запросов");
    QIcon ik;
    ik.addFile(":/Blank/res/Blank/icon.jpg");
    setWindowIcon(ik);


    add->setFixedSize(120,30);
    write->setFixedSize(120,30);
    exit->setFixedSize(120,30);
    add->setText("Добавить адресата");
    write->setText("Создать запрос");
    exit->setText("Выйти");


    lay1->addStretch(10);
    lay1->addWidget(write);
    lay1->addWidget(add);
    lay1->addWidget(exit);
    lay1->addStretch(10);
    lay2->addLayout(lay1);

    setLayout(lay2);

    QObject::connect(exit,SIGNAL(clicked()),SLOT(close()));
    QObject::connect(add,SIGNAL(clicked()),SLOT(addADR()));
    QObject::connect(write,SIGNAL(clicked()),SLOT(genzp()));
}

void meny::genzp()
{
    fill* f = new fill;



    lay2->addWidget(f);

    setLayout(lay2);
}

void meny::addADR()
{
    addf* adr = new addf;



    lay2->addWidget(adr);

    setLayout(lay2);
}
