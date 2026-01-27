//Remove all occurrences of a specific character from a string.

#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    while(str[i] != '\0') {
        if(str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    printf("Modified string: %s\n", str);

    return 0;
}
