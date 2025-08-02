// ​//Accept an integer 𝑥 and compute 
// //a.​ 𝑥^2     b. ​ 𝑥^2  + 2𝑥

#include<stdio.h>
int main()
{
    int x=0;

    printf("Find valu of x^2  andx^2  + 2x\n");
    printf("Enter a value of x:");
    scanf("%d",&x);

    printf("Value of x^2  is %d .\n",x*x);

    printf("Value of x^2+2x is %d \n", x*x + 2*x );

    return 0;


}