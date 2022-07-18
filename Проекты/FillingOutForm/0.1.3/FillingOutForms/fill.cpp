#include "fill.h"

fill::fill(QWidget *parent)
    : QWidget{parent}
{
    //txtOut1->setReadOnly(true);

    pathall.append(QCoreApplication::applicationDirPath());
    pathall.append("/data/ADR.txt");
    pathname.append(QCoreApplication::applicationDirPath());
    pathname.append("/data/NameADR.txt");

    QWidget *choseADR = new QWidget;
    QWidget *filling = new QWidget;



    tab.addTab(choseADR,"Выбор адресата");
    tab.addTab(filling,"Заполнение запроса");
    create->setText("Создать запрос");
    exit->setText("Закрыть");
    create->setFixedSize(120,30);
    exit->setFixedSize(120,30);

    QVBoxLayout *lay1 = new QVBoxLayout;
    QBoxLayout *lay2 = new QBoxLayout(QBoxLayout::LeftToRight);
    lay1->addWidget(&tab);
    lay2->addWidget(exit);
    lay2->addStretch(1);
    lay2->addWidget(create);
    lay1->addLayout(lay2);
    setLayout(lay1);
    tab.usesScrollButtons();


    schet=0;

    QObject::connect(create,SIGNAL(clicked()),SLOT(startgen()));
    QObject::connect(this,SIGNAL(genF()),SLOT(genform()));
    QObject::connect(this,SIGNAL(startgenerating(int)),SLOT(generating(int)));
    QObject::connect(exit,SIGNAL (clicked()),SLOT(close()));

//---------------------------ВЫБОР АДРЕСАТА----------------------------------------

    QVBoxLayout *laychose = new QVBoxLayout;


   QFile nADR(pathname);
   QString read;
nADR.open(QIODevice::ReadOnly);

   int colvoch=1;
       while (true)
       {
           QString v;
           v=nADR.readLine();
           if(!nADR.atEnd())
           colvoch++;
           else
               break;
       }
nADR.close();
//---------------------------------------------------------------------------------------------------------------
valuesLayout = new QVBoxLayout(); // creating layout for valuesPage
    scrollArea=new QScrollArea(choseADR); // creates scrollarea, and set valuesPage as it's parent
    scrollWidget =new QWidget(scrollArea);  // creates scrollwidget, your scrollArea as parent
    scrollLayout = new QVBoxLayout(scrollWidget); // creating layout in scrollWidget


//---------------------------------------------------------------------------------------------------------------
nADR.open(QIODevice::ReadOnly);
   for (int i = 1;i<=colvoch;i++)
   {
       read=nADR.readLine();
       QCheckBox* ch = new  QCheckBox;
       dataC.append(ch);
       ch->setStyleSheet("border-style: solid; border-width: 1px; border-color: grey;");
       ch->setText(read);
       ch->setFixedSize(300,50);
       scrollLayout->addWidget(ch);
   }
nADR.close();
scrollArea->setWidget(scrollWidget);  // sets scrollArea around scrollWidget
choseADR->setLayout(valuesLayout);  //valuesPage is my QStackedWidget page
valuesLayout->addWidget(scrollArea ); // adding scrollwidget to your mainlayout

//----------------------ЗАПОЛНЕНИЕ ЗАПРОСА------------------------
    QList<QString> name;
    name<<"Уголовное дело №" << "Дата возбуждения" << "Номер месяца" << "Год" << "Предусмотренного частью" << "Статьей" << "Абонентский номер клиента или ФИО клиента" << "Копию направить на e-mail (ввести до @mvd.ru)"
       << "Оригинал почтой для"<<"Начальник"<<"Фамилия и инициалы начальника"<<"Должность исполнителя"<<"ФИО исполнителя"<<"Телефон исполнителя";

    QGridLayout* lay3 = new QGridLayout;
    for(int i = 0;i<=13;i++)
    {
        QLabel* lb=new QLabel;

        lb->setText(name[i]);
        lb->setFixedSize(285,30);
        lb->setFrameShadow(QFrame::Raised);
        lb->setFrameStyle(QFrame::StyledPanel);
        lay3->addWidget(lb,i,0);
    }
    for(int i = 0;i<=13;i++)
    {
        QTextEdit* tx=new QTextEdit;
        dataT.append(tx);

        tx->setFixedSize(285,30);
        tx->setFrameShadow(QFrame::Raised);
        tx->setFrameStyle(QFrame::StyledPanel);
        lay3->addWidget(tx,i,1);
    }


    filling->setLayout(lay3);



}



void fill::startgen()
{
    for(auto& it : dataC)
    {
         if (it->isChecked())
         {
             if(!chekchose.contains(dataC.indexOf(it))) { chekchose.append(dataC.indexOf(it)); schet++;}
             else continue;

         }
    }



    for(auto& it : dataT)
    {
         txtFil << it->toPlainText();

    }

    QString alpha;
    alpha=txtFil[6];

      for(int i = 0; i < alpha.length(); i++)
      {
        if(alpha < '0' || alpha > '9') variant=0;
        else variant=1;
      }

      QString buf,x,y,all;
      int ind=0;

      buf=txtFil[9];
        for (int j=0;j<buf.length();j++)
          {
              if(buf.at(j).isUpper()) ind++;
              if (ind==2) {x.append("<br>"); ind=0;}
              x.append(buf[j]);
            }
      txtFil[9].clear();
      txtFil[9].append(x);




      emit genF();

}

void fill::genform()
{

   QString htbuff1,htbuff2,htbuff;



   QFile ht1(pathall);
   ht1.open(QIODevice::ReadOnly );
   while(!ht1.atEnd())
   {
       htbuff1=ht1.readLine();
       if (htbuff1.contains("}"))
       {
           htbuff=htbuff2;
           chekFill.append(htbuff);
           htbuff2.clear();
           htbuff.clear();
           continue;
       }
       if (htbuff1.contains("!!"))
       {
           continue;
       }
       else
       {
           htbuff2+=htbuff1;
       }

   }
    ht1.close();
    //qDebug()<<chekchose;
    for(int i =0;i<schet;i++) {
        emit startgenerating(chekchose[i]);

    }
    chekchose.clear();
    QString mWarn1="Запросы созданы и сохранены на рабочем столе.(Если запрос не был создан добавьте данного адресата заново)";
    QMessageBox warn1(QMessageBox::Information,"Предупреждение",mWarn1);
    warn1.addButton("Ок",QMessageBox::YesRole);
    warn1.exec();
    this->close();

}

void fill::generating(int chek)
{
    filling.append(chekFill[chek]);

    for(int i = 0 ;i<=13;i++)
    {

        filling.append(txtFil[i]);
    }

    QString path;
    if (variant==true) path=":/Blank/res/Blank/BlankNumber.html";
    else path=":/Blank/res/Blank/BlankFIO.html";
    QFile blank(path);
    blank.open(QIODevice::ReadOnly);
    buff=blank.readAll();
    blank.close();

    for(int j=0;j<=14;j++)
    {
        if (buff.contains("!!"))
        {
            int ind=buff.indexOf("!!");
            buff.replace(ind,4,filling[j]);
        }
    }

    QMargins *f= new QMargins;

    f->setLeft(0);
    f->setRight(0);
    f->setTop(100);
    f->setBottom(0);

    QPageLayout lay;
    lay.fullRect();
    lay.minimumMargins();
    lay.setMargins(*f);

    QPageSize sz(QPageSize::Custom);




    QTextDocument document;
    document.setDocumentMargin(0);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setFullPage(true);
    printer.setPageMargins(*f);
    printer.setPageLayout(lay);
    printer.setOutputFormat(QPrinter::PdfFormat);
    QPageSize s(QPageSize::A4);

    printer.setPageSize(s);


    document.setHtml(buff);

    QString namefile;
    namefile="Запрос для ";

    QFile nADR(pathname);
    QTextStream reading(&nADR);
    reading.setCodec(QTextCodec::codecForName("UTF-8")); // For MinGW 32-bit
    nADR.open(QIODevice::ReadOnly);
    if (chek!=0){
        for(int i = 0; i<chek;i++)
           reading.readLine();
        namefile.append(reading.readLine());
     }
    else if(chek==0)  namefile.append(reading.readLine());


    namefile.append(".pdf");

    QString autoexec =
    QString("%1/").arg(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    autoexec.append(namefile);
    printer.setOutputFileName(autoexec);

    document.print(&printer);
    filling.clear();

}
