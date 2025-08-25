//Print multiplication tables from 2 to 11 using nested for loops.

#include<stdio.h>
int main()
{
    int i=0,j=0;
    int n=0;

    printf("Enter number :");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {  
        


        for(j=1;j<=10;j++)
        {
        printf("%d*%d=%d \n",i,j,i*j);

        }
        printf("\n");
    }

    return 0;
}
