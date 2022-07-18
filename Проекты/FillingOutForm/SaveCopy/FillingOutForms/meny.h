#ifndef MENY_H
#define MENY_H

#include <QObject>
#include <QWidget>
#include <QtWidgets>
#include <QDebug>
#include <fill.h>
#include <addf.h>


class meny : public QWidget
{
    Q_OBJECT
public:
    explicit meny(QWidget *parent = nullptr);
    QPushButton *add = new QPushButton;
    QPushButton *write = new QPushButton;
    QPushButton *exit = new QPushButton;
    QVBoxLayout *lay1 = new QVBoxLayout;
    QBoxLayout *lay2 = new QBoxLayout(QBoxLayout::LeftToRight);
public slots:
    void genzp();
    void addADR();
signals:

};

#endif // MENY_H
