//Move all zeros to the end of an array without changing the order of non-zero elements.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, index = 0;
    int *arr;

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

    // Move non-zero elements to front
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with zeros
    while(index < n) {
        arr[index++] = 0;
    }

    printf("Array after moving zeros to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
