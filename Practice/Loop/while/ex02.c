// 2.​ Print all even numbers between 1 and n (user input)


#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i += 2; // skip odd numbers
    }
    return 0;
}
