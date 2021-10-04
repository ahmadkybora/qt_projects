#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTextEdit"
#include "QSplitter"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextEdit *t1 = new QTextEdit("A");
    QTextEdit *t2 = new QTextEdit("B");
    QTextEdit *t3 = new QTextEdit("C");

    QSplitter *s = new QSplitter(Qt::Vertical);

    s->addWidget(t1);
    s->addWidget(t2);
    s->addWidget(t3);

    QTextEdit *t4 = new QTextEdit("D");
    QTextEdit *t5 = new QTextEdit("E");

    QSplitter *s2 = new QSplitter();

    s2->addWidget(s);
    s2->addWidget(t4);
    s2->addWidget(t5);

    s2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

