#include <iostream>
#include <cmath>


int main()
{
    double loan, interest, payment;
    int months = 0;

    std::cin >> loan;
    std::cin >> interest;
    std::cin >> payment;

    if (0 < loan && loan <= pow(10, 10))
    {
        while (loan > 0)
        {
            loan += loan * interest;
            loan -= payment;
            months++;
        }
    }

    std::cout << months;

    return 0;
}
