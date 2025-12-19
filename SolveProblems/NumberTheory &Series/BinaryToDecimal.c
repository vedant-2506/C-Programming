//Convert a Binary number to Decimal.

#include <stdio.h>

int main() {
    int binary, digit, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0) {
        digit = binary % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}
