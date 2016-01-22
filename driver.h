#ifndef DRIVER_H
#define DRIVER_H

#include "car.h"

class Driver {
private:
    Car *car;
public:
    Driver();
    Driver(Car *);
    void speedUp();
    void slowDown();
};

#endif // DRIVER_H
