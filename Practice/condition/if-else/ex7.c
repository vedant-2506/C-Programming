//Check if a character is a vowel or consonant.

#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch == 'A' || ch == 'E' || ch == 'I' || ch  == 'O' || ch == 'U'  ||
     ch == 'a' || ch == 'e' || ch == 'i' || ch  == 'o' || ch == 'u' ) 
     {
        printf("'%c' a character is a vowel.\n", ch);
    } 
    else 
    {
        printf("%c a character is a consonant.\n", ch);
    }

    return 0;
}
