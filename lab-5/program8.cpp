#include <iostream>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            std::cout << " ";
        }

        int start = i;
        for (int j = 1; j <= i; j++)
        {
            std::cout << start;
            start++;
        }

        start = start - 2;
        for (int j = 1; j < i; j++)
        {
            std::cout << start;
            start--;
        }

        std::cout << std::endl;
    }

    return 0;
}