//Find the maximum and minimum element in an array in a single pass.

#include <stdio.h>

int main() {
    int a[10] = {5, 8, 12, 3, 7, 10, 6, 9, 4, 11};
    int max, min;

    max = min = a[0];

    for(int i = 1; i < 10; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
