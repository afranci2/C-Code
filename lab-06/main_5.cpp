#include <iostream>

unsigned int string_len(char str[])
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverse(char str[])
{
    int left = 0;
    int right = string_len(str) - 1;
    while (left < right)
    {
        char temp = str[right];
        str[right] = str[left];
        str[left] = temp;
        left++;
        right--;
    }
}

void remove(char str[], char a)
{
    int length = string_len(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == a)
        {
            for (int j = i; j < length - 1; j++)
            {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0';
            break;
        }
    }
}

bool palindrome(char str[])
{
    int left = 0;
    int right = string_len(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    char invalidPalindrome[] = "Hello World";
    char validPalindrome[] = "racecar";
    remove(invalidPalindrome, 'o');
    std::cout << invalidPalindrome << std::endl;
    return 0;
}