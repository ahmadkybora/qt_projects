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
    ui->treeWidget->setColumnCount(2);
    QTreeWidgetItem *A, *B, *C, *D, *E;

    A = new QTreeWidgetItem(ui->treeWidget);
    B = new QTreeWidgetItem(A);

    C = new QTreeWidgetItem(ui->treeWidget);
    D = new QTreeWidgetItem(C);

    A->setText(0, "A");
    B->setText(0, "B");
    C->setText(0, "C");
    D->setText(0, "D");
    E->setText(0, "E");
}

