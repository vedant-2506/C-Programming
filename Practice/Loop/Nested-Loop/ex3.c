//Check and print all Armstrong numbers in a range using nested loops.

#include <stdio.h>
#include <math.h>

int main() 
{
    int start, end, num, sum, temp, digits;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (num = start; num <= end; num++) 
    {
        sum = 0;
        temp = num;
        digits = 0;

        int t = num;
        while (t > 0) 
        {
            digits++;
            t /= 10;
        }

        
        t = num;
        while (t > 0) 
        {
            int r = t % 10;
            sum += pow(r, digits);
            t /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
