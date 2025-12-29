//Replace all odd numbers in an array with 0 and print the modified array.

#include <stdio.h>

int main() {
    int a[10] = {5, -3, 12, 0, -7, 8, 4, -1, 6, -9};
    int b[10];
    int i, j = 0;

    for(i = 0; i < 10; i++) {
        if(a[i] > 0) {
            b[j] = a[i];
            j++;
        }
    }

    printf("Positive elements:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
