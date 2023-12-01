#include <iostream>
#include "Point.h"

int main()
{
    Point p1(4, 2, 10);

    std::cout << p1.toCord();

    p1.setX(20);

    std::cout << p1.toCord();

    Point p2(12, 4, 1);

    std::cout << p2.toCord();

    std::cout << p1.euDistance(p2);

    return 0;
}