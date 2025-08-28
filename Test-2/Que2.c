//Question 2

#include<stdio.h>
int main()
{
    int a=0,b=0;

    printf("Enter 2 digits :");
    scanf("%d %d",&a,&b);

    (a<b) ? printf("%d is large number .\n",b) : printf("%d is large number .\n",a) ;
    
    return 0;
}