#include "mainwindow.h"
#include <QWidget>
#include <QApplication>
#include <QProgressBar>
#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QWidget window;
    QSlider *slider = new QSlider(&window);
    slider->setGeometry(10, 20, 300, 30);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);

    QProgressBar *pb = new QProgressBar(&window);
    pb->setGeometry(10, 100, 300, 30);
    pb->setRange(0, 100);
    pb->setValue(10);
    QObject::connect(slider, SIGNAL(valueChanged(int)), pb, SLOT(setValue(int)));

    window.show();

    return a.exec();
}
