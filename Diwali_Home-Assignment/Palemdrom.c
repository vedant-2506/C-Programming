//Test whether a given integer is a palindrome.

#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (rev == n)
        printf("%d is a Palindrome.\n", n);
    else
        printf("%d is NOT a Palindrome.\n", n);

    return 0;
}
