//Convert a Decimal number to Binary without using arrays (using arithmetic operations).

#include <stdio.h>

int main() {
    int n, rem;
    long binary = 0;
    int place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary equivalent = %ld\n", binary);

    return 0;
}
