#include <iostream>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            std::cout << "\\";
        }

        int start = i;
        for (int l = 1; l <= i + j; l++)
        {
            std::cout << "!";
            start++;
        }

        start = start - 2;
        for (int j = 1; j < i; j++)
        {
            std::cout << "//";
            start--;
        }

        std::cout << std::endl;
    }

    return 0;
}