//Use nested conditional operators to classify a number as positive/negative/zero.



#include<stdio.h>
int main ()
{
    int num=0;

    printf("Check number positive or negative  \n");
    printf("Enter number  :");
    scanf("%d",&num);

    if (num==0)
    {
        printf("number is zero ");
    }
    else
    {
    num >0 ?printf("%d is positive  \n",num):printf("%d is negative  \n",num);
    }

    return 0;
    
}