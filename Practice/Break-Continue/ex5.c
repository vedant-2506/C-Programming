//Print numbers from 1 to N, skipping numbers that are divisible by 3.

#include<stdio.h>
int main()
{
    int n=0,i=0;

    printf("Enter number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
          continue;
        }
        else
        printf("%d \n",i);

    }
    return 0;
}