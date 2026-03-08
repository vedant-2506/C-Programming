//Calculate the average of positive numbers entered by the user.

#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0;

    printf("Enter positive numbers (enter a negative number to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0)
            break;

        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No positive numbers entered.\n");
    } else {
        printf("Average = %.2f\n", sum / count);
    }

    return 0;
}
