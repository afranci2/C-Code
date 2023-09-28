#include <iostream>
#include <iomanip>

int main()
{
    float x, c, f;
    char a;
    std::cin >> x;
    std::cin >> a;

    c = (x * 9.0/5.0) + 32;
    f = (x - 32)*(5.0/9.0);
    std::cout << std::fixed << std::setprecision(4);

    if (a == 'C') {
        std::cout << x << " degree(s) " << a << " is equal to " << std::setprecision(4) << c << " degree(s) F" << std::endl;
    }
    else {
        std::cout << x << " degree(s) " << a << " is equal to " << std::setprecision(4) << f << " degree(s) C" << std::endl;
    }
   
    return 0;
}