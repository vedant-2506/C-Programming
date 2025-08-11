//Print the sum of all odd numbers from 1 to n (user input)

#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    int ans=0;

    printf("Print even numbers \n" );
    printf("Enter a number :");
    scanf("%d",&n);


    for(i=0;i<=n;i++)
    {
        if(i%2==1)
        {
        ans+=i;
        }
    }

    printf("%d \n",ans);

    return 0;

}