#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QLabel"
#include "QLineEdit"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *label = new QLabel("first_name: ", this);
    label->setGeometry(40, 20, 50, 40);
    label->setFrameStyle(QFrame::Panel | QFrame::Raised);
    label->setIndent(5);

    QLineEdit *line = new QLineEdit(this);
    line->setGeometry(100, 20, 80, 40);
    line->setPlaceholderText("..");
    line->setEchoMode(QLineEdit::Normal);
    line->setMaxLength(15);
    line->setReadOnly(false);
    line->setStyleSheet("coloe:red");

    QPushButton *btn = new QPushButton("ok", this);
    btn->setGeometry(100, 80, 80, 40);
    btn->setToolTip("click");
}

MainWindow::~MainWindow()
{
    delete ui;
}

