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

     printf("\n");

    //Print largest element in matrix 
    int max=A[0][0];
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(max < A[row][col]){
                max = A[row][col];
               
            };
            
        }
        
    }
    printf("largest element in matrix  is %d\n",max);
   

    //print smallest element in matrix 
    int min=A[0][0];
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(min > A[row][col]);{
                min= A[row][col];
            }
        }
        
    }
    printf("smallest  element in   of matrix  is %d\n",min);

    //print largest element in daigonal 
    int maxD =A[0][0];
    for(row=0;row<n;row++){
        if(maxD < A[row][row]){
            maxD = A[row][row];
        }
        
    }
    printf("largest element in  diafonal of matrix  is %d\n",maxD);

    return 0;
}