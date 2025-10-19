#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("plese enter correct file name: %s\n", argv[0]);
        return 1;
    }
    
    const char *sortedFile = argv[1];
    const char *outputFile = "Final_Output.txt";

    FILE *InFile = fopen(sortedFile, "r");
    if (!InFile)
    {
        printf("error: Sorted file '%s' not found!\n", sortedFile);
        return 1;
    }

    int n;
    float M, SP;
    if (fscanf(InFile, " n %d", &n) != 1 ||
        fscanf(InFile, " M %f", &M) != 1 ||
        fscanf(InFile, " SP %f", &SP) != 1)
    {
        printf("data missing in sorted file.\n");
        fclose(InFile);
        return 1;
    }


    float *weight = malloc(n * sizeof(float));
    float *CP = malloc(n * sizeof(float));
    float *profit = malloc(n * sizeof(float));
    float *PbyW = malloc(n * sizeof(float));

    if (!weight || !CP || !profit || !PbyW)
    {
        printf("Memory allocation failed!\n");
        fclose(InFile);
        free(weight); free(CP); free(profit); free(PbyW);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(InFile, "%f %f %f %f", &weight[i], &CP[i], &profit[i], &PbyW[i]);
    }
    fclose(InFile);

    FILE *OutFile = fopen(outputFile, "w");
    if (!OutFile)
    {
        printf("Error creating '%s'!\n", outputFile);
        free(weight); free(CP); free(profit); free(PbyW);
        return 1;
    }

    fprintf(OutFile, "Selected Items with Weight & Profit\n");

    float currentWeight = 0, totalProfit = 0, remain = 0, fraction = 0;
    int i = 0;

    // Fractional Knapsack
    while (i < n && currentWeight < M)
    {
        if (currentWeight + weight[i] <= M)
        {
            currentWeight += weight[i];
            totalProfit += profit[i];
            fprintf(OutFile, "%.2f\t%.2f\n", weight[i], profit[i]);
        }
        else
        {
            remain = M - currentWeight;
            fraction = remain / weight[i];
            totalProfit += profit[i] * fraction;
            fprintf(OutFile, "%.2f\t%.2f (Fraction %.2f)\n", remain, profit[i] * fraction, fraction);
            currentWeight = M;
        }
        i++;
    }

    fprintf(OutFile, "\nTotal Profit: %.2f\n", totalProfit);
    fclose(OutFile);

    free(weight);
    free(CP);
    free(profit);
    free(PbyW);

    printf("Knapsack selection complete!\nOutput saved in '%s'.\n", outputFile);
    return 0;
}
