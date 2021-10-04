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


void MainWindow::on_comboBox_activated(const QString &arg1)
{
    ui->spinBox->setValue(arg1.toInt());
}


void MainWindow::on_comboBox_activated(int index)
{
    ui->lineEdit->setText(QString::number(index));
}

