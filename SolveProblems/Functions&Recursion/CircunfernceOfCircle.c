//Write a function to calculate the area and circumference of a circle given radius.

#include <stdio.h>

#define PI 3.14159

void circle(float r, float *area, float *circumference) {
    *area = PI * r * r;
    *circumference = 2 * PI * r;
}

int main() {
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    circle(radius, &area, &circumference);

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
