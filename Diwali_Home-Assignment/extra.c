//Display all elements that occur more than once in an array.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements occurring more than once:\n");

    int found = 0;
    for(i = 0; i < n; i++) {
        int count = 1;
        if(arr[i] == -99999)  // mark visited
            continue;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -99999; // mark as counted
            }
        }

        if(count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(!found)
        printf("No elements occur more than once.");

    return 0;
}
