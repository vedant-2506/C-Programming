//Create a function checkEven() that returns 1 if even, 0 if odd.

#include <stdio.h>

int checkEven(int n) {
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(checkEven(num))
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    return 0;
}
