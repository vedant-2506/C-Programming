//Count the number of even and odd numbers in this array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int even = 0, odd = 0;

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

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    free(arr);
    return 0;
}
