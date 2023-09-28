#include <iostream>
#include <iomanip>

int main()
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    int smallest;
    
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }
    std::cout << "The smallest number entered was " << smallest << std::endl;

    return 0;
}