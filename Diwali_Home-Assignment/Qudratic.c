//Accept an integer x and compute: x2 and x2 +2x

#include <stdio.h>

int main() {
    int x;
    int square, expression;

    printf("Enter an integer x: ");
    scanf("%d", &x);

    square = x * x;           // x²
    expression = x * x + 2 * x; // x² + 2x

    printf("x² = %d\n", square);
    printf("x² + 2x = %d\n", expression);

    return 0;
}
