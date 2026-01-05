//Find the majority element (an element that appears more than N/2 times).

#include <stdio.h>

int main() {
    int a[] = {2, 2, 1, 1, 2, 2, 2};
    int n = 7;

    int candidate = a[0];
    int count = 1;

    // Step 1: Find candidate
    for(int i = 1; i < n; i++) {
        if(a[i] == candidate)
            count++;
        else
            count--;

        if(count == 0) {
            candidate = a[i];
            count = 1;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == candidate)
            count++;
    }

    if(count > n / 2)
        printf("Majority element = %d\n", candidate);
    else
        printf("No majority element\n");

    return 0;
}
