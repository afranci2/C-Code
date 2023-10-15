#include <iostream>

int main()
{
    char a;

    std::cin >> a;

    int rows = a - 'A' + 1;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 0; j < rows - i; ++j)
        {
            std::cout << "  "; // Print two spaces for each position
        }

        for (char c = 'A'; c < 'A' + i; ++c)
        {
            std::cout << c << " "; // Print the character followed by a space
        }

        for (char c = 'A' + i - 2; c >= 'A'; --c)
        {
            std::cout << c ; // Print the character followed by a space
        }

        std::cout << std::endl;
    }

    return 0;
}
