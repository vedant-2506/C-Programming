//Calculate the factorial of a number   n!

#include<stdio.h>
int main()
{
    int n=0,r=0 ,i=1;
    long long int ans=1;

    printf("Enter number to factorial  :");
    scanf("%d",&n);

    while(i<=n)
    {
        ans*=i;
        i++;
    }

    printf("Factorial of %d is %lld \n",n,ans);

    return 0;
}