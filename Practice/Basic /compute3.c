#include <stdio.h>
#include <math.h>

int main() {
    int x = 0, 
    y = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    
    int num = (5 * x) + (8 * y) + 5;
    double deno= 2 * (x^2);  

    
    

    double result = sqrt(num/ deno);

    printf("Resultis  %.2f\n", result);

    return 0;
}
