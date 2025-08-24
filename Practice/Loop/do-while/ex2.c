//Ask the user repeatedly for a password until correct (demonstrating do-while).

#include <stdio.h>

int main() {
    char Real_pass[] = "abc@123";
    char pass[20];
    int i =0, match =1;

    do {
        printf("Enter password: ");
        scanf("%19s", pass);

       
        for (i = 0; Real_pass[i] != '\0' || pass[i] != '\0'; i++) 
        {


            if (Real_pass[i] != pass[i])
            {
                match = 0; // not matching
                break;
            }


        }

    } while (match == 0);

    printf("Password is correct!\n");
    return 0;
}
