#include <iostream>


unsigned int string_len(char str[]) {
    unsigned int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


int main() {
    char myString[] = "Hello World";

    unsigned int length = string_len(myString);
    std::cout << length << std::endl;
    
    return 0;
}