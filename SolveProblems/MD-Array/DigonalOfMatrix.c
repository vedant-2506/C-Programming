//Print only the main diagonal elements of a square matrix.

#include <stdio.h>

int main() {
    int n;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Main diagonal elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    return 0;
}
