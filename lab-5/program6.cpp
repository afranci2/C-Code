#include <iostream>

int main()
{
    int prev = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < 2*i-1 ; j++)
        {
            std::cout << "*";
            
        }
        prev += 2;
        std::cout << ""<<std::endl;
    }
    return 0;
}