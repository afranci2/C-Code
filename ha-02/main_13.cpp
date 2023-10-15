#include <iostream>

int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int originalN = n;
    int numDigits = countDigits(n);
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        int digitPowered = 1;
        for (int i = 0; i < numDigits; i++) {
            digitPowered *= digit;
        }
        sum += digitPowered;
        n /= 10;
    }

    return sum == originalN;
}

int main() {
    int n;
    std::cin >> n;


    bool result = isArmstrong(n);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
