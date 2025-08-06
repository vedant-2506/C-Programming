//Check if a character is uppercase or lowercase.     


#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z' )
    {
        printf("%c is an Uppercase.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is NOT a Lowercase.\n", ch);
    }
    else
    {
        printf("%c is NOT a charator.\n", ch);
    }

    return 0;
}
