//Write a program that reads three positive numbers a, b, and c which represent the lengths of the sides of a triangle ,
//and check triangle type  

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three positive side lengths of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check if triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        printf("It is a valid triangle.\n");

        // Categorize triangle
        if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");
        else if (a == b || a == c || b == c)
            printf("It is an Isosceles triangle.\n");
        else
            printf("It is a Scalene triangle.\n");
    }
    else {
        printf("It is NOT a valid triangle.\n");
    }

    return 0;
}
