

#include<stdio.h>
int main()
{
    char c;

    printf("Enter char :");
    scanf("%c",&c);


    switch(c)
    {

        case 'r':
        printf("Angry \n");
        break;

        case 'g':
        printf("Happy \n");
        break;

        case 'b':
        printf("Sad \n");
        break;

        case 'R':
        printf("Angry \n");
        break;

        case 'G':
        printf("Happy \n");
        break;

        case 'B':
        printf("Sad \n");
        break;

        defult:
        printf("Enter right char \n");

    }
    return 0;
}