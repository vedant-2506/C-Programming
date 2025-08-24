//Read numbers until the user enters 0; compute and print their sum using a do-while loop.

#include <stdio.h>

int main() 
{       
    int num=0, sum = 0;

    do {
        printf("Enter a number  ");
        scanf("%d", &num);

        sum += num;
    } while (num != 0);

    printf("Sum of  numbers = %d\n", sum);

    return 0;      
}
