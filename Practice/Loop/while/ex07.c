//Print the multiplication table for a given number

#include<stdio.h>
int main()
{
    int i=1;
    int n=0;
    float ans=0;

   
    printf("Enter a number for multipliction table :");
    scanf("%d",&n);


    while(i<=10)
    {
        
        printf("%d \n",i*n);
        i++;
    }

   

    return 0;

}