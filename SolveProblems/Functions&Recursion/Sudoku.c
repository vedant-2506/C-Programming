// Validate a Sudoku board (check if a 9x9 configuration is valid).

#include <stdio.h>

int isValid(int board[9][9], int row, int col, int num) {

    for(int x = 0; x < 9; x++)
        if(board[row][x] == num)
            return 0;

    for(int x = 0; x < 9; x++)
        if(board[x][col] == num)
            return 0;

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i + startRow][j + startCol] == num)
                return 0;

    return 1;
}

int main() {

    int board[9][9];

    printf("Enter Sudoku board (9x9):\n");

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            scanf("%d", &board[i][j]);

    int valid = 1;

    for(int i = 0; i < 9 && valid; i++) {
        for(int j = 0; j < 9; j++) {

            int num = board[i][j];

            if(num != 0) {
                board[i][j] = 0;

                if(!isValid(board, i, j, num)) {
                    valid = 0;
                    break;
                }

                board[i][j] = num;
            }
        }
    }

    if(valid)
        printf("Valid Sudoku Board\n");
    else
        printf("Invalid Sudoku Board\n");

    return 0;
}