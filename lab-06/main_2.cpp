#include <iostream>

void replace(char str[], char a, char b){
    int i = 0;
    while (str[i] != '\0'){
        i++;
        if (str[i] == a){
            str[i] = b;
        };
    };
}

int main(){
    char myString[] = "Hello World";
    char first = 'o';
    char second = 'p';
    replace(myString, first, second);
    std::cout << myString << std::endl;
    return 0;
}