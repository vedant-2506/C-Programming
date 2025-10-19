#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortData(const char *inputFile, const char *sortedFile);
void knapsackProcess(const char *sortedFile, const char *outputFile);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("argument: %s <input_filename>\n", argv[0]);
        return 1;
    }

    const char *inputFile = argv[1];
    const char *sortedFile = "sorted.txt";
    const char *outputFile = "Final_Output.txt";

    
    if (sortData(inputFile, sortedFile) == 0)
    {
        
        knapsackProcess(sortedFile, outputFile);
        printf("\n All tasks completed successfully!\n");
    }

    return 0;
}




 //Sortdata function
int sortData(const char *inputFile, const char *sortedFile)
{
    FILE *InFile = fopen(inputFile, "r");
    if (!InFile)
    {
        printf("Error: Input file '%s' not found!\n", inputFile);
        return 1;
    }

    int n;
    float M, SP;

    
    int readN = fscanf(InFile, "n %d", &n);
    int readM = fscanf(InFile, " M %f", &M);
    int readSP = fscanf(InFile, " SP %f", &SP);

    if (readN != 1 || readM != 1 || readSP != 1)
    {
        printf("Error:  Incomplete data\n");
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
        return 1;
    }

    int count = 0;
    while (count < n && fscanf(InFile, "%f %f %f %f", &weight[count], &CP[count], &profit[count], &PbyW[count]) == 4)
    {
        count++;
    }

    fclose(InFile);

    if (count < n)
    {
        printf("Error: Missing item data. Only %d of %d items found.\n", count, n);
        free(weight); free(CP); free(profit); free(PbyW);
        return 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (PbyW[j] > PbyW[maxIndex])
                maxIndex = j;
        }

        if (maxIndex != i)
        {
            float temp;
            temp = PbyW[i]; PbyW[i] = PbyW[maxIndex]; PbyW[maxIndex] = temp;
            temp = profit[i]; profit[i] = profit[maxIndex]; profit[maxIndex] = temp;
            temp = CP[i]; CP[i] = CP[maxIndex]; CP[maxIndex] = temp;
            temp = weight[i]; weight[i] = weight[maxIndex]; weight[maxIndex] = temp;
        }
    }

    FILE *Sort = fopen(sortedFile, "w");
    if (!Sort)
    {
        printf("Error creating sorted file!\n");
        free(weight); 
        free(CP); 
        free(profit); 
        free(PbyW);
        return 1;
    }

    fprintf(Sort, "n %d\nM %.2f\nSP %.2f\nItems\n", n, M, SP);
    for (int i = 0; i < n; i++)
    {
        fprintf(Sort, "%.2f\t%.2f\t%.2f\t%.2f\n", weight[i], CP[i], profit[i], PbyW[i]);
    }
    fclose(Sort);

    free(weight); free(CP); free(profit); free(PbyW);
    printf(" Sorting complete! Sorted data saved in '%s'.\n", sortedFile);

    return 0;
}



//Knapsack function
void knapsackProcess(const char *sortedFile, const char *outputFile)
{
    FILE *InFile = fopen(sortedFile, "r");
    if (!InFile)
    {
        printf("Error: Sorted file '%s' not found!\n", sortedFile);
        return;
    }

    int n;
    float M, SP;
    fscanf(InFile, " n %d", &n);
    fscanf(InFile, " M %f", &M);
    fscanf(InFile, " SP %f", &SP);
    fscanf(InFile, " Items");

    float *weight = malloc(n * sizeof(float));
    float *CP = malloc(n * sizeof(float));
    float *profit = malloc(n * sizeof(float));
    float *PbyW = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        fscanf(InFile, "%f %f %f %f", &weight[i], &CP[i], &profit[i], &PbyW[i]);
    }
    fclose(InFile);

    FILE *OutFile = fopen(outputFile, "w");
    if (!OutFile)
    {
        printf("Error creating final output file!\n");
        free(weight); free(CP); free(profit); free(PbyW);
        return;
    }

    fprintf(OutFile, "Selected Items (Weight & Profit)\n");

    float currentWeight = 0, totalProfit = 0, remain = 0, fraction = 0;
    int i = 0;

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

    free(weight); free(CP); free(profit); free(PbyW);
    printf(" Knapsack selection complete! Final output saved in '%s'.\n", outputFile);
}
