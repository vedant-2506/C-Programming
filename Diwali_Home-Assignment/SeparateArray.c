//Separate positive and negative numbers into two arrays.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, posCount = 0, negCount = 0;
    int *arr, *posArr, *negArr;

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

    // Count positives and negatives
    for(i = 0; i < n; i++) {
        if(arr[i] >= 0)
            posCount++;
        else
            negCount++;
    }

    // Allocate memory for positive and negative arrays
    posArr = (int*) malloc(posCount * sizeof(int));
    negArr = (int*) malloc(negCount * sizeof(int));

    if(posArr == NULL || negArr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    // Fill the arrays
    int p = 0, q = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] >= 0)
            posArr[p++] = arr[i];
        else
            negArr[q++] = arr[i];
    }

    printf("Positive numbers:\n");
    for(i = 0; i < posCount; i++) {
        printf("%d ", posArr[i]);
    }

    printf("\nNegative numbers:\n");
    for(i = 0; i < negCount; i++) {
        printf("%d ", negArr[i]);
    }

    free(arr);
    free(posArr);
    free(negArr);

    return 0;
}
