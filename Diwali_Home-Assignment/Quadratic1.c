#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double result;

    printf("Enter two integers x and y:\n");
    scanf("%d %d", &x, &y);

    result = pow(x, 3) + 3 * pow(x, 2) + 4 * x + pow(y, 3) + 2 * pow(x, 2);

    printf("Result of expression (x³ + 3x² + 4x + y³ + 2x²) = %.2lf\n", result);

    return 0;
}
