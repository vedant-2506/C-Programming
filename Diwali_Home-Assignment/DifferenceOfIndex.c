//Find the difference between the sum of even-indexed and odd-indexed elements.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int evenSum = 0, oddSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Difference (Even-index sum - Odd-index sum) = %d\n", evenSum - oddSum);

    free(arr);
    return 0;
}
