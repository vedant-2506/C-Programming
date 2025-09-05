//Program to keep summing until the user enters a negative number, then break the loop and print the sum.

#include<stdio.h>
int main()
{
    int i=0,num=0,ans=0;

    int n = 10;
    
   
    for(i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&num);

        if(num>0)
        {
            ans+= num;
           
        }

        else
        break;
    }

    printf("Answer is %d  \n",ans);

    return 0;
}