//check if a number is a palindrome


#include<stdio.h>
int main()
{
    int i=1;
    int n=0 ;
    int ans=0;
    int r=0;


   
    printf("Enter a number and reverse  :");
    scanf("%d",&n);

    int  n1=n;


    while(n>0)
    {
        
       r=n%10;
       ans=(ans*10)+r;
       n=n/10;

       i++;
    }

    if(ans=n1)
    {
        printf("%d is a palindrome \n",n1);
    }
    else
    {
        printf("%d is not a palindrome \n",n1);
    }

    return 0;

}
