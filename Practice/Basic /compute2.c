// Accept an integer 𝑥 and y ,compute 

#include<stdio.h>
#include <math.h>
int main()
{

    int x=0;
    int y=0;

    printf("Enter a value of x:");
    scanf("%d",&x);

    printf("Enter a value of y:");
    scanf("%d",&y);

    int a= 2*(x*x);
    int b= 4*(y*y);
    int c= (x*x*x) +10;

    double d = sqrt(a + b + c);


    printf("Answer  after sloving equatin %2f .\n",d );


    return 0;


    
}