#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *A;
    int i=0 ,n=0,max=0;

    //Allocate memory using dynamic Array type 
    printf("Enter array size :");
    scanf("%d",&n);

    A =(int *)malloc(sizeof(int) *n);
    if(A == NULL)
    {
        printf("Memory not found ");
        exit(-1);
    }

    //Enter values in Array from user 
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    
    //print Array
    printf("Array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    

    //Find Min from Array 
    max = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] > max)
        max = A[i];
    } 
    printf("Minimum value from array is %d\n", max);  

    free(A);

    return 0;
}