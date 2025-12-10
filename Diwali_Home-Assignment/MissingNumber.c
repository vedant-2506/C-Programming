//Given an array containing numbers from 1 to n with one number missing. 

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0, totalSum;

    printf("Enter n (numbers are from 1 to n): ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements (one number is missing):\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    totalSum = n * (n + 1) / 2;

    printf("Missing number = %d\n", totalSum - sum);

    return 0;
}
