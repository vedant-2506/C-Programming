// Write a program to find the largest and smallest elements in a 2D array.

#include <stdio.h>
#include <limits.h>

int main() {
    int rows, cols, i, j;
    int largest = INT_MIN, smallest = INT_MAX;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);

            if(arr[i][j] > largest)
                largest = arr[i][j];

            if(arr[i][j] < smallest)
                smallest = arr[i][j];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
