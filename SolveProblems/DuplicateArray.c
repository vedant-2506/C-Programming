//Write a program to remove duplicate elements from an array. 

#include <stdio.h>

int main() {
    int a[20] = {5, 3, 8, 3, 5, 9, 8, 1};
    int n = 8;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                for(int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
