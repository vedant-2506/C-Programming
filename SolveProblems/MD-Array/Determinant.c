//Calculate the Determinant of a 3x3 matrix

#include <stdio.h>

int main() {
    int a[3][3];
    int det;

    printf("Enter 3x3 matrix elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    det = a[0][0] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    printf("Determinant = %d\n", det);

    return 0;
}
