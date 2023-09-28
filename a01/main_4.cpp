#include <iostream>
#include <iomanip>

int main(){
    int a,b,c;
    char str;
    std::cin >> a;
    std::cin >> b;
    std::cin >> str;

    if (str == '*') {
        c = a * b;
        std::cout << a << " * " << b << " = " << c << std::endl ;
    }
    else if (str == '/'){
        c = a / b;
        std::cout << a << " / " << b << " = " << c << std::endl ;
    }
    else if (str == '+'){
        c = a + b;
        std::cout << a << " + " << b << " = " << c << std::endl ;
    }
    else {
        c = a - b;
        std::cout << a << " - " << b << " = " << c << std::endl ;
    }

    return 0;
}