//Calculate the factorial of a number   n!

#include<stdio.h>
int main()
{
    int n=0,r=0 ,i=0;
    long long int ans=1;

    printf("Enter number to factorial  :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        ans*=i;
    }

    printf("Factorial of %d is %lld \n",n,ans);

    return 0;
}