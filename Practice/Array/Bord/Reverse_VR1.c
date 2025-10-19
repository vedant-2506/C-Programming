//Reverse the whole array .Using extra memory space.

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    int *B;
    int i=0 ,n=0,j=0;

    //Allocate memory using dynamic Array type 
    printf("Enter array size :");
    scanf("%d",&n);

    A =(int *)malloc(sizeof(int) *n);
    B =(int *)malloc(sizeof(int) *n);
    if(A == NULL || B == NULL)
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

    //Revers the array

 
    i=n-1;
    j=0;

    while(i >= 0)
    {
        B[j]=A[i];
        i--;
        j++;
    }
     
    //print Array B 
    printf("Array After reverse \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",B[i]);
    }
    printf("\n");

    free(A);
    free(B);

    return 0;
}