#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string result;

    for (char c : input) {
        if (c == '<') {
            if (!result.empty()) {
                result.pop_back(); 
            }
        } else {
            result.push_back(c);
        }
    }

    std::cout << result << std::endl;

    return 0;
}
