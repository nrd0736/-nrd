
#include "meny.h"
#include "fill.h"
#include <QApplication>
#include <QDebug>
#include <addf.h>
#include <QtNetwork/QNetworkRequest>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


   meny start;
   start.showMaximized();


    return a.exec();
}
