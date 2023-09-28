#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c, d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    d = (a+b+c)/3;
    std::cout << std::fixed << std::setprecision(4);

    std::cout << "The average of " << a << ", " << b << ", and " << c << " is " << d << std::endl;
    return 0;
}