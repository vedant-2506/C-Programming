
// literals value of integer float and charator 

#include<stdio.h>
int main()
{
    int i=0;
    float j=0;
    char c;

    printf("Enter any asscii value or charator  . \n");
    scanf("%c",&c);

    printf(" %c\n ",c);
    
    //integer 
    printf("Enter any number of binary,decimal ,hexadecmal or octal . \n");
    scanf("%d",&i);

    printf("Number is %d \n ",i);


    //floting pooint 
    printf("Enter any number float point value  . \n");
    scanf("%f",&j);

    printf("Number is %f\n ",j);


    return 0;
}