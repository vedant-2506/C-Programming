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


    while(n>0)
    {
        
       r=n%10;
       ans=(ans*10)+r;
       n=n/10;
       i++;
    }

   printf("%d \n",ans);

    return 0;

}