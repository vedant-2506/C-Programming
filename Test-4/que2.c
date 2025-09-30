#include<stdio.h>
int main(){
    int n=0,i=0,j=0;

    printf("Enter number :");
    scanf("%d",&n);

    i=0;
    while(i<=n){
        j=1;
        while(j<= (n-i) ){
            printf("%d " ,j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}