#include <iostream>

int main()
{
    char a;
    int b;

    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << "1";
        std::cout << "3";
    }
    if (a % 2 != 0)
    {
        std::cout << "2";
    }

    if (a % 3 == 0)
    {
        std::cout << "4";
    }

    std::cout << std::endl;

    return 0;
}