#include <iostream>

int main()
{
    char a;

    std::cin >> a;

    if (a >= 65 && a <= 90){
        std::cout << "Upper Case" << std::endl;
    }
    else {
        std::cout << "Lower Case" << std::endl;
    }
    
    return 0;
}