//Accept a number from user and check if it is prime or composite

#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a prime or composite number.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is a Composite Number\n", n);

    return 0;
}
