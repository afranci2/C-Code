#include <iostream>
#include <iomanip>

int main()
{
    char a;
    std::cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        a -= 32;
    }

    switch (a)
    {
    case 'A':
        std::cout << "Excellent" << std::endl;
        break;
    case 'B':
        std::cout << "Good" << std::endl;
        break;
    case 'C':
        std::cout << "Average" << std::endl;
        break;
    case 'D':
        std::cout << "Poor" << std::endl;
        break;
    case 'F':
        std::cout << "Failing" << std::endl;
        break;
    }
}