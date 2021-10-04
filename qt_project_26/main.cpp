#include <QCoreApplication>
#include <QSet>
#include <QDebug>
#include <QMap>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSet<int> s1, s2, s3;
    s1<<14<<7<<1<<14<<3<<2;
    qDebug()<<s1;
    qDebug()<<s1.size();
    qDebug()<<s1.contains(15);

    s2<<21<<27<<123<<2;
    qDebug()<<s2;

    s3 = s2.intersect(s1);
    qDebug()<<s3;

    s2.swap(s2);

    qDebug()<<s2;
    qDebug()<<s3;

    QMap<QString, QString> mp;
    mp.insert("number", "one");

    qDebug()<<mp.size();


    return a.exec();
}
