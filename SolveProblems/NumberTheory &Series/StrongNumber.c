//Check if a number is a Strong Number (Sum of factorial of digits = original number).

#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
        printf("%d is a Strong Number.\n", n);
    else
        printf("%d is NOT a Strong Number.\n", n);

    return 0;
}
