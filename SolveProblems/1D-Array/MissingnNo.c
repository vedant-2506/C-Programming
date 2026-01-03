//Find the missing number in a sequence of integers from 1 to N.

#include <stdio.h>

int main() {
    int a[9] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int n = 10;
    int expectedSum, actualSum = 0;

    expectedSum = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++) {
        actualSum += a[i];
    }

    printf("Missing number = %d\n", expectedSum - actualSum);

    return 0;
}
