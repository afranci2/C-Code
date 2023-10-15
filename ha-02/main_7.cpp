#include <iostream>

int main()
{
    long long n;
    long long sum = 0;

    std::cin >> n;
    while (n > 1)
    {
        unsigned long long digit = n % 10;

        if (digit % 2 == 0)
        {
            sum += digit;
        }
        n /= 10;
    }
    std::cout << sum << std::endl;

    return 0;
}
