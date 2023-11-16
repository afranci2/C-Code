#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    bool valid = true;

    int right = str.size() - 1;

    while (0 <= right)
    {
       std::cout << str[right];
       right--;
    }
    std::cout << '\n';
}