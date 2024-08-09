#ifndef SPORTSCAR_H
#define SPORTSCAR_H


#include "Car.h"

class SportsCar : public Car
{
public:
    // Member Variable
    int topSpeed;

    // Member Function
    void Drive();
};


#endif //SPORTSCAR_H
