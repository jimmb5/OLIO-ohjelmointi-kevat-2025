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
    void N1Clicked();
    void N2Clicked();
    void N3Clicked();
    void N4Clicked();
    void N5Clicked();
    void N6Clicked();
    void N7Clicked();
    void N8Clicked();
    void N9Clicked();
    void N0Clicked();
    void ClearClicked();
    void TotalClicked();
    void AddClicked();
    void ExtractClicked();
    void MultiplyClicked();
    void DivideClicked();




private:
    Ui::MainWindow *ui;
    double firstNumber;
    double secondNumber;
    QString operation;
};
#endif // MAINWINDOW_H
