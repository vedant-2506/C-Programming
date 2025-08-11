//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n

#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    int ans=0;

    printf("Print even numbers \n" );
    printf("Enter a number :");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        
        
        ans=ans+1/i;
        
    }

    printf("%d \n",ans);

    return 0;

}