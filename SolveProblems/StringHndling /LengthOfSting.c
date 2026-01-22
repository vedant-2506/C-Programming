//Calculate the length of a string without using strlen().

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);   // use fgets in real programs

    while(str[length] != '\0') {
        length++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}
