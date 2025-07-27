#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter x and y");
    scanf("%d%d",&x,&y);

    //squr(  x^3 + 2x^2 + 3y^2 + y + x  / 2x^2 * y^2  )

    int a= x*x*x ;    // x^3
    int b= 2*(x*x);   // 2xx^2
    int c= 3*(y*y);   // 3y^2

    int  d= 2*(x*x);   // 2 *x^2
    int  e = (y*y);  //y^2

    double ans= sqrt(a+b+c+x+y/ d *e);

    printf("Answer of quadratic equation is %f",ans);
    
}