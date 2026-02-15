//Write a recursive function to calculate the sum of digits of a number.

#include <stdio.h>

int sumDigits(int n) {
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, sumDigits(num));

    return 0;
}
