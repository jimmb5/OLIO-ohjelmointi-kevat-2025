#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>

QTimer *timer;
QTimer *timer2;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer2 = new QTimer(this);

    connect(ui->StartButton, &QPushButton::clicked, this, &MainWindow::StartClicked);
    connect(ui->StopButton, &QPushButton::clicked, this, &MainWindow::StopClicked);
    connect(ui->min2, &QPushButton::clicked, this, &MainWindow::min2Clicked);
    connect(ui->min5, &QPushButton::clicked, this, &MainWindow::min5Clicked);
    connect(ui->player1Button, &QPushButton::clicked, this, &MainWindow::player1Clicked);
    connect(ui->player2Button, &QPushButton::clicked, this, &MainWindow::player2Clicked);

    connect(timer, &QTimer::timeout, this, &MainWindow::updateProgress);
    timer->setInterval(1000); // 1 sekunnin välein toimii
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::StartClicked() {
    updateProgress();
    if (player1==1||player2==1){
    ui->textLabel->setText("Game on going");
    }
}

void MainWindow::min2Clicked() {
    player1 = 1;
    player2 = 0;

    timerRemaining = 120;
    timer2Remaining = 120;

    ui->player1Bar->setMaximum(120);
    ui->player2Bar->setMaximum(120);

    ui->player1Bar->setValue(timerRemaining);
    ui->player2Bar->setValue(timerRemaining);

    timer->stop();
    timer2->stop();

    ui->textLabel->setText("Ready to play (2min)");
}

void MainWindow::player1Clicked(){
    player1 = 1;
    player2 = 0;
}
void MainWindow::player2Clicked() {
    player1 = 0;
    player2 = 1;
}
void MainWindow::min5Clicked() {
    player1 = 1;
    player2 = 0;

    timerRemaining = 300;
    timer2Remaining = 300;

    ui->player1Bar->setMaximum(300);
    ui->player2Bar->setMaximum(300);

    ui->player1Bar->setValue(timerRemaining);
    ui->player2Bar->setValue(timer2Remaining);

    timer->stop();
    timer2->stop();

    ui->textLabel->setText("Ready to play (5min)");

}
void MainWindow::updateProgress() {
    if (timerRemaining > 0 && player1 == 1) {
        timer->start();
        timerRemaining--;
        ui->player1Bar->setValue(timerRemaining); // Päivitä progressBar

        if (timerRemaining == 0) {
            ui->textLabel->setText("Player 2 WON!");
            timer->stop(); // Pysäytä ajastin, kun aika loppuu
            timer2->stop();
        }
    }

    if (timer2Remaining > 0 && player2 == 1) {
        timer2->start();
        timer2Remaining--;
        ui->player2Bar->setValue(timer2Remaining); // Päivitä progressBar

        if (timer2Remaining == 0) {
            ui->textLabel->setText("Player 1 WON!");
            timer->stop(); // Pysäytä ajastin, kun aika loppuu
            timer2->stop();
        }
    }
}

void MainWindow::StopClicked(){
    player1 = 0;
    player2 = 0;
    timerRemaining = 0;
    timer2Remaining = 0;
    ui->player1Bar->setValue(timerRemaining);
    ui->player2Bar->setValue(timer2Remaining);
    timer->stop();
    timer2->stop();
    ui->textLabel->setText("New game via start button");

}

