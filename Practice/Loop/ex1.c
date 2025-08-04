#include<stdio.h>
int main()
{
    int num =0;

    printf(" To check is it Postive or Negative .\n");
    printf("Enter Number : ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("%d Number is Positive \n ",num);
    }
    else if(0>num)
    {
        printf(" %d Number is negative \n",num);
   
    }
    else
    {
        printf(" %d Number is zero \n",num);
   
    }

    return 0;
    
}