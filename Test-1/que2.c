#include<stdio.h>
int main()
{
    int n=0 ,i=0;
    printf("Enter values :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%10==4)
        {
            continue;
        }

        printf("%d \n",i);
    }
    return 0;
}