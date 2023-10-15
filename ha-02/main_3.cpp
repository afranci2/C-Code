#include <iostream>

int main()
{
    int n;
    long long factorial = 1;

    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
 
        factorial *= i;

        if (factorial > 2147483647 || factorial <0) {
            std::cout << "Can't handle this" << std::endl;
            return 0;
        }
    }

    std::cout << factorial << std::endl;

    return 0;
}
