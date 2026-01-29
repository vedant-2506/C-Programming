//Find the length of the longest substring without repeating characters.


#include <stdio.h>

int main() {
    char str[200];
    int i, j, maxLen = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        int visited[256] = {0};
        int len = 0;

        for(j = i; str[j] != '\0'; j++) {
            if(visited[(int)str[j]] == 1)
                break;

            visited[(int)str[j]] = 1;
            len++;
        }

        if(len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);

    return 0;
}
