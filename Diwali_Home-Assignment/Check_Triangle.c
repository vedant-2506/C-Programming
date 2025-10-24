//. Read three angles of a triangle and check whether the triangle is valid. A triangle is valid if: Each angle is greater than 0 and sum of all three angles is 180 .

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180)) {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
