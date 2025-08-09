//​Input two numbers, find the maximum using the conditional operator.

#include<stdio.h>
int main ()
{
    int a=0;
    int b=0;

    printf("Enter two number and check which is maximum number \n");
    printf("Enter two number ");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        printf("%d is maximum nuber \n",b);
    }
    else if (a>b)
    {
        printf("%d is maximum nuber \n",a);
 
    }
    else
    {
        ("%d and %d are equale  \n",b,a);
 
    }

    return 0;
}
