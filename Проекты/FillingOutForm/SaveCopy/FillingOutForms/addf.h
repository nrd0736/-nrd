#ifndef ADDF_H
#define ADDF_H

#include <QWidget>
#include <QtWidgets>
#include <QObject>

class addf : public QWidget
{
    Q_OBJECT
public:

    explicit addf(QWidget *parent = nullptr);
    QTextEdit* imput = new QTextEdit;
    QTextEdit* imputName = new QTextEdit;
    QLabel* help = new QLabel;
    QLabel* helpname = new QLabel;
    QPushButton *save= new QPushButton;
    QPushButton *exitA= new QPushButton;

public slots:
    void addNew();

signals:

};

#endif // ADDF_H
