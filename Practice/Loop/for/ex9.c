//Count and display the number of digits in a number

#include<stdio.h>
int main()
{
    int n=0,r=0 ,count=0;

    printf("Enter number and count the number :");
    scanf("%d",&n);

    for(;n>0;)
    {
        r=n%10;
        count ++ ;
        n=n/10;
    }

    printf("Number of digit is %d \n",count);

    return 0;
}