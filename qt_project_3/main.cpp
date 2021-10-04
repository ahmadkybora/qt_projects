#include "myclass.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myclass w;
    w.resize(200, 300);
    w.setWindowTitle("hello");
    w.show();

    QPushButton btn;
    btn.setText("Click Me!");
    btn.show();

    return a.exec();
}
