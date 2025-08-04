

#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c;

    printf("Enter a,b and c coefficent value to find  root of quadratic euation ");
    scanf("%d%d%d",&a,&b,&c);

    int s =sqrt( (b*b)-(4*a*c) );
    int d = 2*a;

    float x1 = -b + s/ d ;
    float x2= -b - s/d ;

     

    printf("root is %lf and %lf ." ,x1,x2);
    
    return 0;
}