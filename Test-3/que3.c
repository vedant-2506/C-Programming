//Reverse the whole array.DO not use extra memory space.

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    
    int i=0 ,n=0,j=0;
    int sum=0 , avg=0;

    //Allocate memory using dynamic Array type 
    printf("Enter array size :");
    scanf("%d",&n);

    A =(int *)malloc(sizeof(int) *n);
    
    if(A == NULL )
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
    printf("Array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",A[i]);
    }
    printf("\n");

   //Find sum and averge of values in array
    for(i=0;i<n;i++)
    {
        sum+=A[i];
    }
    
    avg=sum/n;
    printf("Averrge of array is %d \n",avg);


    free(A);

    return 0;
}