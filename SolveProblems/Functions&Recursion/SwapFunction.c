//Write a function to swap two numbers (Call by Value vs Call by Reference).
 
#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swapValue: x = %d, y = %d\n", x, y);
    swapValue(x, y);
    printf("After swapValue: x = %d, y = %d\n", x, y);

    return 0;
}
