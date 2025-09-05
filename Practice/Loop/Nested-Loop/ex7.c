//Print various formatted patterns (pyramid, diamond, Pascal’s triangle) using nested loops.

#include <stdio.h>

int main() 
{
    int n, i, k, space;
    printf("Enter rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
