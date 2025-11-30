//Skip printing odd numbers in a loop using continue.

#include <stdio.h>

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)  // odd number
            continue;    // skip odd numbers
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
