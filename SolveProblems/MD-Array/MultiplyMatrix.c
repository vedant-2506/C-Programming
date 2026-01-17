//Write a program to multiply two matrices (check dimensions first).

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], mul[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            mul[i][j] = 0;

    // Multiply matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
