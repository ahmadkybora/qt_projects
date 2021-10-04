#ifndef MYCLASS_H
#define MYCLASS_H

#include <QMainWindow>

class myclass : public QMainWindow
{
    Q_OBJECT

public:
    myclass(QWidget *parent = nullptr);
    ~myclass();
};
#endif // MYCLASS_H
