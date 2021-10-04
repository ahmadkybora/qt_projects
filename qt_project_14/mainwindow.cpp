#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    for(int i = 10; i<=20; i++){
        ui->listWidget->addItem(QString::number(i));
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QListWidgetItem *k;
    k=ui->listWidget->currentItem();
    k->setTextColor(Qt::white);
    k->setBackgroundColor(Qt::blue);
}

