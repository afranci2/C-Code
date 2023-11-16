#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    bool valid = true;

    int left = 0;
    int right = str.size() - 1;

    while (left < right && valid)
    {
        char lChar = std::tolower(str[left]);
        char rChar = std::tolower(str[right]);

        if (lChar != rChar)
        {
            std::cout << "False" << std::endl;
            valid = false;
            break;
        }

        left++;
        right--;
    }
    if (valid)
    {
        std::cout << "True" << std::endl;
    }
}