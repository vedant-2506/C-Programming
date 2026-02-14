//Print the Nth Fibonacci term using a recursive function.

#include <stdio.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter position (n): ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d = %d\n", n, fibonacci(n));

    return 0;
}
