#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

int main()
{
    std::string str;
    std::string uniqueChars;
    std::getline(std::cin, str);

    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        int length = uniqueChars.length();

        bool valid = true;
        for (int j = 0; j < length; j++)
        {
            if (str[i] == uniqueChars[j])
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            uniqueChars += str[i];
        }
    }

    std::cout << uniqueChars.length() << "\n";
    return 0;
}