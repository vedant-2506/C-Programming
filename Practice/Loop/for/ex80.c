//Reverse a number entered by the user

#include<stdio.h>
int main()
{
    int i=1;
    int n=0;
    int ans=0;
    int r=0;

   
    printf("Enter a number and reverse  :");
    scanf("%d",&n);


    for(;n>0;i++)
    {
        
       r=n%10;
       ans=(ans*10)+r;
       n=n/10;
    }

   printf("%d \n",ans);

    return 0;

}