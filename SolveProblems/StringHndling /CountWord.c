//Count the total number of words in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i - 1] == ' ')) {
            words++;
        }
        i++;
    }

    printf("Total number of words = %d\n", words);

    return 0;
}

