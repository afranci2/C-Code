#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    if (a >= 90 && a <= 100)
    {
        std::cout << "A" << std::endl;
    }
    else if (a >= 80 && a < 90)
    {
        std::cout << "B" << std::endl;
    }
    else if (a >= 70 && a < 80)
    {
        std::cout << "C" << std::endl;
    }
    else if (a >=65 && a <70)
    {
        std::cout << "D" << std::endl;

    }
    else
    {
        std::cout << "F" << std::endl;

    }
    return 0;

}