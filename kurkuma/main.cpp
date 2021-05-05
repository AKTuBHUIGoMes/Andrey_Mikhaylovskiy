#include "mainwindow.h"

#include <QApplication>

int ramzes(int a)
{return a;}

float ramzes(float a)
{return a;}


int main(int argc, char *argv[])
{

    ramzes(2);
    ramzes(1/2);
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("юра RAMZES666 круто");
    w.setToolTip("Юра это круто");

    w.show();
    return a.exec();
}

