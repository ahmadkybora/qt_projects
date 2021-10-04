#include <QCoreApplication>
#include <QVector>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> vec;
    vec<<11<<13<<14<<15<<16<<18;
    qDebug()<<vec;
    qDebug()<<vec.first();
    qDebug()<<vec.last();
    qDebug()<<vec.size();
    qDebug()<<vec.indexOf(11);

    vec.move(4, 5);
    vec.prepend(10);
    vec.append(19);
    vec.insert(1, 12);
    vec.remove(3);
    vec.removeFirst();
    vec.removeLast();
    qDebug()<<vec;

    return a.exec();
}
