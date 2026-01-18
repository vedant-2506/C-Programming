//Find the Saddle Point of a matrix (smallest in row, largest in column).


#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];
    int found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        int min = a[i][0];
        int colIndex = 0;

        // Find minimum in row
        for(int j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                colIndex = j;
            }
        }

        // Check if it is largest in its column
        int isSaddle = 1;
        for(int k = 0; k < r; k++) {
            if(a[k][colIndex] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle point found: %d at position (%d, %d)\n",
                   min, i + 1, colIndex + 1);
            found = 1;
        }
    }

    if(!found)
        printf("No saddle point found\n");

    return 0;
}
