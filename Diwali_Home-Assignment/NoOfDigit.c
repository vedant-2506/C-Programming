//Count and display the number of digits in a number using a while loop

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    if (temp == 0) {
        count = 1;   // Special case: 0 has 1 digit
    } else {
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }

    printf("Number of digits in %d = %d\n", n, count);

    return 0;
}
