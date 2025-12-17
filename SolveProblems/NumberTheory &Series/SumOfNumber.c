// Print all numbers between 1 and N that are divisible by both 3 and 5 but not by 10.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Numbers divisible by 3 and 5 but not by 10:\n");

    for(i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0 && i % 10 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
