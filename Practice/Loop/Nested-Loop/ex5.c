//To check amicable

#include <stdio.h>

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (sumOfDivisors(a) == b && sumOfDivisors(b) == a)
        printf("%d and %d are Amicable numbers\n", a, b);
    else
