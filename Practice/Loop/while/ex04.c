// 4.​ Print the sum of all odd numbers from 1 to n (user input)

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum of odd numbers = %d\n", sum);
    return 0;
}
