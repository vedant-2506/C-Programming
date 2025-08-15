// 3.​ Print the sum of all integers from 1 to n (user input)


#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
