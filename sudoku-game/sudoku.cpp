#include <iostream>
using namespace std;

const int SIZE = 9;
int board[SIZE][SIZE];

bool isSafe(int board[SIZE][SIZE], int row, int col, int num) {
    // Check if the number exists in the row, column, or 3x3 box
    for (int i = 0; i < SIZE; i++) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num)
                return false;
        }
    }
    return true;
}

bool solveSudoku(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == 0) { // Empty cell
                for (int num = 1; num <= SIZE; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;
                        if (solveSudoku(board)) return true;
                        board[row][col] = 0; // Backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValidInput(int num) {
    return num >= 1 && num <= 9;
}

void getUserInput(int board[SIZE][SIZE]) {
    int row, col, num;
    while (true) {
        cout << "Enter row, column (1-9), and number (1-9) to place: ";
        cin >> row >> col >> num;
        if (isValidInput(num) && row >= 1 && row <= SIZE && col >= 1 && col <= SIZE) {
            row--; col--; // Adjust for 0-indexing
            if (board[row][col] == 0) {
                board[row][col] = num;
                break;
            } else {
                cout << "Cell already filled, choose another." << endl;
            }
        } else {
            cout << "Invalid input, try again." << endl;
        }
    }
}

void runSudokuGame() {
    // Initialize a board with some given values and some zeros for empty cells.
    int board[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    while (true) {
        printBoard(board);
        getUserInput(board);

        // You can call solveSudoku(board) to automatically solve the puzzle at any time.
        cout << "Do you want to continue solving? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n') {
            break;
        }
    }
}
