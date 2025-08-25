//Find and display all prime numbers between 1 and 1000000

#include <stdio.h>
#include <math.h>

int main() 
{
    int n=0, i=0, flag;

    printf("Prime numbers between 1 and 1000000:\n");

    for (n = 2; n <= 1000000; n++) 
    {
        flag = 1;
        for (i = 2; i <= sqrt(n); i++)
         {
            if (n % i == 0) 
            {
                flag = 0;
                break;
            }
        }
        if (flag=1) 
        {
            printf("%d\n", n);
        }
    }
    return 0;
}

