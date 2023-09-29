#include <iostream>

int main()
{

    int a,b,c;

    std::cin >> a;
    std::cin >> c;
    std::cin >> b;


    if (a <= b && b <= c)
    {
        std::cout << "True";
    }

    return 0;
}