//Rotate an array to the left by K positions.

#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5};
    int n = 5, k;
    int temp;

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n;   // handle k > n

    for(int i = 0; i < k; i++) {
        temp = a[0];
        for(int j = 0; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }

    printf("Array after left rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
