#include <stdio.h>

int main() 
{
    float cprice, sprice, pl;

    
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cprice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sprice);

   
    if (sprice > cprice) 
    {
        pl = sprice - cprice;
        printf("Profit = ₹%.2f\n", pl);
    } 
    else if (cprice > sprice) {
        pl= cprice - sprice;
        printf("Loss = ₹%.2f\n", pl);
    }
    else 
    {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
