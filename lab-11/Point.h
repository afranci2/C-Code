#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
    private:
        int x;
        int y;
        int z;
        
    public:
        Point(int someX, int someY, int someZ);

        void setX(int someX);
        void setY(int someY);
        void setZ(int someZ);

        int getX();
        int getY();
        int getZ();

        std::string toCord();

        double euDistance(Point p2);
};

#endif