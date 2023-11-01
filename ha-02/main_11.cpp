#include <iostream>

int main()
{
    char a;

    std::cin >> a;

    int rows = a - 'A' + 1;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 0; j < rows - i - 1; ++j)
        {
            std::cout << "  "; 
        }

        for (char c = 'A'; c < 'A' + i; ++c)
        {
            std::cout << c << " ";
        }

        for (char c = 'A' + i - 2; c >= 'A'; --c)
        {
            std::cout << c ;
        }

        std::cout << std::endl;
    }

    return 0;
}
