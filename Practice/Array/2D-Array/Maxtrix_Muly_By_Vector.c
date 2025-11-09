#include<stdio.h>
int main(){
    int n=0;
     int i=0;
    int row=0,col=0;
   
    //Accept dimension of a nxn matrix
    printf("Enter no of rows and columns:");
    scanf("%d",&n);

    int A[n][n];

    //read matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }


    printf("MAtrix is \n");
    //print matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",A[row][col]);
        }
        printf("\n");
    }

    printf("\n");


    //Accept n size of attay 
    printf("Enter value of Vector  :\n");

    int B[n][1];  

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i][0]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i][0]);
        printf("\n");
    }
    printf("\n");

    //multiplication of matrix with array
    int ANS[n][1];
    
    printf("Multiplication of matrix with array: \n");

    for(row=0;row<n;row++){
        int add=0;
        for(col=0;col<n;col++){
            int mul = 1;
            mul =  A[row][col] * B[col][0];
            add +=mul;
           

            }
            ANS[row][0] = add;
        }
    

    printf("Answer is :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ANS[i][0]);
        printf("\n");
    }
    printf("\n");

    return 0;
}   
