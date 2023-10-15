#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isCircularPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n < 10)
    {
        return isPrime(n);
    }

    int num = n;
    int numDigits = 0;
    while (num > 0)
    {
        num /= 10;
        numDigits++;
    }

    num = n;
    for (int i = 0; i < numDigits; ++i)
    {
        if (!isPrime(num))
        {
            return false;
        }
        int lastDigit = num % 10;
        int restOfDigits = num / 10;
        num = lastDigit * pow(10, numDigits - 1) + restOfDigits;
    }

    return true;
}

int main()
{
    int n;
    std::cin >> n;
    bool result = isCircularPrime(n);
    if (result == 1)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    return 0;
}
