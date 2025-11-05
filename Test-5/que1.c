#include<stdio.h>
int main(){
    int n=0,i=0,j=0,s=0;

    printf("Enter an element :");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(s=0;s<=i;s++){
            printf("  ");
        }
        for(j=1;j<=n-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}