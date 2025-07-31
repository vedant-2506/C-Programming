#include <stdio.h>
int main() 
{
    char name[10];

    printf("Enter your full name :");
    //scanf("%s",name);

    fgets(name ,sizeof(name),stdin);   //When we reade whole string and print then we use fgets methode 

    printf("Your full name is %s\n",name);

    return 0;
}