#include <iostream>
#include <iomanip>

int main()
{
    int a, b;
    std::cin >> a;

    if (a < 0)
    {
        a *= -1;

        if (a % 10 == 9)
        {
            std::cout << -a << " is good" << std::endl;
        }
        else
        {
            std::cout << -a << " is no good" << std::endl;
        }
    }
    else
    {
        if (a % 10 == 9)
        {
            std::cout << a << " is good" << std::endl;
        }
        else
        {
            std::cout << a << " is no good" << std::endl;
        }
    }
    return 0;
}