#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    
    int i=0 ,n=0,j=0;
    int sum=0 ;

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

   //count positive ,negative and zero numbers in array 

   int pos=0 ,neg=0 ,zero=0 ;
   for(i=0;i<n;i++)
   {
    if(A[i]>0)
    {
        pos++;
    }
    else if(A[i]<0)
    {
        neg++;
    }
    else if(A[i] == 0)
    {
        zero++;
    }

   }
   printf("Positive count is : %d \n" ,pos);
   printf("Negative count is : %d \n" ,neg);
   printf("Zero count is : %d \n" ,zero);

   printf("\n");

   //pair with positive sum 
   printf("pair with positive sum \n");
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(  (A[i]+A[j])   >0 )
        printf("(%d , %d )  \n",A[i],A[j]);
    }
   }

    free(A);

    return 0;
}