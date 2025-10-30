#include<stdio.h>
int main(){
    int n=0;
    int row=0,col=0;
   
   
    printf("Enter no of rows and columns:");
    scanf("%d",&n);

    int A[n][n];

   
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
    int value=0 ,ans=0;
    printf("Enter a value to multiply whole matrix: ");
    scanf("%d",&value);

    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            ans =value *A[row][col];
            printf("%d \t",ans );
        }
        printf("\n");
    }



    return 0;
}