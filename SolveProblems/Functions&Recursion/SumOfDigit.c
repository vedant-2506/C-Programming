//Write a recursive function to calculate the sum of digits of a numberber.

#include <stdio.h>

int sumDigits(int n) {
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main() {
    int number;

    printf("Enter a numberber: ");
    scanf("%d", &number);

    printf("Sum of digits of %d = %d\n", number, sumDigits(number));

    return 0;
}
