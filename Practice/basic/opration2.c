//Read two values from user 
// Addtion,substraction ,multiplication ,division 
//Using third vairaible 


#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int m=0;
    int n=0;

    printf("Enter two values :");
    scanf("%d%d",&i,&j);

    int k=i+j;
    int l=i-j;
    int m=i*j;
    int n=i/j;

    printf("Addition of two numbers is  %d. \n",k);

    printf("Substrction  of two numbers is  %d \n",l);

    printf("Multipliction  of two numbers is  %d \n",m);

    printf("Division of two numbers is  %d.\n",n);


    return 0;
}