//check odd even 

#include<stdio.h>
int main()
{
    int a =0;
   

    printf(" To check which number is even or odd  .\n");
    printf("Enter Number : ");
    scanf("%d ",&a);

    if( a % 2 == 0)
    {
        printf("%d is Even   \n ",a);
    }
    
    else
    {
        printf("%d is odd  \n ",a);
   
    }

    return 0;
    
}