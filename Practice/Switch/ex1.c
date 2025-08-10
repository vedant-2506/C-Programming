//Read a character (+, -, *, /) and two integers, and perform the corresponding arithmeticoperations.


#include<stdio.h>
int main()
{
    int a=0,b=0;
    float ans=0;
    char op;

    printf("Enter oprator :");
    scanf("%c",&op);

    printf("Enter numbers :");
    scanf("%d%d",&a,&b);

     

    switch(op) 
    {
        case '+':
        printf("Addtion of %d and %d is %f. \n",a,b,ans=a+b);
        break;

        case '-':
        printf("Substraction of %d and %d is %f. \n",a,b,ans=a-b);
        break;

        case '*':
        printf("Multipletion of %d and %d is %f. \n",a,b,ans=a*b);
        break;

        case '/':
        printf("addtion of %d and %d is %f. \n",a,b,ans=a/b);
        break;

        defult:
        printf("Invaild oprator");

    }

    return 0;
}