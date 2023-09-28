#include <iostream>
#include <iomanip>

int main()
{
    int day, month, year, weekDay;
    std::cin >> day;
    std::cin >> month;
    std::cin >> year;
    if (month == 1){
        month = 13;
        year -= 1;
    }
    if (month == 2) {
        month = 14;
        year -=1;
    }
    weekDay = (day + (((month + 1)*26)/10) + (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) + (5 * (year / 100))) % 7;

    switch(weekDay) {
        case 0:
            std::cout << "Saturday" << std::endl;
            break;
        case 1:
            std::cout << "Sunday" << std::endl;
            break;

        case 2:
            std::cout << "Monday" << std::endl;
            break;

        case 3:
            std::cout << "Tuesday" << std::endl;

            break;
        case 4:
            std::cout << "Wednesday" << std::endl;

            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
    }
    return 0;
}