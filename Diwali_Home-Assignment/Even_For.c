//Print all even numbers between 1 and n (user input) using a for loop

#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Even numbers between 1 and %d (for loop):\n", n);
    
    for(int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
