#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    int sum = 0;

    for (int i = 1; i <= x / 2; ++i)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }

    bool isPerfect = (sum == x);

    if (isPerfect == 0)
    {
        std::cout << "False" << std::endl;
    }
    else
    {
        std::cout << "True" << std::endl;
    }

    return 0;
}
