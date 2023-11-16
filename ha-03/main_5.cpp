#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::cout << str[0];

    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] != str[i - 1]) {
            std::cout << str[i];
        }
    }

    std::cout << '\n';

    return 0;
}
