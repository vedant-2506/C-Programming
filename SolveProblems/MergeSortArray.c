//Merge two sorted arrays into a third sorted array. 

#include <stdio.h>

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8, 10};
    int c[10];
    int i = 0, j = 0, k = 0;

    while(i < 5 && j < 5) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < 5)
        c[k++] = a[i++];

    while(j < 5)
        c[k++] = b[j++];

    printf("Merged sorted array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}
