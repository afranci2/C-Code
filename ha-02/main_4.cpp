#include <iostream>

int main()
{
    int n, k;
    long long result = 1;

    std::cin >> n >> k;

    for (int i = 0; i < k; ++i)
    {
        result *= n;
    }

    std::cout << result << std::endl;
    return 0;
}
