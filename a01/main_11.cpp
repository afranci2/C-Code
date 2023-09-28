#include <iostream>
#include <iomanip>

int main()
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::string months[] = {"January ", "February ", "March ", "April ", "May ", "June ", "July ", "August ", "September ", "October ", "November ","December "};
    if (a <= 12)
    {
        std::cout << months[a - 1] << b << ", " << c << std::endl;
    }
    else
    {
        std::cout << "Imaginary month" << std::endl;
    }
    return 0;
}