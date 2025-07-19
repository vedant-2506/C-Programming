#include<stdio.h>
int main()
{
    int a=0;

    printf("Enter number to check number is positive or nigative");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Number %d is positive.",a);

    }
    else if(a<0)
    {
        printf("Number is %d is negative .",a );

    
    }
    else
        
        printf("Number is zero.");

     return 0;
}