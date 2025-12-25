// Generate a Spiral Number Pattern for size N (filling a matrix logic using loops).

#include <stdio.h>

int main() {
    int n;
    int top = 0, bottom, left = 0, right;
    int num = 1;
    int a[20][20];

    printf("Enter size N: ");
    scanf("%d", &n);

    bottom = n - 1;
    right = n - 1;

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        for(int i = right; i >= left; i--)
            a[bottom][i] = num++;
        bottom--;

        for(int i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    printf("Spiral Pattern:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
