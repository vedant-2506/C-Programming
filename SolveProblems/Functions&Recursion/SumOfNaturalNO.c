//Calculate the sum of natural numbers up to N using recursion.

#include <stdio.h>

int sumNatural(int n) {
    if(n == 0)
        return 0;
    else
        return n + sumNatural(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of natural numbers up to %d = %d\n", n, sumNatural(n));

    return 0;
}
