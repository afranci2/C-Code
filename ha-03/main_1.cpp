#include <iostream>

int main() {
    int n, x;
    int count = 1;
    std::cin >> n;
    while (std::cin >> x) {
        if (x==n) {
            count++;
        }
    }
    std::cout << count << "\n";

}
