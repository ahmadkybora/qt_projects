#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel *label = new QLabel("<strong>name: </strong>", this);
    label->setGeometry(40, 20, 50, 40);
    label->setFrameStyle(QFrame::Panel | QFrame::Raised);
    label->setIndent(10);

    QLineEdit *line = new QLineEdit(this);
    line->setGeometry(100, 20, 80, 40);
    line->setPlaceholderText("name...");
    line->setEchoMode(QLineEdit::Normal);
    line->setMaxLength(5);
    line->setReadOnly(false);
    line->setStyleSheet("color:blue;background-color:lightgreen;selection-background-color:red");
    line->setInputMask("0000,00,00");

    QPushButton *btn = new QPushButton("ok!", this);
    btn->setGeometry(100, 80, 80, 40);
    btn->setToolTip("Click Me");
    btn->setCursor(Qt::CrossCursor);
    btn->setStyleSheet("color:white;background-color:green");
    //btn->setFlat(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

