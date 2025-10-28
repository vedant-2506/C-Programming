//Use a ternary operator to find if a number is even or odd. 

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even Number\n") : printf("Odd Number\n");

    return 0;
}
