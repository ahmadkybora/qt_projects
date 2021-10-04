#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMenu"
#include "QMenuBar"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileMenu = menuBar()->addMenu("&File");
    openAct = new QAction("Open", this);
    fileMenu->addAction(openAct);
    connect(openAct, &QAction::triggered, this, &MainWindow::openFile);

    saveAct = new QAction("Save", this);
    fileMenu->addAction(saveAct);
    fileMenu->addSeparator();
    exitAct = new QAction("Exit", this);
    fileMenu->addAction(exitAct);
    connect(exitAct, &QAction::triggered, this, &QWidget::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFile(){
    QString fileName = QFileDialog::getOpenFileName(this);
}
