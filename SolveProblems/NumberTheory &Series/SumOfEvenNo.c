//Find the sum of all even factors of a user-entered number.

#include<stdio.h>
void Sumdigit(int);
int main(){
    int n=0;

    printf("Enter a number:\n");
    scanf("%d",&n);

    Sumdigit(n);

    return 0;
}

void Sumdigit(int n){
    int i=0,sum=0;

    for(i=1;i<=n;i++){
        if(n%i == 0 && i%2 == 0){
            sum+=i;
        }
    }

    printf("Sum of Even number is %d \n",sum);
}