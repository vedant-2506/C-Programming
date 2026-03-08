//Print all permutations of a given string (Backtracking).

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int l, int r) {
    if (l == r) {
        printf("%s\n", str);
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(&str[l], &str[i]);       // Choose
        permute(str, l + 1, r);       // Explore
        swap(&str[l], &str[i]);       // Backtrack
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("Permutations are:\n");
    permute(str, 0, n - 1);

    return 0;
}