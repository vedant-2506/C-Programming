//Check if an array is sorted in ascending order (return 1 for yes, 0 for no).

#include <stdio.h>

int main() {
    int a[10] = {3, 5, 7, 8, 10, 12, 14, 16, 18, 20};
    int isSorted = 1;

    for(int i = 0; i < 9; i++) {
        if(a[i] > a[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted)
        printf("Array is sorted (1)\n");
    else
        printf("Array is not sorted (0)\n");

    return 0;
}
