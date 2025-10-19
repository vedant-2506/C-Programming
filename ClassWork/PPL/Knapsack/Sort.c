#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // argument to input file 
    if (argc != 2)
    {
        printf("Usage: %s <input_filename>\n", argv[0]);
        return 1;
    }

    const char *inputFile = argv[1];            //input file 
    const char *sortedFile = "sorted.txt";      //output file

    //init no. of items capacity and SP
    int n;
    float M, SP;

    //check file is found or not 
    FILE *InFile = fopen(inputFile, "r");
    if (!InFile)
    {
        printf("Error: Input file '%s' not found!\n", inputFile);
        return 1;
    }

    FILE *Sort = fopen(sortedFile, "w");
    if (!Sort)
    {
        printf("Error: Unable to create '%s'\n", sortedFile);
        fclose(InFile);
        return 1;
    }

    // read no. of items capacity and SP
    int readN = fscanf(InFile, "n %d", &n);
    int readM = fscanf(InFile, " M %f", &M);
    int readSP = fscanf(InFile, " SP %f", &SP);

    //check is data is incomplete data
    if (readN != 1 || readM != 1 || readSP != 1)
    {
        printf("Error:  Incomplete data\n");
        fclose(InFile);
        fclose(Sort);
        return 1;
    }

    // Dynamic memory allocation
    float *weight = malloc(n * sizeof(float));
    float *CP = malloc(n * sizeof(float));
    float *profit = malloc(n * sizeof(float));
    float *PbyW = malloc(n * sizeof(float));

    if (!weight || !CP || !profit || !PbyW)
    {
        printf("Memory allocation failed!\n");
        fclose(InFile);
        fclose(Sort);
        free(weight); free(CP); free(profit); free(PbyW);
        return 1;
    }

    // check data .4 column is full
    int count = 0;
    while (count < n && fscanf(InFile, "%f %f %f %f", &weight[count], &CP[count], &profit[count], &PbyW[count]) == 4)
    {
        count++;
    }
    fclose(InFile);

    if (count < n)
    {
        printf("Error: Missing item . Only Found %d of %d items.\n", count, n);
        free(weight); 
        free(CP); 
        free(profit); 
        free(PbyW);
        fclose(Sort);
        return 1;
    }

    // Selection Sort in descending order of PbyW
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

    // Write sorted data to file
    fprintf(Sort, "n %d\nM %.2f\nSP %.2f\n", n, M, SP);
    for (int i = 0; i < n; i++)
    {
        fprintf(Sort, "%.2f\t%.2f\t%.2f\t%.2f\n", weight[i], CP[i], profit[i], PbyW[i]);
    }
    fclose(Sort);

    // Free allocated memory
    free(weight);
    free(CP);
    free(profit);
    free(PbyW);

    printf("Sorting complete \nSorted data saved in '%s'.\n", sortedFile);
    return 0;
}