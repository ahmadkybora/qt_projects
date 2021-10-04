#include "mainwindow.h"
#include <QApplication>
#include <QVector>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QVector<int> vec;

    vec <<11<<13<<14<<15<<17<<16<<18;

    w.show();
    return a.exec();
}
