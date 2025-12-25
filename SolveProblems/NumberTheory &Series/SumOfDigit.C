//Write a program to calculate the sum of digits of a number until it becomes a single-digit number

#include<stdio.h>
void SumDigit(int );
int main ()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    SumDigit(n);

    return 0;
}

void SumDigit(int n){
    int sum =0,m=0;
     
   
   while(n > 0){
    m= n%10;
    sum=sum+m;
    n=n/10;
   } 

    printf("Sum is %d.",sum);
}