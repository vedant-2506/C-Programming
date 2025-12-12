//Write a program to print Pascal’s triangle using nested loops.

#include <stdio.h>

int main() {
    int rows, i, j, num;

    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        num = 1;

        // Print spaces for alignment
        for(j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for(j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // Update for next binomial coefficient
        }

        printf("\n");
    }

    return 0;
}


