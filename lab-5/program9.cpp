#include <iostream>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            std::cout << "\\";
        }

        return 0;
    }
}