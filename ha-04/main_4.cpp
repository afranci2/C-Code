#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

struct Point {
    double x, y;
    char label;
    double distanceTo(const Point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }
};

int main() {
    int totalPoints, k;
    std::cin >> totalPoints >> k;

    std::vector<Point> classifiedPoints(totalPoints);
    for (Point& p : classifiedPoints) {
        std::cin >> p.x >> p.y >> p.label;
    }

    Point unknownPoint;
    std::cin >> unknownPoint.x >> unknownPoint.y;

    std::vector<std::pair<double, int>> distances;
    for (int i = 0; i < totalPoints; ++i) {
        distances.emplace_back(classifiedPoints[i].distanceTo(unknownPoint), i);
    }

    std::sort(distances.begin(), distances.end());

    int redCount = 0, blueCount = 0;
    for (int i = 0; i < k; ++i) {
        char label = classifiedPoints[distances[i].second].label;
        label == 'R' ? ++redCount : ++blueCount;
    }

    std::cout << (redCount > blueCount ? 'R' : 'B') << std::endl;

    return 0;
}
