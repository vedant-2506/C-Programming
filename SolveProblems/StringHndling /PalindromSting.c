//Check if a string is a Palindrome (case sensitive).

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[j] != '\0')
        j++;
    j--;   // last character index

    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    return 0;
}
