#include <iostream>
#include <iomanip>

int main()
{
    int a, b, c, d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    d = a + b + c;
    if (d != 180)
    {
        std::cout << "This triangle is impossible" << std::endl;
        return 0;
    }

    if (a == 90 || b == 90 || c == 90)
    {
        std::cout << "Right" << std::endl;
    }
    else if (a > 90 || b > 90 || c > 90)
    {
        std::cout << "Obtuse" << std::endl;
    }
    else
    {
        std::cout << "Acute" << std::endl;
    }
    return 0;
}