//Read two integers, compute their quotient and remainder if the second is nonzer

#include <stdio.h>

int main() {
    int a, b, quotient, remainder;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        quotient = a / b;
        remainder = a % b;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }
    else {
        printf("Division not possible! Divisor must not be zero.\n");
    }

    return 0;
}
