//Question 1
#include<stdio.h>
int main()
{
    int amt;

    printf("Enter your amount:");
    scanf("%d",&amt);

    if(amt >200)
    {
        printf("You get 30%, discount on %d. \n",amt);
    }
    else if(amt >101 && amt <=200)
    {
        printf("You get 20%, discount on %d. \n",amt);
    }
    else if(amt <= 100 && amt >50)
    {
        printf("You get 10%, discount on %d. \n",amt);
    }
    else
    {
        printf("You don't get  discount on %d. \n",amt);
    }

    return 0;


}