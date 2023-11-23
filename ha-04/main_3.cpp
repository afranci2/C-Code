#include <iostream>
#include <vector>

bool isSolved(const std::vector<int>& puzzle) {
    for (int i = 0; i < 8; ++i) {
        if (puzzle[i] != i + 1) return false;
    }
    return puzzle[8] == 0;
}

int findEmptySpace(const std::vector<int>& puzzle) {
    for (int i = 0; i < 9; ++i) {
        if (puzzle[i] == 0) return i;
    }
    return -1;
}

void swap(std::vector<int>& puzzle, int a, int b) {
    int temp = puzzle[a];
    puzzle[a] = puzzle[b];
    puzzle[b] = temp;
}

void executeMoves(std::vector<int>& puzzle, const std::vector<char>& commands) {
    for (char command : commands) {
        int emptyPos = findEmptySpace(puzzle);
        int newPos = emptyPos;

        switch (command) {
            case 'U': newPos = (emptyPos >= 3) ? emptyPos - 3 : newPos; break;
            case 'D': newPos = (emptyPos < 6) ? emptyPos + 3 : newPos; break;
            case 'L': newPos = (emptyPos % 3 != 0) ? emptyPos - 1 : newPos; break;
            case 'R': newPos = (emptyPos % 3 != 2) ? emptyPos + 1 : newPos; break;
        }

        if (newPos != emptyPos) {
            swap(puzzle, emptyPos, newPos);
        }
    }
}

int main() {
    std::vector<int> puzzle(9);
    for (int& tile : puzzle) {
        std::cin >> tile;
    }

    std::vector<char> commands;
    char command;
    while (std::cin >> command) {
        commands.push_back(command);
    }

    executeMoves(puzzle, commands);

    if (isSolved(puzzle)) {
        std::cout << "Solution is good!" << std::endl;
    } else {
        std::cout << "Wrong solution!" << std::endl;
    }

    return 0;
}
