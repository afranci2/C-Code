#include <iostream>
#include <iomanip>

int main()
{
    double x, y;
    std::cin >> x;

    y = (x * 9/5) + 32;

    if (y > 32 and y <= 65) {
        std::cout << "Wear a jacket" << std::endl;
    }
    else if (y<=32){
        std::cout << "It is cold out" << std::endl;

    }
    else{
        std::cout << "It is nice out" << std::endl;

    }
    return 0;
}