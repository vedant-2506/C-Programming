#include<stdio.h>
int main()
{
    int a =0;
    int b=0;

    printf(" To check which number is larger  .\n");
    printf("Enter Number : ");
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("%d Number is Larger than %d  \n ",b,a);
    }
    else if(a>b)
    {
        printf("%d Number is Larger than %d  \n ",a,b);
   
    }
    else
    {
        printf("%d and  are equale numbers%d  \n ",b,a);
   
    }

    return 0;
    
}