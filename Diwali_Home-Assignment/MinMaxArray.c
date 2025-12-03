//Find the maximum and minimum element in this array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); // dynamic allocation

    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    free(arr); // free memory
    return 0;
}
