#include<stdio.h>
int main(){
    int n=0;
    int row=0,col=0;
   
   
    printf("Enter no of rows and columns:");
    scanf("%d",&n);

    int A[n][n];
    int B[n][n];
    int C[n][n];

     printf("Enter value of First Matrix ");
    //read matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }


    printf("First Matrix is \n");
    //print matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",A[row][col]);
        }
        printf("\n");
    }

     printf("Enter value of Second Matrix ");
      //read matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&B[row][col]);
        }
    }


    printf("Second Matrix is \n");
    //print matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",B[row][col]);
        }
        printf("\n");
    }
    printf("\n");


    printf("Addtion of two matrix is \n ");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            C[row][col] = A[row][col]  + B[row][col];
            printf("%d \t",C[row][col]);
        }
        printf("\n");
    }
    printf("\n");


     printf("Subtraction of two matrix is \n ");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            C[row][col] = A[row][col]  - B[row][col];
            printf("%d \t",C[row][col]);
        }
        printf("\n");
    }


    return 0;
}