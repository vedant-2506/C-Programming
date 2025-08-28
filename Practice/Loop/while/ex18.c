//Find the GCD (HCF) and LCM of two numbers

#include <stdio.h>

int main() 
{
    int num1, num2, a, b, gcd, lcm;

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

  
    while (a != b) 
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    gcd = a; 



  
    lcm = (num1 * num2) / gcd;

    
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}

