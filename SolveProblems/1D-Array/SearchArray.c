//Search for a specific number in an array and print its index (Linear Search). 

#include <stdio.h>

int main() {
    int a[10] = {5, 8, 12, 3, 7, 10, 6, 9, 4, 11};
    int key, i, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++) {
        if(a[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    return 0;
}
