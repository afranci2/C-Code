#include <iostream>
#include <string>

int main() {
    int x;
    int y;

    bool increasing = true;
    bool decreasing = true;

    std::cin >> y; 

    while (std::cin >> x) {
        if (y < x) {
            decreasing = false;
        } else if (y > x) {
            increasing = false; 
        }
        if (!increasing && !decreasing) {
            break;
        }

        y = x;  
    }

    if (increasing || decreasing) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not Sorted" << std::endl;
    }

    return 0;
}
