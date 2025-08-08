//Input month number and display the number of days in the month (consider leap years for February).
#include <stdio.h>

int main()
 {
   int month;

    
    printf("Enter mount number and check number of days in mount  ");
    scanf("%d", &month);
  
    if (month ==2)
    {
        printf("number day is 29 \n");
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
    {
        printf("Number of days = 31\n");
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Number of days = 30\n");

    }
        


    return 0;
}

