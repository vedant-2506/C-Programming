//Find the first number greater than n that is divisible by 7.

#include<stdio.h>
int main()
{
    int n=0,i=0;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=n+1;  ;i++)
    {
        if(i%7==0)
        {
            printf("The first number greater than %d divisible by 7 is %d\n", n, i);
            break;
        }
    }
    return 0;
}