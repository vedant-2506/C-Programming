//Generate a Magic Square of odd order N (sum of every row, col, diag is same).

#include <stdio.h>

int main() {
    int n;
    int magic[15][15] = {0};

    printf("Enter odd order of magic square: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Magic square possible only for odd numbers\n");
        return 0;
    }

    int i = 0, j = n / 2;

    for(int num = 1; num <= n * n; num++) {
        magic[i][j] = num;

        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if(magic[newi][newj] != 0) {
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }

    printf("Magic Square:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }

    return 0;
}
