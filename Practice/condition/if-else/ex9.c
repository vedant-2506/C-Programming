//Check if the input character is the alphabet, digit, or special character.

#include <stdio.h>

int main() 
{
    char ch;

    
    printf("Enter : ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
     {
        printf("'%c' is an alphabet.\n", ch);
    }
    else if (ch >= 0 )
    {
        printf("%c is  a digit \n",ch);
    }
    else
    {
        printf("%c is special symbol \n ",ch);
    }

    return 0;
}

