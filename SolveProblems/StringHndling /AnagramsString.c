//Check if two strings are Anagrams of each other.

#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq[256] = {0};
    int i = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[i] != '\0') {
        freq[(int)str1[i]]++;
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        freq[(int)str2[i]]--;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Strings are NOT Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");
    return 0;
}
