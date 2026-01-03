//Move all zeros to the end of the array while maintaining the order of non-zero elements.

#include <stdio.h>

int main() {
    int a[10] = {1, 0, 3, 0, 5, 6, 0, 7, 0, 9};
    int n = 10;
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[index] = a[i];
            index++;
        }
    }

    while(index < n) {
        a[index] = 0;
        index++;
    }

    printf("Array after moving zeros:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
