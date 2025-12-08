//Write a program to find the sum of all elements in a 2D array.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
