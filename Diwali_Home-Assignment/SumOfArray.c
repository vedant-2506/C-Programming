//Dynamically allocate and read an array of size n. Find the sum and 
//average of allelements in this array..

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);
    return 0;
}
