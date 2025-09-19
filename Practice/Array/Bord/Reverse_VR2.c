//Reverse the whole array.DO not use extra memory space.

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    
    int i=0 ,n=0,j=0;

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

    //Revers the array

 
    i=0;
    j=n-1;
    int c=0

    while(i > j)
    {
        c=A[i];
        A[i]= A[j];
        A[j]=c;
        i++;
        j--;
    
    }
     
    

    free(A);

    return 0;
}