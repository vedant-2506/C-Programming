//Question 3
//my Roll no is M2503 sloving qustion by for loop

#include<stdio.h>
int main()
{
    int n=0,i=0;

    printf("Enter numbr:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
       printf("%d",i);

      if(i>1)
       printf("-");

    }
    
    return  0;
}