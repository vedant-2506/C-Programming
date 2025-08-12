//Print the multiplication table for a given number

#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    float ans=0;

   
    printf("Enter a number for multipliction table :");
    scanf("%d",&n);


    for(i=1;i<=10;i++)
    {
        
        printf("%d \n",i*n);
    }

   

    return 0;

}