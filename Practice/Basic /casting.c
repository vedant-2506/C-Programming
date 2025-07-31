
//convert  flot to integer 
#include <stdio.h>

int main() {
    float x = 5.75;
    int y;

    y = (int)x; 
    printf("Value of float: %.2f\n", x);
    printf("Value of int after explicit cast %d\n", y);

    return 0;
}
