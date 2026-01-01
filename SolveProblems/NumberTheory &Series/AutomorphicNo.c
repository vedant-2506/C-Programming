//Check if a number is an Automorphic Number (ends with the same digits as the umber itself, e.g., $5^2 = 25$, $6^2 = 36$).

#include <stdio.h>

int main() {
    int n, square, temp, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    temp = n;

    // Count digits in n
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }

    // Compute 10^digits
    for(int i = 1; i <= digits; i++) {
        power = power * 10;
    }

    if(square % power == n)
        printf("%d is an Automorphic Number.\n", n);
    else
        printf("%d is NOT an Automorphic Number.\n", n);

    return 0;
}
