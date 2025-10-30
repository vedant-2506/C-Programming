#include<stdio.h>
int main(){
    int n=0;
    int row=0,col=0;
   
    //0.Accept dimension of a nxn matrix
    printf("Enter no of rows and columns:");
    scanf("%d",&n);

    int A[n][n];

    //1.
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

    //2.Compute and print the sum of all the elements in the 0th row
    int add=0;
    for(col=0;col<n;col++){
        add +=A[0][col];
    }
    printf("The sum of all the elements in the 0th row is %d \n",add );


    //3.Compute and print the multiplication of all elements in the 1st column
    int mul=1;
    for(row=0;row<n;row++){
        mul *=A[row][1];
    }
    printf("The multiplication of all elements in the 1st column %d \n",mul );



    //4..Compute and print the sum of all elements in the anti-diagonal
    int i=0 ,SumAD=0;
    for(i=0;i<n;i++){
        SumAD += A[i][n-i-1];
    }
    printf("The sum of all elements in the anti-diagonal %d \n",SumAD);



    //5.Compute and print the sum of all elements in the matrix
    int TotalSum=0;
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            TotalSum+=A[row][col];
        }
    }
    printf("The sum of all elements in the matrix %d \n",TotalSum);


    //6.Print the largest element in the matrix
    //7.Print the smallest element in the matrix
    int max= A[0][0] ,  min= A[0][0];
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(max<A[row][col]  ){
                max=A[row][col];
            }
            if(min>A[row][col]  ){
                min=A[row][col];
            }
        }
    }
    printf("The largest element in the matrix %d \n",max);
    printf("The largest element in the matrix %d \n",min);

    //8.Print the largest (and smallest) element on the diagonal
    int maxD=A[0][0] , minD= A[0][0];;
    for(i=0;i<n;i++){

        if(maxD<A[i][i] ){
            maxD=A[i][i];
        }

        if(minD<A[i][i] ){
            maxD=A[i][i];
        }
    }
    printf("The largest  element on the diagonal %d \n",maxD);
    printf("The  smallest element on the diagonal %d \n",minD);


    printf("\n");
    printf("\n");

    //9.Accept a integer (between 0-n) from user and print that row
    int rn=0;
    printf("Enter rwo numbwr less than %d: " ,n);
    scanf("%d",&rn);
    for(col=0;col<n;col++){
        printf("%d \t",A[rn][col]);
        
    }
    printf("\n");

    //10.Accept an integer (between 0-n) from user and print that column
    int cn=0;
    printf("Enter rwo numbwr less tha2n %d: " ,n);
    scanf("%d",&cn);
    for(row=0;row<n;row++){
        printf("%d \n",A[row][cn]);
    }


    return 0;
}