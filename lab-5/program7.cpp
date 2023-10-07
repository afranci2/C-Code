#include <iostream>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4 - i; j++) {
            std::cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}