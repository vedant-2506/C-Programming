// Print all even numbers between 1 and n (user input) using a while loop.

#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Even numbers between 1 and %d (while loop):\n", n);

    while(i <= n) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}
