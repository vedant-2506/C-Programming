//​ Write a program to check if a given number is a power of 2 using loops.Mid (Complex Iteration)

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Not a power of 2\n");
        return 0;
    }

    while(n > 1) {
        if(n % 2 != 0) {
            printf("Not a power of 2\n");
            return 0;
        }
        n = n / 2;
    }

    printf("Power of 2\n");
    return 0;
}
