#include "addf.h"

addf::addf(QWidget *parent)
    : QWidget{parent}
{


    save->setFixedSize(170,30);
    exitA->setFixedSize(120,30);
    imputName->setFixedSize(400,30);
    imput->setFixedSize(400,500);
    save->setText("Сохранить нового адресата");
    exitA->setText("Закрыть");
    help->setText("Введите данные нового адресата в одну строку.\n(Данные будут помещаться в форму запроса в том виде\n в котором вы их ввели, с учётом пропущенных строк)");
    helpname->setText("Название нового адресата.(Данное название\n будет отображаться в меню создания запроса)");
    QHBoxLayout* lay1 = new QHBoxLayout;
    lay1->addWidget(imputName);
    lay1->addWidget(helpname);
    QHBoxLayout* lay2 = new QHBoxLayout;
    lay2->addWidget(imput);
    lay2->addWidget(help);
    QBoxLayout* laybat = new QBoxLayout(QBoxLayout::LeftToRight);
    laybat->addWidget(exitA);
    laybat->addStretch(1);
    laybat->addWidget(save);
    QVBoxLayout* mainlay=new QVBoxLayout;
    mainlay->addLayout(lay1);
    mainlay->addLayout(lay2);
    mainlay->addLayout(laybat);
    setLayout(mainlay);

    QObject::connect(save,SIGNAL(clicked()),SLOT(addNew()));
    QObject::connect(exitA,SIGNAL(clicked()),SLOT(close()));
}

void addf:: addNew()
{
    QString name,dataADR;


    QString path1, path2;
        path1.append(QCoreApplication::applicationDirPath());
        path1.append("/data");
        path1.append("/ADR.txt");
        path2.append(QCoreApplication::applicationDirPath());
        path2.append("/data");
        path2.append("/NameADR.txt");
        qDebug()<<path1;
        qDebug()<<path2;
        QFile nADR(path2);
        QFile ADR(path1);

//------------------------------    ИМЯ     ------------------------------------
        name=imputName->toPlainText();
        imputName->clear();
        QTextStream in(&nADR);
        nADR.open(QIODevice::Append);
        in<<'\n'<<name;
        nADR.close();

//----------------------------  ДАННЫЕ  ----------------------------------------
        dataADR=imput->toPlainText();
        imput->clear();

        QTextStream in2(&ADR);;
        QTextStream* read= new QTextStream(&dataADR,QIODevice::ReadOnly);
        ADR.open(QIODevice::Append);

        in2<<'\n'<<"!!{";
        while (!read->atEnd())
        {
            in2<<'\n'<<read->readLine()<<"<br>";

        }
        in2<<'\n'<<"}";
}
