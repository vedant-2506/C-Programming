//Find the GCD (HCF) and LCM of two numbers


#include <stdio.h>

int main() 
{
    int num1, num2, gcd = 1, lcm, i, min;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    min = (num1 < num2) ? num1 : num2;


    for (i = 1; i <= min; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }

    
    lcm = (num1 * num2) / gcd;

    
    printf("GCD (HCF) of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
