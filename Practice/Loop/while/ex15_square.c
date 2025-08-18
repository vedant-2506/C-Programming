//print a square/triangle/star pattern based on user input (height)

#include<stdio.h>
int main()
{
    int j=0,i=0, n=0;
    

    printf("Enter number to row of square star pattern   :");
    scanf("%d",&n);

    while(i<=n)
    {
        while(j<=n)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}