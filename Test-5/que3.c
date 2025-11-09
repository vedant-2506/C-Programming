#include<stdio.h>
int main(){
    int n=0;
    int row=0,col=0;
    
    printf("Enter size of matrix :");
    scanf("%d",&n);

    int A[n][n];

    //1
    //Read array 
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }

    //Print array
    printf("Matrix is :\n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d \t",A[row][col]);
        }
        printf("\n");
    }

    //2.sum of element of  0th row
    int add=0;
    for(col=0;col<n;col++){
        add+=A[0][col];
    }
    printf("Sum of all element in the 0th row %d \n",add);

    //3.Multiplication of all elements in 1st column
    int mult=1;
    for(row=0;row<n;row++){
        mult *= A[row][1];
    }
    printf("Mutiplication  of all element in the 1th row %d \n",mult);

    //4.Sum of all element in anti-daigonal
    int i=0,SAD=0;
    for(i=0;i<n;i++){
        SAD += A[i][n-i-1];
    }
    printf("Sum  of all element in the anti-diagonal %d \n",SAD);

    //5.Sum of elements in matrix
   
    int Aadd=0;
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            Aadd += A[row][col];
        }
    
    }
    printf("Sum of elements in matrix is %d \n",Aadd);
    return 0;
}