//Swap two numbers using a third variable

#include<stdio.h>
int main(){
    int a=0,b=0,c=0;

    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("Two numbers after swaping \n");
    printf("%d \t  %d \n",a,b);

    return 0;

}