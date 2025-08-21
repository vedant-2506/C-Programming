#include<stdio.h>
int main()
{
    int n=0,i=0,a=0 ;

    printf("Enter  number of times");
    scanf("%d",&n);

    for(i=0;i<n;++i)
    {

    printf("Enter  number :");
    scanf("%d",&a);

    a%2==0 ? printf("Even \n") : printf("Odd \n") ;

    }
    return 0;
}