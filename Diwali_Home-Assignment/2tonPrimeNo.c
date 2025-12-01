//Accept a number n from user and test if all number print all prime numbers 
// between 2 and n

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers between 2 and %d:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // assume prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
