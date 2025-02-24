#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void StartClicked();
    void StopClicked();
    void min2Clicked();
    void min5Clicked();
    void player1Clicked();
    void player2Clicked();
    void updateProgress();



private:
    Ui::MainWindow *ui;
    float timerRemaining;
    float timer2Remaining;
    int player1;
    int player2;

};
#endif // MAINWINDOW_H
