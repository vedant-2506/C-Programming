//Accept a 2D array and count how many negative numbers are present.

#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];
    int count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] < 0)
                count++;
        }
    }

    printf("Number of negative elements = %d\n", count);

    return 0;
}
