#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter value for a=");
    scanf("%d",&a);

    printf("Enter value for b=");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("a=%d and b= %d",a,b);

    return 0;



}
