#include "Point.h"
#include <iostream>
#include <string>
#include <cmath>

Point::Point(int someX, int someY, int someZ)
{
    this->x = someX;
    this->y = someY;
    this->z = someZ;
}

void Point::setX(int someX)
{
    this->x = someX;
}

void Point::setY(int someY)
{
    this->y = someY;
}

void Point::setZ(int someZ)
{
    this->z = someZ;
}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

int Point::getZ()
{
    return this->z;
}

std::string Point::toCord()
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}

double Point::euDistance(Point p2)
{
    double dx = this->x - p2.getX();
    double dy = this->y - p2.getY();
    double dz = this->z - p2.getZ();
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}