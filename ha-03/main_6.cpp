#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);

    int hashValue = 0;
    for (int i = 0; i < str.length(); i++)
    {
        hashValue += str[i];
    }

    std::cout << hashValue << std::endl;

    return 0;
}