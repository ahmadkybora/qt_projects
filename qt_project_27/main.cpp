#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> list;

    list<<"ahmad"<<"Ali"<<"reza";

    qDebug()<<list;

    qDebug()<<list.size();
    qDebug()<<list.first();

    list.append("mahsa");

    qDebug()<<list.indexOf("mahsa");
    qDebug()<<list.lastIndexOf("mahsa");

    QList<QString> :: iterator it1;

    for(it1 = list.begin(); it1 != list.end(); ++it1)
        qDebug()<< *it1;

    QList<QString> :: reverse_iterator it2;

    for(it2 = list.rbegin(); it2 != list.rend(); ++it2)
        qDebug()<< *it2;

    return a.exec();
}
