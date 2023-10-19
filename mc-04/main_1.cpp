#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int C;
    std::cin >> C;

    for (int i = 0; i < C; ++i) {
        int N;
        std::cin >> N;

        std::vector<int> grades(N);  

        int sum = 0;
        int above_average_count = 0;

        for (int j = 0; j < N; ++j) {
            std::cin >> grades[j];
            sum += grades[j];
        }

        double average = sum / (double)N; 

        for (int i = 0; i < grades.size(); i++) {
            if (grades[i] > average) {
                above_average_count++;
            }
        }

        double percentage = (above_average_count / (double)N) * 100.0;  // Convert N to double
        std::cout << std::fixed << std::setprecision(3) << percentage << "%" << std::endl;
    }

    return 0;
}
