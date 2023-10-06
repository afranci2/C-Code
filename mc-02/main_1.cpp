#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double x1, x2, y1, y2;
    double dot, length_1, length_2, x1_normal, x2_normal, y1_normal, y2_normal;
    std::string angle;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;

    length_1 = sqrt(((x1) * (x1)) + ((y1) * (y1)));
    length_2 = sqrt(((x2) * (x2)) + ((y2) * (y2))); 
    if (length_1 != 0)
    {

        x1_normal = x1 / length_1;
        y1_normal = y1 / length_1;
    }
    else
    {
        x1_normal = 0;
        y1_normal = 0;
    }
    if (length_2 != 0)
    {

        x2_normal = x2 / length_2;
        y2_normal = y2 / length_2;
    }
    else
    {
        x2_normal = 0;
        y2_normal = 0; 
    }

    dot = (x1_normal * x2_normal) + (y1_normal * y2_normal);

    if (dot > 0)
    {
        angle = "Acute";
    }
    else if (dot < 0)
    {
        angle = "Obtuse";
    }
    else
    {
        angle = "Perpendicular";
    }

    std::cout << "Length of v1: " << std::fixed << std::setprecision(4) << length_1 << std::endl;
    std::cout << "Length of v2: " << std::fixed << std::setprecision(4) << length_2 << std::endl;
    std::cout << "Their normalized dot product is " << dot << " and they are " << angle << std::endl;

    return 0;
}