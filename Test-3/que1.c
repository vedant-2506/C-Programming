#include<stdio.h>
int main()
{
    int i,n=0;

    printf("Enter negative value :");
    scanf("%d",&n);

    if(n>=0)
    {
        printf("Enter correct number \n");
        return 1;
    }

    i=-1;
    while(i>=n)
    {
        if(i%5==0 && i%3==0)
        {
            printf("%d -> Epic Combo1! \n  ",i);
        }
        else if(i%5==0 && i%2==0)
        {
            printf("%d -> Fizz Twos! \n  ",i);
        }
        else if(i%5==0 )
        {
            printf("%d -> Buzz Deep1! \n  ",i);
        }
        else if( i%3==0)
        {
            printf("%d -> Fizz! \n  ",i);
        }
        else
        {
            printf("%d -> chill! \n  ",i);
        }

        i--;
    }

    return 0;
}