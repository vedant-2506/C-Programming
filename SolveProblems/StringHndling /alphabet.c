//Check if a string contains only alphanumeric characters.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int isAlnum = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9'))) {
            isAlnum = 0;
            break;
        }
        i++;
    }

    if(isAlnum)
        printf("String is alphanumeric\n");
    else
        printf("String is NOT alphanumeric\n");

    return 0;
}
