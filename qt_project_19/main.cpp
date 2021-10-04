#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QPushButton *btn = new QPushButton("close");
    QObject::connect(btn, SIGNAL(clicked()), &a, SLOT(quit()));

    return a.exec();
}
