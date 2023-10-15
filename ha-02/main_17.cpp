#include <iostream>

int main()
{
    int x[] = {2, 2, 1, -1, -2, -2, -1, 1};
    int y[] = {1, -1, -2, -2, -1, 1, 2, 2};
    int n;
    bool valid = true;

    int current_x, current_y;
    std::cin >> current_x >> current_y;

    if ((8 < current_x || current_x < 1) || (8 < current_y || current_y < 1))
    {
        std::cout << "Invalid sequence";
        return 0;
    }
    
    while (std::cin >> n)
    {

        int new_x = current_x + x[n];
        int new_y = current_y + y[n];

        if ((8 < new_x || new_x < 1) || (8 < new_y || new_y < 1))
        {
            std::cout << "Invalid sequence";
            return 0;
        }
        else
        {
            current_x = new_x;
            current_y = new_y;
        }
    }

    std::cout << current_x << " " << current_y << std::endl;

    return 0;
}
