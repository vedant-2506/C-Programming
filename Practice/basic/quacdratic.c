

#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c;

    printf("Enter a,b and c coefficent value to find  root of quadratic euation ");
    scanf("%d%d%d",&a,&b,&c);

    int d=2*a;
    double  s =sqrt(4*a*c);

    double x= (-b+s)/d;
    double y= (-b-s)/d;

    printf("root is %lf and %lf ." ,x,y);
    
    return 0;
}