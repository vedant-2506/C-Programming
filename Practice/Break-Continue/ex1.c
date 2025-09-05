//Skip printing odd numbers in a loop using continue.

#include<stdio.h>
int main()
{
    int i=0,num=0;

    printf("Enter number :");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        if(i%2==1)
        continue;
        
        else
        printf("%d \n",i);
    }

    return 0;
}