//Print the smallest number less than or equal to N that is divisible by both 4 and 6.

#include<stdio.h>
int main()
{
   int i=0, n=0;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%4 == 0 && i%6==0)
        {
        printf("%d \n",i);
        
        break;
        }

    }

    

    return 0;
}