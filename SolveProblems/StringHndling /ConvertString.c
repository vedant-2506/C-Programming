// Implement a function to convert a String to Float (similar to atof)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

float stringToFloat(char str[]) {
    int i = 0;
    int sign = 1;
    float result = 0.0f;
    float decimal = 0.0f;
    float divisor = 1.0f;

    // Skip leading whitespace
    while (str[i] && isspace((unsigned char)str[i])) i++;

    // Handle sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Integer part
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0f + (str[i] - '0');
        i++;
    }

    // Fractional part
    if (str[i] == '.') {
        i++;
        while (str[i] >= '0' && str[i] <= '9') {
            decimal = decimal * 10.0f + (str[i] - '0');
            divisor *= 10.0f;
            i++;
        }
        result = result + (decimal / divisor);
    }

    return result * sign;
}

int main(void) {
    char str[100];
    float value;

    printf("Enter a floating number as string: ");
    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }
    /* Remove trailing newline if present */
    str[strcspn(str, "\n")] = '\0';

    value = stringToFloat(str);

    printf("Converted float value = %f\n", value);

    return 0;
}
