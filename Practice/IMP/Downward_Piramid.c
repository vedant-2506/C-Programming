#include<stdio.h>
int main(){
    int n=0;
    int i=0,j=0,s=0,sb=0;

    printf("Enter number of rows:");
    scanf("%d",&n);

    int tn=0;
    for(i=0;i<=n;i++){

        //space
        s=tn;
        while(s>sb){
            printf(" ");
            s--;
        }

        for(j=1;j<=n-i;j++){
            printf("%d ",j);
        }
        printf("\n");
         tn+=1;
        // tn++;
    }

    return 0;
}