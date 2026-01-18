//Sort the elements of each row of the matrix in ascending order.

#include <stdio.h>

int main() {
    int r, c;
    int a[10][10], temp;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sort each row
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c - 1; j++) {
            for(int k = 0; k < c - j - 1; k++) {
                if(a[i][k] > a[i][k + 1]) {
                    temp = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = temp;
                }
            }
        }
    }

    printf("Matrix after sorting each row:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
