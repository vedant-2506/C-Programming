//Find the first occurrence of a substring within a main string (substring search).

#include <stdio.h>

int main() {
    char str[200], sub[100];
    int i, j, found = -1;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0') {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Substring found at index %d\n", found);
    else
        printf("Substring not found\n");

    return 0;
}
