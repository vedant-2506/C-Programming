//Reverse the order of words in a given sentence (e.g., "Hello World" -> "World Hello").

#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    gets(str);

    // Find length
    for(end = 0; str[end] != '\0'; end++);

    // Reverse whole string
    for(i = 0; i < end / 2; i++) {
        char temp = str[i];
        str[i] = str[end - i - 1];
        str[end - i - 1] = temp;
    }

    // Reverse each word
    i = 0;
    while(i < end) {
        start = i;
        while(i < end && str[i] != ' ')
            i++;

        int l = start, r = i - 1;
        while(l < r) {
            char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l++;
            r--;
        }
        i++;
    }

    printf("Reversed sentence: %s\n", str);

    return 0;
}
