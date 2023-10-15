#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;
        int current = a;

    if (0 < b && b <= 20 && 0 < a && a <= 20 && 0 < c && a <= b) {
        bool ascending = true;

        while (a <= b && ascending == true) {
            for (int i = 0; i < a; i++) {
                std::cout << "+";
            }
            std::cout << std::endl;

            if ((a + c) <= b) {
                a += c;
            } else {
                ascending = false;
                break;
            }
        }

        while (a >= current) {
            for (int i = 0; i < a; i++) {
                std::cout << "+";
            }
            std::cout << std::endl;

            a-= c;
        }


        
    }

    return 0;
}
