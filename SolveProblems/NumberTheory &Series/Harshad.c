//Check if a number is a Harshad Number (divisible by the sum of its digits).
#include<stdio.h>
void Harshad(int);
int main(){
    int n=0;

    printf("Enter a number \n ");
    scanf("%d",&n);

    Harshad(n);

    return 0;
}

void Harshad(int n){
    int sum=0 , m=0;
    int temp =n;
    while(temp > 0){
        
        m = temp %10;
        sum += m;
        temp= temp /10;

    }
      
    if ( n % sum == 0){
        printf("%d is Harshad number .\n",n);
    }
    else {
        printf("%d is not Harshad number .\n",n);
    }

}