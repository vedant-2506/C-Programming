 #include<stdio.h>
#include <stdlib.h>

int main()
{
    int *A;
    int i=0 ,n=0,j=0,temp=0;

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
    printf("Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",A[i]);
    }
    printf("\n");

    
    //convert even to 0 and odd to 1
    for(i=0;i<n;i++)
    {
        if(A[i] %2 == 0){
            A[i] = 0;
        }
        else{
            A[i] = 1;
        }
    }
    
    //sort array
      for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            } 
        }
        
    }

     printf("Final array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",A[i]);
    }
    printf("\n");

    return 0;
}