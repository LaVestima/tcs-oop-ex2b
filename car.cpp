#include "car.h"

Car::Car(QObject *parent) : QObject(parent), speed(0), distance(0) {
    m_timer.start(1000);
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(updateDistance()));
}

void Car::speedUp() {
    speed++;
}

void Car::slowDown() {
    speed--;
}

int Car::getSpeed() {
    return speed;
}

int Car::getDistance() {
    return distance;
}

void Car::updateDistance() {
    distance += speed;
}

void Car::setSpeed(int v) {
    speed = v;
}
