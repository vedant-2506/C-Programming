//Allow the user to enter a password up to 3 times. If the correct password is entered, print
//Access granted and break. Otherwise, after 3 attempts, print Account locked.


#include<stdio.h>
int main()
{
    int i=0;
    int pass =0;
    int password =1234;

    for(i=1;i<=3;i++)
    {
        printf("Enter password :");
        scanf("%d",&pass);

        if(password==pass)
        printf("Access granted \n");

        else
        continue;
    }

    printf("Account locked. \n");

    return 0;
}