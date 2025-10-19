#include <stdio.h>

int main() {
    int a = 0, b = 0;
    int sum = 0, sub = 0, mul = 0;
    float div = 0;

    printf("Enter two numbers (for division, second number should not be 0):\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;

    if (b != 0)
        div = (float)a / b; // cast to float to get decimal result
    else
        printf("Division not possible (denominator is 0)\n");

    printf("Addition of two numbers is: %d\n", sum);
    printf("Subtraction of two numbers is: %d\n", sub);
    printf("Multiplication of two numbers is: %d\n", mul);

    if (b != 0)
        printf("Division of two numbers is: %.2f\n", div);

    return 0;
}
