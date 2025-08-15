// 1.​ Print all numbers from 1 to n (user input)


#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    return 0;
}
