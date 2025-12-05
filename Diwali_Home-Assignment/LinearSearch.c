//Search for a given number in an array using linear search.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, key, found = 0;
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

    printf("Enter number to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Number not found in array.\n");
    }

    free(arr);
    return 0;
}
