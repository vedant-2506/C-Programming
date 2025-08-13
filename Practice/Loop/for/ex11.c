// ​Print the first n terms of the Fibonacci series


#include<stdio.h>
int main()
{
    int n=0,i=0;
    int ans=0;
    int f=0,s=1 ,t=0;

    printf("Enter number  :");
    scanf("%d",&n);

    for(i=3;i<=n;i++)
    {
        t=s+f;
        printf("%d\n",t);
        f=s;
        s=t;
    }

    


    return 0;
}