//Find the second largest number in an array without sorting.

#include <stdio.h>

int main() {
    int a[10] = {12, 35, 1, 10, 34, 1, 20, 50, 40, 8};
    int largest, secondLargest;

    largest = secondLargest = -1;

    for(int i = 0; i < 10; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("Second largest number = %d\n", secondLargest);

    return 0;
}
