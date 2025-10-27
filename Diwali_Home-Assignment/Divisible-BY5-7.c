//Read a integer- if it is divisible by 5 and 7 print- Hello world else print- Bye.
 
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0)
        printf("Hello World\n");
    else
        printf("Bye\n");

    return 0;
}
