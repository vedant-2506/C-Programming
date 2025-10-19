#include<stdio.h>
int main()
{
    int arr[5];
    int i=0,j=0,k=0;

    //print array 
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is \n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //find  two number sum is 5 
    for(k=0;k<5;k++)
    {
        for(j=k+1;j<5;j++)
        {
            if( arr[k] + arr[j] == 5)
            {
                printf("%d and %d is sum of 5 . \n",k,j);
            }
        }
    }
    return 0;
}