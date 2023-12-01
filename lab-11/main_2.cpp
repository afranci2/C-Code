#include <iostream>
#include "Car.h"

int main()
{
    Car myCar("Infiniti", "G35X", "Blue", 2008);

    myCar.printDetails();

    myCar.setMileage(209997.7);
    myCar.printDetails();

    return 0;
}