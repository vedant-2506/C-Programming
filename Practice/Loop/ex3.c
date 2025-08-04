#include<stdio.h>
int main()
{
    int a =0;
    int b=0;
    int c=0;

    printf(" To check which number is larger  .\n");
    printf("Enter Number : ");
    scanf("%d %d%d",&a,&b,&c);


    if (a >= b && a >= c)
     {
        if (a==b && b==c )
        {
         printf("All are equale numbers .\n");  
        }
        else if (a==b )
        {
            printf("%d and %d are equale .\n",a,b);
        }
        else if (a==c)
        {
            printf(" %d and %d are equale .\n",a,c);
        }
        else{
            printf("%d is large number .\n",a);
        }
     }


     else if (b >= a && b >= c)
     {
        if (b==a& a==c )
        {
         printf("All are equale numbers .\n");  
        }
        else if (b==a )
        {
            printf("%d and %d are equale .\n",a,b);
        }
        else if (b==c)
        {
            printf(" %d and %d are equale .\n",b,c);
        }
        else{
            printf("%d is large number .\n",b);
        }
     }

     else if (c >= a && c >= b)
     {
        if (c==b && c==a )
        {
         printf("All are equale numbers .\n");  
        }
        else if (c ==a  )
        {
            printf("%d and %d are equale .\n",a,c);
        }
        else if (b ==c)
        {
            printf(" %d and %d are equale .\n",b,c);
        }
        else{
            printf("%d is large number .\n",c);
        }
     }

    return 0;
    
}