//Find the smallest divisor of a number greater than 1 using break.

#include<stdio.h>
int main()
{
    int i=0,num=0;

    printf("Enter number greater than 1:");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            printf("The smallest divisor of %d is %d\n", num, i);
            break;
        }
    }
    return 0;
}