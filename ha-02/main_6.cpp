#include <iostream>

int main()
{
    int n, s;
    bool valid = true;

    std::cin >> n >> s;
    int sum = 0;
    for (int i = n - s + 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}
