//Accept an integer from user and reverse this number

#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        rem = temp % 10;       // Get last digit
        rev = rev * 10 + rem;  // Append digit to reverse
        temp = temp / 10;      // Remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
