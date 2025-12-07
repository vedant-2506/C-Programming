//Write a program to find the second largest and second smallest element in an array.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(i = 0; i < n; i++) {
        int x = arr[i];

        // Largest & second largest
        if(x > largest) {
            secondLargest = largest;
            largest = x;
        } else if(x > secondLargest && x != largest) {
            secondLargest = x;
        }

        // Smallest & second smallest
        if(x < smallest) {
            secondSmallest = smallest;
            smallest = x;
        } else if(x < secondSmallest && x != smallest) {
            secondSmallest = x;
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    printf("Smallest element: %d\n", smallest);
    printf("Second smallest element: %d\n", secondSmallest);

    free(arr);
    return 0;
}
