//check odd even 

#include<stdio.h>
int main()
{
    int a =0;
   

    printf(" To check year is leap or not   .\n");
    printf("Enter Year  : ");
    scanf("%d ",&a);

    if( (a % 100 != 0 && a %4==0  ) || (a%400 ==0 )  )
    {
        printf("%d is leap year.   \n ",a);
    }
    
    else
    {
        printf("%d is not leap year   \n ",a);
   
    }

    return 0;
    
}