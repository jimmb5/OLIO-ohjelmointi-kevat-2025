#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::resetButtonClicked);
    connect(ui->countButton, &QPushButton::clicked, this, &MainWindow::countButtonClicked);
    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::lineEditText);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::resetButtonClicked() {
    ui->lineEdit->clear();
}

void MainWindow::countButtonClicked() {
    counter++;
    ui->lineEdit->setText(QString::number(counter));
}

void MainWindow::lineEditText() {
}
