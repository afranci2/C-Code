#include <iostream>

int main()
{

    int a, b, c, max_number;

    std::cin >> a;
    std::cin >> c;
    std::cin >> b;
    max_number = 0;

    if (a > max_number)
    {
        max_number = a;
    }
    if (b > max_number)
    {
        max_number = b;
    }
    if (c > max_number)
    {
        max_number = c;
    }
    std::cout << max_number << std::endl;
    return 0;
}