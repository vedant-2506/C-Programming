#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;

    printf("Enter int value :");
    scanf("%d",&a);

    printf("Enter floate value :");
    scanf("%f",&b);

    printf("Enter double  value :");
    scanf("%lf",&c);

    printf("Square of  int value is %d \n",a*a);
    printf("Cube of  int value is %d \n",a*a*a);


    printf("Square of  float value is %f \n",b*b);
    printf("Cube of  float value is %f \n",b*b*b);


    printf("Squere of  double value is %lf \n",c*c);
    printf("Cubeof  int value is %lf \n",c*c*c);

    return 0;

}