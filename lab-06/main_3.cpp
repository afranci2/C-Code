#include <iostream>

unsigned int string_len(char str[]) {
    unsigned int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


bool palindrome(char str[]) {
    int left = 0;
    int right = string_len(str) -1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    char invalidPalindrome[] = "Hello World";
    char validPalindrome[] = "racecar";
    bool firstCheck = palindrome(invalidPalindrome);
    bool secondCheck = palindrome(validPalindrome);
    std::cout << firstCheck << secondCheck << std::endl;
    return 0;
}