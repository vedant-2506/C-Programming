//Calculate the factorial of a number using a while loop.

#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n) {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}
