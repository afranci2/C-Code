#include <iostream>

int main (){
    int a, b, c;

    std::cin >> a;
    std::cin >> b;

// It's also worth noting that we could combine these lines into one (std::cin >> a, b;)

    c = a + b;  
    std::cout << a << " + " << b << " = " << c << std::endl;
    return 0;
}