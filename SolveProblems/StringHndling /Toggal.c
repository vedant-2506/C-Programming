//Toggle the case of every character in a string (Upper -> Lower, Lower -> Upper).

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}

