//Sum of squares of first n numbers

#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    int ans=0;

   
    printf("Enter a number for sum of square of 1st n number   :");
    scanf("%d",&n);


    for(i=1;i<=10;i++)
    {
        ans+=i*i;
        
    }

    printf("%d \n",ans);

    return 0;

}