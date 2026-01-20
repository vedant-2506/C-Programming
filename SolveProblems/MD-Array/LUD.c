//Calculate the sum of the Upper Triangular and Lower Triangular elements.

#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    int upperSum = 0, lowerSum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j)
                upperSum += a[i][j];
            else if(i > j)
                lowerSum += a[i][j];
        }
    }

    printf("Sum of Upper Triangular elements = %d\n", upperSum);
    printf("Sum of Lower Triangular elements = %d\n", lowerSum);

    return 0;
}
