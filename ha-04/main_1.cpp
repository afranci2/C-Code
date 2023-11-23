#include <iostream>
#include <vector>

const int SIZE = 9;

bool isPerfectSudoku(std::vector<std::vector<int>>& sudoku) {
    int checker[SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int k = 0; k < SIZE; k++) checker[k] = 0; 
        for (int j = 0; j < SIZE; j++) {
            if (checker[sudoku[i][j] - 1]++ > 0) return false;
        }
    }

    for (int j = 0; j < SIZE; j++) {
        for (int k = 0; k < SIZE; k++) checker[k] = 0;
        for (int i = 0; i < SIZE; i++) {
            if (checker[sudoku[i][j] - 1]++ > 0) return false;
        }
    }

    for (int block = 0; block < SIZE; block++) {
        for (int k = 0; k < SIZE; k++) checker[k] = 0; 
        for (int i = block / 3 * 3; i < block / 3 * 3 + 3; i++) {
            for (int j = block % 3 * 3; j < block % 3 * 3 + 3; j++) {
                if (checker[sudoku[i][j] - 1]++ > 0) return false;
            }
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> sudoku(SIZE, std::vector<int>(SIZE));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cin >> sudoku[i][j];
        }
    }

    if (isPerfectSudoku(sudoku)) {
        std::cout << "Solution is good!" << "\n";
    } else {
        std::cout << "Wrong solution!" << "\n";
    }

    return 0;
}
