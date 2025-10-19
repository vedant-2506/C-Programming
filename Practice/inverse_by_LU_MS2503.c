#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to allocate a 2D matrix dynamically
double **allocate_matrix(int n) {
    double **mat = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        mat[i] = (double *)malloc(n * sizeof(double));
    }
    return mat;
}

int main() {
    int n = 0, i, j, k;
    char buffer[1000];
    
    // Read first row (to determine size)
    printf("Enter first row of matrix:\n");
    fgets(buffer, sizeof(buffer), stdin);

    // Count tokens in the first row
    char *token = strtok(buffer, " \t\n");
    double firstRow[100];
    while (token != NULL) {
        firstRow[n] = atof(token); // convert string to double
        n++;
        token = strtok(NULL, " \t\n");
    }

    // Allocate matrices
    double **Arr = allocate_matrix(n);
    double **Low = allocate_matrix(n);
    double **Upp = allocate_matrix(n);
    double **Prod = allocate_matrix(n);

    // Store first row in Arr
    for (j = 0; j < n; j++) {
        Arr[0][j] = firstRow[j];
    }

    // Read remaining rows
    printf("Enter remaining %d rows:\n", n - 1);
    for (i = 1; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &Arr[i][j]);
        }
    }

    // Initialize Low, Upp, Prod
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            Low[i][j] = (i == j) ? 1 : 0;
            Upp[i][j] = 0;
            Prod[i][j] = 0;
        }
    }

    // LU Decomposition
    for (i = 0; i < n; i++) {
        // Upper
        for (k = i; k < n; k++) {
            double sum = 0;
            for (j = 0; j < i; j++) {
                sum += Low[i][j] * Upp[j][k];
            }
            Upp[i][k] = Arr[i][k] - sum;
        }

        // Lower
        for (k = i; k < n; k++) {
            if (i == k) {
                Low[i][i] = 1;
            } else {
                double sum = 0;
                for (j = 0; j < i; j++) {
                    sum += Low[k][j] * Upp[j][i];
                }
                Low[k][i] = (Arr[k][i] - sum) / Upp[i][i];
            }
        }
    }

    // Multiply Low*Upp = Prod
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            Prod[i][j] = 0;
            for (k = 0; k < n; k++) {
                Prod[i][j] += Low[i][k] * Upp[k][j];
            }
        }
    }

    // Print results
    printf("\nInput Matrix Arr:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2lf ", Arr[i][j]);
        }
        printf("\n");
    }

    printf("\nLower Triangular Matrix Low:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2lf ", Low[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix Upp:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2lf ", Upp[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct Matrix (Low*Upp):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2lf ", Prod[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (i = 0; i < n; i++) {
        free(Arr[i]);
        free(Low[i]);
        free(Upp[i]);
        free(Prod[i]);
    }
    free(Arr);
    free(Low);
    free(Upp);
    free(Prod);

    return 0;
}