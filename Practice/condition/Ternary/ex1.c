//​Input two numbers, find the maximum using the conditional operator.

#include<stdio.h>
int main ()
{
    int a=0;
    int b=0;

    printf("Enter two number and check which is maximum number \n");
    printf("Enter two number ");
    scanf("%d%d",&a,&b);



    a<b?printf("%d is maximum ",b):printf("%d is maximum ",a); 

    return 0;
}
