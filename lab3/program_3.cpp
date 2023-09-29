#include <iostream>

int main()
{
    int a, b;
    bool isPrime = true;

    std::cin >> a;
    b = a - 1;

    while (b > 1)
    {
        if (a % b == 0)
        {
            std::cout << "Not Prime" << std::endl;
            isPrime = false;
            break;
        }

        b -= 1;
    }

    if (isPrime)
    {
        std::cout << "Prime" << std::endl;
    }
    return 0;
}