#include <iostream>
#include <string>

std::string toHex(int value);
std::string convertToHexColor(int r, int g, int b);

int main()
{
    int r, g, b;

    std::cin >> r >> g >> b;

    std::string convertedColor = convertToHexColor(r, g, b);

    std::cout << convertedColor;

    return 0;
}


std::string toHex(int value)
{
    char arrHex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    std::string hex;

    while (value > 0)
    {
        int digit = value % 16;
        hex = arrHex[digit] + hex;
        value /= 16;
    }

    if (hex.empty())
    {
        hex = "00"; 
    }
    else if (hex.size() == 1)
    {
        hex = "0" + hex; 
    }

    return hex;
}

std::string convertToHexColor(int r, int g, int b)
{
    std::string red = toHex(r);
    std::string green = toHex(g);
    std::string blue = toHex(b);

    return "#" + red + green + blue;
}
