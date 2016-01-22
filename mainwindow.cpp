#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    car = new Car;
    driver = new Driver(car);

    m_mainTimer.start(1);
    connect(&m_mainTimer, SIGNAL(timeout()), this, SLOT(updateDisplay()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateDisplay() {
    ui->distanceLineEdit->setText(QString::number(car->getDistance()));
    ui->speedLineEdit->setText(QString::number(car->getSpeed()));
}

void MainWindow::on_speedUpPushButton_clicked() {
    driver->speedUp();
}

void MainWindow::on_slowDownPushButton_clicked() {
    driver->slowDown();
}
