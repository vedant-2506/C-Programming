//Print numbers from 1 to N, but skip those that end in 5 using continue.


#include<stdio.h>
int main()
{
    int i=0, n=0;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%5 == 0 && i%2==1)
        continue;

        else
        printf("%d \n",i);
    }

    return 0;

}