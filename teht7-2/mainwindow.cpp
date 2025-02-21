#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::N1Clicked);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::N2Clicked);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::N3Clicked);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::N4Clicked);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::N5Clicked);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::N6Clicked);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::N7Clicked);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::N8Clicked);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::N9Clicked);
    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::N0Clicked);

    connect(ui->Total, &QPushButton::clicked, this, &MainWindow::TotalClicked);
    connect(ui->Clear, &QPushButton::clicked, this, &MainWindow::ClearClicked);
    connect(ui->Add, &QPushButton::clicked, this, &MainWindow::AddClicked);
    connect(ui->Extract, &QPushButton::clicked, this, &MainWindow::ExtractClicked);
    connect(ui->Divide, &QPushButton::clicked, this, &MainWindow::DivideClicked);
    connect(ui->Multiply, &QPushButton::clicked, this, &MainWindow::MultiplyClicked);

    ui->lineEdit->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::N1Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("1");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("1");
    }
    else {}

}

void MainWindow::N2Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("2");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("2");
    }
    else {}

}

void MainWindow::N3Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("3");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("3");
    }
    else {}

}

void MainWindow::N4Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("4");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("4");
    }
    else {}

}

void MainWindow::N5Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("5");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("5");
    }
    else {}

}

void MainWindow::N6Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("6");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("6");
    }
    else {}

}

void MainWindow::N7Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("7");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("7");
    }
    else {}

}

void MainWindow::N8Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("8");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("8");
    }
    else {}

}

void MainWindow::N9Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("9");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("9");
    }
    else {}

}

void MainWindow::N0Clicked() {
    if(ui->lineEdit->hasFocus()){

        ui->lineEdit->insert("0");
    }
    else if( ui->lineEdit2->hasFocus()){
        ui->lineEdit2->insert("0");
    }
    else {}

}

void MainWindow::TotalClicked() {
    bool ok1, ok2;
    firstNumber = ui->lineEdit->text().toDouble(&ok1);
    secondNumber = ui->lineEdit2->text().toDouble(&ok2);

    if (!ok1 || !ok2) {
        ui->TotalLabel->setText("Virheellinen syöte");
        return;
    }

    double result = 0;
    if (operation == "+") {
        result = firstNumber + secondNumber;
    } else if (operation == "-") {
        result = firstNumber - secondNumber;
    } else if (operation == "*") {
        result = firstNumber * secondNumber;
    } else if (operation == "/") {
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
        } else {
            ui->TotalLabel->setText("Ei voida jakaa nollalla");
            return;
        }
    }

    ui->TotalLabel->setText(QString::number(result));
}

void MainWindow::ClearClicked() {
     ui->lineEdit->clear();
     ui->lineEdit2->clear();
     ui->TotalLabel->clear();
     ui->lineEdit->setFocus();
}

void MainWindow::AddClicked() {
    operation = "+";
    ui->lineEdit2->setFocus();
}

void MainWindow::ExtractClicked() {
    operation = "-";
    ui->lineEdit2->setFocus();
}

void MainWindow::DivideClicked() {
    operation = "/";
    ui->lineEdit2->setFocus();
}

void MainWindow::MultiplyClicked() {
    operation = "*";
    ui->lineEdit2->setFocus();

}
