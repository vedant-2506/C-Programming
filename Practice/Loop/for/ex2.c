//Print all even numbers between 1 and n (user input)

#include<stdio.h>
int main()
{
    int i=0;
    int n=0;

    printf("Print even numbers \n" );
    printf("Enter a number :");
    scanf("%d",&n);


    for(i=0;i<=n;i++)
    {
        if( i%2==1)
        {
        printf("%d \n",i);
        }
  
    }

     return 0;

}