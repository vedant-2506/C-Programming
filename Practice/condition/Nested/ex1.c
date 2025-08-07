#include<stdio.h>
int main()
{
    int mark =0;

    printf("Enter your marks and Check your grad\n");
    printf("Enter your marks outoff 100:");
    scanf("%d",&mark);

    if((90<mark) && (mark >101))
    {
        printf("For %d grad is A\n",mark);
    }
    else if((70<mark) && (mark <91) )
    {
        printf("For %d grad is B\n",mark);
    }
    else if((60<mark) && (mark >71) )
    {
        printf("For %d grad is C\n",mark);
    }
    else if((35<mark) && (mark >61) )
    {
        printf("For %d grad is E\n",mark);
    }
    else 
    {
        printf("For %d grad is F\n",mark);
    }

    return 0;
}