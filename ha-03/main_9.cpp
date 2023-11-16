#include <iostream>
#include <string>

int main() {
    std::string email1, email2;
    std::cin >> email1 >> email2;

    std::string normalized1, normalized2;
    bool plusFlag1 = false, plusFlag2 = false;

    for (char c : email1) {
        if (c == '+') plusFlag1 = true;
        if (c == '@') break;
        if (!plusFlag1 && c != '.') normalized1 += std::tolower(c);
    }
    normalized1 += "@gmail.com";

    for (char c : email2) {
        if (c == '+') plusFlag2 = true;
        if (c == '@') break;
        if (!plusFlag2 && c != '.') normalized2 += std::tolower(c);
    }
    normalized2 += "@gmail.com";

    if (normalized1 == normalized2) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
