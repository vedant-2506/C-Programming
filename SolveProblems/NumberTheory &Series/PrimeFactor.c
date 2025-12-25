// Write a program to print the Prime Factors of a number (e.g., Input 12 -> Output 2, 2, 3).

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors: ");

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    return 0;
}
