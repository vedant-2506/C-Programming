#include<stdio.h>
int main()
{
    int i=0 , m=0 ,n=0;
    int arr[n];

    printf("Enter array size :");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Array is :");
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}