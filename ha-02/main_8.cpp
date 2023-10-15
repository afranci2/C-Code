#include <iostream>

int main()
{
    int n;
    int count = 0;
    bool valid;

    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << "Sorry, not odd" << std::endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j == i || j == n - i - 1)

                {
                    std::cout << "*";
                    count++;
                }
                else if (count == 2 && (i != n / 2))
                {
                    valid = false;
                }
                else
                {
                    std::cout << " ";
                }
            }
            count = 0;
            std::cout << std::endl;
        }
    }

    return 0;
}
