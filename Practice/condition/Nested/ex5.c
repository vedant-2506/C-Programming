//​Input week number (1–7) and print corresponding weekday name

#include <stdio.h>

int main()
 {
   int no;

    
    printf("Enter week number and check which day on number ");
    scanf("%d", &no);
  
        printf("Week is \n");
        if (no == 1) 
        {
            printf("%d - Sunday \n ",no);
        } 
        else if (no == 2) 
        {
            printf("%d - Monday \n",no);
        } 
          if (no == 3) 
        {
            printf("%d - Tuesday \n ",no);
        } 
        else if (no == 4) 
        {
            printf("%d - Wensday \n",no);
        } 
          if (no == 5) 
        {
            printf("%d - Thrsday \n ",no);
        } 
        else if (no == 6) 
        {
            printf("%d - Friday \n",no);
        } 
        else if (no==7) 
        {
            printf("%d - Saturday \n",no);
        } 


    else
    {
       printf("Enter valid number \n");
    }

    return 0;
}

