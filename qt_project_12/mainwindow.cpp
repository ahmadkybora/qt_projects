#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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
    if(ui->rb_no->isChecked()){
        QMessageBox::information(this, "", "no");
    }
    if(ui->rb_yes->isChecked()){
        QMessageBox::information(this, "", "yes");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->cb_cpp->isChecked() == true && ui->cb_python->isChecked() == false){
        QMessageBox::information(this, "", "cpp");
    }
    if(ui->cb_cpp->isChecked() == false && ui->cb_python->isChecked() == true){
        QMessageBox::information(this, "", "python");
    }
    if(ui->cb_cpp->isChecked() == true && ui->cb_python->isChecked() == true){
        QMessageBox::information(this, "", "cpp, python");
    }
    if(ui->cb_cpp->isChecked() == false && ui->cb_python->isChecked() == false){
        QMessageBox::information(this, "", "");
    }
}

