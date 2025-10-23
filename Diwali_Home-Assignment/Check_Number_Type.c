//Read an integer and determine whether it is odd or even also check if it is positive,negative, or zero.

#include <stdio.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check positive, negative, or zero
    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("The number is zero.\n");

    // Check odd or even (only if not zero)
    if (num != 0) {
        if (num % 2 == 0)
            printf("%d is even.\n", num);
        else
            printf("%d is odd.\n", num);
    }

    return 0;
}
