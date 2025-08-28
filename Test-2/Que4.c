//Question 4
//my Roll no is M2503 sloving qustion by while loop

#include<stdio.h>
int main()
{

    int n=0,i=1;

    printf("Enter number :");
    scanf("%d",&n);

    while ((i<=5))
    {
        if(i%2==1)
        {
            printf("%d -> Odd \n",i);
        }
        else if(i%2==0 && i%4 ==0 )
        {
            printf("%d -> Even and multiple of 4 \n",i);
        }
        else
        {
             printf("%d -> Even and not multiple of 4 \n",i);
        }

        i++;
    }

    return 0;
    
}