//Read two values from user 
// Addtion,substraction ,multiplication ,division 
//with out using third vairaible 


#include<stdio.h>
int main()
{
    int i=0;
    int j=0;

    printf("Enter two values :");
    scanf("%d%d",&i,&j);

    printf("Addition of two numbers is  %d. \n",i+j);

    printf("Substrction  of two numbers is  %d \n",i-j);

    printf("Multipliction  of two numbers is  %d \n",i*j);

    printf("Division of two numbers is  %d.\n",i/j);


    return 0;
}