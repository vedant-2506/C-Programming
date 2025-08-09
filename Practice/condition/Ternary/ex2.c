//Use a ternary operator to find if a number is even or odd.

#include<stdio.h>
int main ()
{
    int a=0;

    printf("Check numbr id odd or even \n");
    printf("Enter number :");
    scanf("%d",&a);

    a%2==0?printf("%d is even number \n",a):printf("%d is odd number \n",a);

    return 0;
    
}