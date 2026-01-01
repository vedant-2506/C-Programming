//Initialize an array of 10 integers and print the sum and average of all elements. 

#include <stdio.h>

int main() {
    int a[10] = {5, 8, 12, 3, 7, 10, 6, 9, 4, 11};
    int sum = 0;
    float avg;

    for(int i = 0; i < 10; i++) {
        sum += a[i];
    }

    avg = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
