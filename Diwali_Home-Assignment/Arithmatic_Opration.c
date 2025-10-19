//Read two integers, and perform addition, substraction and division with a third variable

#include <stdio.h>

int main() {
    int a = 0, b = 0;
  

    printf("Enter two numbers (for division, second number should not be 0):\n");
    scanf("%d %d", &a, &b);

   
        

    printf("Addition of two numbers is: %d\n", a+b);
    printf("Subtraction of two numbers is: %d\n", a-b);
    printf("Multiplication of two numbers is: %d\n", a-b);

    if (b != 0)
        printf("Division of two numbers is: %.2f\n", a/b);

    return 0;
}
