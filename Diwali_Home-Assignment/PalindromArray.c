//Check if an array is a palindrome.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, isPalindrome = 1;
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

    // Check palindrome
    for(i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The array is a palindrome.\n");
    else
        printf("The array is NOT a palindrome.\n");

    free(arr);
    return 0;
}
