#include<stdio.h>
int main(){
    int n=0;
    int i=0 ,j=0;
    int row=0,col=0;
    
    //Accept dimension of a nxn matrix
    printf("Enter no of rows and columns:");
    scanf("%d",&n);
    
    int A[n][n];
    int B[n][n];
    
    printf("Enter element of first matrix:\n");
    //read 1st matrix
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }
    
    printf("\n");
    
    //read 2nd matrix
    printf("Enter element of second matrix:\n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&B[row][col]);
        }
    }
    
    //print 1stmatrix
    printf(" First MAtrix is \n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",A[row][col]);
        }
        printf("\n");
    }

    //print 2nd matrix
    printf(" Second MAtrix is \n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",B[row][col]);
        }
        printf("\n");
    }

   

    //multiplication of matrix with array
    int ANS[n][n];
    
    printf("Multiplication of matrix with array: \n");

    for(row=0;row<n;row++){
        
        for(col=0;col<n;col++){
            
            int add=0;
            for(j=0;j<n;j++){
                int mul =0;  
                mul  = A[j][col] * B[row][j];
                add +=mul;

            }
            ANS[row][col] = add;
        }
        }
    

    printf("Answer is :\n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",ANS[row][col]);
        }
        printf("\n");
    }
    return 0;
}   
