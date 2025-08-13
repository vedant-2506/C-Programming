//​Check whether a given number is prime or composite

#include<stdio.h>
int main()
{
    int n=0,i=0,flag=0;

    printf("Enter a number :");
    scanf("%d",&n);

    if(n==1)
    {
        printf("%d is not prime or not compoite\n",n);
    }

    for(i=2;i<n/2;i++)
    {
        
        if(i/n==0)
        {
            flag=1;

        }
        else
        {
            flag=0;
        }
    }

    if(flag=1)
    {
        printf("%d is compoite\n",n);
    }
    else
    {
        printf("%d is prime\n",n);
    }

    return 0;
}