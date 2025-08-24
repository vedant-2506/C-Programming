//Print a menu-driven calculator: repeat operations until the user chooses to exit (do-while).

#include<stdio.h>
int main()
{
    int a=0,b=0,ans=0 ,c=0;

    do{
        printf(" \n");
        printf(" \n --  Calculator  -- \n");
        printf("1)Addtion of two number  \n" );
        printf("2)Substaction of two number \n" );
        printf("3)Multypition of two number \n" );
        printf("4)Divion of two number \n" );
        printf("5) Exit\n");
        printf("Emter  your choice ");
        scanf("%d",&c);

        if(c>0 && c<5)
        {
            printf("Enter first number :");
            scanf("%d",&a);
            printf("Enter second number :");
            scanf("%d",&b);
        }


        switch(c)
        {
            case 1:
            printf("Addition of two number is %d",a+b);
            break;

            case 2:
            printf("Substraction  of two number is %d",a-b);
            break;

            case 3:
            printf("Multipication  of two number is %d",a*b);
            break;

            case 4:
            if(b==0)
            {
            printf("Erro : Division by 0 not allowed");
            }
            else
            {printf("Division  of two number is %d",a/b);
            }
            break;
            case 5:
            printf("Exiting program...\n");
            break;

            default:
            printf("Invalid choice! Please try again.\n");

        }
    }
    while(c!=5);

    return 0;
}