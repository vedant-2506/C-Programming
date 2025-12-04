//Read input into the first array from user. Copy the content of first array into the second array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr1, *arr2;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    arr1 = (int*) malloc(n * sizeof(int));
    arr2 = (int*) malloc(n * sizeof(int));

    if(arr1 == NULL || arr2 == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy contents of arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Second array after copying:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    free(arr1);
    free(arr2);
    return 0;
}
