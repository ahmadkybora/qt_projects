#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDateEdit"
#include "QTimeEdit"
#include "QDateTimeEdit"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDateEdit *date = new QDateEdit(this);
    date->setGeometry(40, 70, 200, 50);

    QTimeEdit *time = new QTimeEdit(this);
    time->setGeometry(40, 140, 200, 50);

    QDateTimeEdit *dt = new QDateTimeEdit(this);
    dt->setGeometry(40, 210, 200, 50);

    QString d = QDate::currentDate().toString();
    QLabel *label = new QLabel(d);
    ui->statusbar->addWidget(label);

    label->setGeometry(40, 280, 200, 50);

}

MainWindow::~MainWindow()
{
    delete ui;
}

