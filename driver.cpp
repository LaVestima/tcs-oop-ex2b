#include "driver.h"

Driver::Driver() {
    car = new Car;
}

Driver::Driver(Car *tempCar) {
    car = new Car;
    car = tempCar;
}

void Driver::speedUp() {
    car->speedUp();
}

void Driver::slowDown() {
    car->slowDown();
}
