
#include "meny.h"
#include "fill.h"
#include <QApplication>
#include <QDebug>
#include <addf.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    meny start;
    start.showMaximized();

    return a.exec();
}
