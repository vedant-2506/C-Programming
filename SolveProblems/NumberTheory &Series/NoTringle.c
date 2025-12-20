//Print Floyd’s Triangle (1, 2 3, 4 5 6...) up to N rows.

#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
