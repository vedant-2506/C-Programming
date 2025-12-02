//Count the number of good pairs in this array. A pair (i, j) is called good 
//if arr[i] == arr[j] and i < j.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check good pairs
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
    }

    printf("Number of good pairs = %d\n", count);

    free(arr);
    return 0;
}
