//Sum of squares of first n numbers

#include<stdio.h>
int main()
{
    int i=1;
    int n=0;
    int ans=0;

   
    printf("Enter a number for sum of square of 1st n number   :");
    scanf("%d",&n);


    while(i<=10)
    {
        ans+=i*i;
        i++;
    }

    printf("%d \n",ans);

    return 0;

}