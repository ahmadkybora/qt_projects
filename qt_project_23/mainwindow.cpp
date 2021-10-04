#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QGridLayout"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *w = new QWidget();
    QPushButton *b1 = new QPushButton("A");
    QPushButton *b2 = new QPushButton("B");
    QPushButton *b3 = new QPushButton("C");
    QPushButton *b4 = new QPushButton("D");
    QPushButton *b5 = new QPushButton("E");

    QGridLayout *h1 = new QGridLayout;
    h1->addWidget(b1, 0, 0);
    h1->addWidget(b2, 0, 1);
    h1->addWidget(b3, 1, 0);
    h1->addWidget(b4, 2, 0);
    h1->addWidget(b5, 2, 1);

    w->setLayout(h1);
    w->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

