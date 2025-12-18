//Count the number of trailing zeros in the factorial of a given number.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        n = n / 5;
        count = count + n;
    }

    printf("Number of trailing zeros = %d\n", count);

    return 0;
}
