//print a square/triangle/star pattern based on user input (height)

#include<stdio.h>
int main()
{
    int j=0,i=0, n=0;
    

    printf("Enter number to row of square star pattern   :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}