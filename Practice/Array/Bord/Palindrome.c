#include<stdio.h>
#include <stdlib.h>
int main()
{int *A;
    int i=0 ,n=0,min=0,j=0;

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
        printf("%d \t",A[i]);
    }
    printf("\n");

    //to check Array is Palindrom

    i=0;
    j=n-1;
    while(i<j)
    {
        if(A[i] != A[j])
        {
            printf("Array is not  a palindrom. \n");
            exit(0);
        }
        i++;
        j--;
    }

    printf("Array is   a palindrom. \n");

    free(A);

    return 0;
}