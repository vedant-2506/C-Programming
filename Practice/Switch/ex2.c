//Take a number (1–7) and print the day of the week using a switch


#include<stdio.h>
int main()
{
    int n=0;

    printf("Enter numer  as sequence of week and check which day on this number   :");
    scanf("%d",&n);

    switch(n) 
    {
        case 1:
        printf("Sunday. \n");
        break;

        case 2:
        printf("Monday. \n");
        break;

       case 3:
        printf("Tuesday. \n");
        break;

        case 4:
        printf("Wensday. \n");
        break;

        case 5:
        printf("Thrsday. \n");
        break;

        case 6:
        printf("Friday. \n");
        break;

        case 7:
        printf("Saturday. \n");
        break;

        defult:
        printf("Invaild Number");

    }

    return 0;
}
