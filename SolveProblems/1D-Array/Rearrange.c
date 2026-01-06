//Rearrange an array such that positive and negative numbers are placed alternatively.

#include <stdio.h>

int main() {
    int a[10] = {1, -2, 3, -4, -1, 4, -6, 7, -8, 9};
    int n = 10;

    int pos[10], neg[10];
    int p = 0, ne = 0;

    // Separate positives and negatives
    for(int i = 0; i < n; i++) {
        if(a[i] >= 0)
            pos[p++] = a[i];
        else
            neg[ne++] = a[i];
    }

    int i = 0, j = 0, k = 0;

    // Merge alternately
    while(i < p && j < ne) {
        a[k++] = pos[i++];
        a[k++] = neg[j++];
    }

    // Copy remaining elements
    while(i < p)
        a[k++] = pos[i++];

    while(j < ne)
        a[k++] = neg[j++];

    printf("Rearranged array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
