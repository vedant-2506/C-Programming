// Create a second array that contains elements of the first array in reverse order. 

#include <stdio.h>

int main() {
    int a[10] = {5, 8, 12, 3, 7, 10, 6, 9, 4, 11};
    int b[10];
    int i, j = 0;

    for(i = 9; i >= 0; i--) {
        b[j] = a[i];
        j++;
    }

    printf("Reversed array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
