#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> points;
    int x, y;
    
    while (std::cin >> x >> y) {
        points.push_back({x, y});
    }

    int maxDistSquared = 0;
    for (int i = 0; i < points.size(); ++i) {
        for (int j = i + 1; j < points.size(); ++j) {
            int dx = points[i].first - points[j].first;
            int dy = points[i].second - points[j].second;
            int distSquared = dx * dx + dy * dy;
            if (distSquared > maxDistSquared) {
                maxDistSquared = distSquared;
            }
        }
    }
    int result = 0;
    while (result * result <= maxDistSquared) {
        ++result;
    }
    --result;  

    std::cout << result << std::endl;
    return 0;
}
