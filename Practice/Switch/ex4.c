//6Read a grade character and print remarks based on the grade using switch-case.

#include<stdio.h>
int main()
{
    char grd;

    printf("Enter grade   :");
    scanf("%c",&grd);

    switch(grd) 
    {
        case 'A':
        printf("Excellient. \n");
        break;

        case 'B':
        printf("Very Good. \n");
        break;

       case 'C':
        printf("Good. \n");
        break;

        case 'D':
        printf("Need improvement. \n");
        break;

        case 'E':
        printf("Pass. \n");
        break;

        case 'F':
        printf("Fail. \n");
        break;

        defult:
        printf("Invaild grad \n");

    }

    return 0;
}
