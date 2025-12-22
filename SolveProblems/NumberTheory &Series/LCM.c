//// Find the LCM of three numbers entered by the user.

#include <stdio.h>
// Function to find GCD
int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, c;
    int lcm_ab, lcm_abc;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    lcm_ab = (a * b) / gcd(a, b);
    lcm_abc = (lcm_ab * c) / gcd(lcm_ab, c);

    printf("LCM of %d, %d and %d = %d\n", a, b, c, lcm_abc);

    return 0;
}
