

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

   int count1=0 ,count2=0 ,count3=0 ;
   for(i=0;i<n;i++)
   {
    if(A[i]>0)
    {
        count1++;
    }
    else if(A[i]<0)
    {
        count2++;
    }
    else if(A[i] == 0)
    {
        count3++;
    }

   }
   printf("Positive count is : %d \n" ,count1);
   printf("Negative count is : %d \n" ,count2);
   printf("Zero count is : %d \n" ,count3);

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