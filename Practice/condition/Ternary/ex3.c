//Assign remarks ("Pass"/"Fail") using conditional operators based on marks.

#include<stdio.h>
int main ()
{
    int mark=0;

    printf("Enter yor marks and check pass or fail  \n");
    printf("Enter mark :");
    scanf("%d",&mark);

    mark>40?printf("You are  PASS \n"):printf("your are FAIL \n");

    return 0;
    
}