#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "car.h"
#include "driver.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer m_mainTimer;

    Car *car;
    Driver *driver;

private slots:
    void updateDisplay();
    void on_speedUpPushButton_clicked();
    void on_slowDownPushButton_clicked();
};

#endif // MAINWINDOW_H
