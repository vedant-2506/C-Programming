//Count the frequency of a specific number in an array.

#include <stdio.h>

int main() {
    int a[10] = {5, 8, 12, 3, 7, 10, 7, 9, 7, 11};
    int key, count = 0;

    printf("Enter number to count frequency: ");
    scanf("%d", &key);

    for(int i = 0; i < 10; i++) {
        if(a[i] == key)
            count++;
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}
