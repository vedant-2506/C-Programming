//Find the intersection of two arrays (common elements).


#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6};
    int b[5] = {4, 5, 6, 7, 8};
    int n1 = 6, n2 = 5;
    int found;

    printf("Common elements:\n");

    for(int i = 0; i < n1; i++) {
        found = 0;

        // check duplicate in first array
        for(int k = 0; k < i; k++) {
            if(a[i] == a[k]) {
                found = 1;
                break;
            }
        }

        if(found) continue;

        // check in second array
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
