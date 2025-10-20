
// Swap two numbers without using a third variabl

#include <stdio.h>

int main() {
    int a=0,b=0;

    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);


    printf("Before swapping: a = %d, b = %d\n", a, b);

    
    a = a + b;   
    b = a - b;   
    a = a - b;   

    printf("Two numbers after swaping \n");
    printf("%d \t  %d \n",a,b);

    return 0;
}
