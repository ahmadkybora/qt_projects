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


void MainWindow::on_btn_login_clicked()
{
    QString u, p;
    u = ui->username->text();
    p = ui->password->text();

    if(u == "ahmad" && p == "123"){
        QMessageBox::information(this, "login", "correct");
    }else{
        QMessageBox::information(this, "login", "Not correct");
    }

}
