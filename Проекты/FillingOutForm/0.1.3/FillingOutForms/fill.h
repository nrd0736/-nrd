#ifndef FILL_H
#define FILL_H

#include <QWidget>
#include <QtWidgets>
#include <QFile>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintEngine>
#include <QtPrintSupport/QPageSetupDialog>
#include <QtPrintSupport/qprinter.h>
#include <QScrollArea>


class fill : public QWidget
{
    Q_OBJECT
public:
    explicit fill(QWidget *parent = nullptr);

    QString pathname,pathall;

    QVBoxLayout *valuesLayout;
    QVBoxLayout *scrollLayout;
    QScrollArea *scrollArea;
    QWidget *scrollWidget;

    QTabWidget tab ;
    QListWidget *l1v=new QListWidget;
    QList <QCheckBox*> dataC;

    QPushButton* create= new QPushButton;
    QPushButton* exit= new QPushButton;
    QPushButton* delADR= new QPushButton;


    QList <QTextEdit*> dataT;

    QList <QString> txtFil;
    QList <int> chekchose;
    int schet;

    QList <QString> chekFill;
    bool variant;

    QList <QString> filling;

    QString buff;
public slots:
  void  startgen();
  void  genform();
  void  generating(int chek);

signals:
    void genF();
    void startgenerating(int chek);
};

#endif // FILL_H
