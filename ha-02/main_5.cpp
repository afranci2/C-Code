#include <iostream>

int main()
{
    int n;
    bool valid = true;

    std::cin >> n;
    if (n <= 1)
    {
        valid = false;
    }
    else
    {
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                valid = false;
                break;
            }
        }
    }

    if (valid == true)
    {
        std::cout << "True" << std::endl;
    }
    else {
                std::cout << "False" << std::endl;

    }
}
