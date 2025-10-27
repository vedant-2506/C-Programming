//Input two numbers, nd the maximum using the ternary operator

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("Maximum = %d\n", max);

    return 0;
}
