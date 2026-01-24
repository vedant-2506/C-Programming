ount the number of vowels, consonants, digits, and spaces in a string.

#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}
