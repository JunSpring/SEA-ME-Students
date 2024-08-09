#include "SportsCar.h"

void SportsCar::Drive()
{
    Car::Drive();
    cout << "Top Speed is " << topSpeed << "." << endl;
}
