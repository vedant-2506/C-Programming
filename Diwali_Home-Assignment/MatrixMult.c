//Write a program to multiply two matrix.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix C to 0
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix after multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
