#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    
    int i=0 ,n=0,j=0;
    int count=0 ;

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
    printf("\n");


    //count number of equale values pair  
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( A[i] == A[j] ){
            count++;
        }
        }
    }
    printf("%d   \n",count);

    return 0;
}