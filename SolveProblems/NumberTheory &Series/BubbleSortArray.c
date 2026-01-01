//Implement Bubble Sort to sort array elements in ascending order. 

#include <stdio.h>

int main() {
    int a[10] = {5, 1, 4, 2, 8, 3, 9, 6, 7, 0};
    int n = 10, temp;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
