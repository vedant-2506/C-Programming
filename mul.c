#include<stdio.h>
int main()
{

    int a=0,b=0;

    printf("Enter two value :\n");
    scanf("%d%d",&a,&b);

    float c=a/b;

    int d=a*b;

    printf("Division of two number is %f. \n",c);
    printf("Mivision of two number is %d. \n",d);

    return 0;
}