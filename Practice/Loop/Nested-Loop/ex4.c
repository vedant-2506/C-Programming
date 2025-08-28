// Write a program to determine whether two given numbers are amicable numbers
// a.​ Two numbers are said to be amicable if the sum of proper divisors (excluding the
// number itself) of each number equals the other number - (220/284)

#include <stdio.h>

int main() {
    int a, b, i, sumA = 0, sumB = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i < a; i++)
        if (a % i == 0) sumA += i;Write a program to determine whether two given numbers are amicable numbers
// a.​ Two numbers are said to be amicable if the sum of proper divisors (excluding the
// number itself) of each number equals the other number - (220/284)

    for (i = 1; i < b; i++)
        if (b % i == 0) sumB += i;

    if (sumA == b && sumB == a)
        printf("%d and %d are Amicable numbers\n", a, b);
    else
        printf("%d and %d are NOT Amicable numbers\n", a, b);

    return 0;
}


