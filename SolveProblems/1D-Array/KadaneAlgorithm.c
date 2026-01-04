//Implement Kadane’s Algorithm to find the contiguous subarray with the largest sum.

#include <stdio.h>

int main() {
    int a[10] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;

    int maxSum = a[0];
    int currentSum = a[0];

    for(int i = 1; i < n; i++) {
        if(currentSum + a[i] > a[i])
            currentSum = currentSum + a[i];
        else
            currentSum = a[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
