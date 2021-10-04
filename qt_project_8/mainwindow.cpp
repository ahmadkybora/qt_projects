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


void MainWindow::on_btn_add_clicked()
{
    int a, b;
    a = ui->num_1->text().toInt();
    b = ui->num_2->text().toInt();

    QString result = QString::number(a + b);
    ui->result->setText(result);

}

