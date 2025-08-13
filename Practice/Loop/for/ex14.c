
//Display all uppercase ASCII characters with their integer values


#include<stdio.h>
int main ()
{
    int i=0;


    printf("ASCII characters with their integer values:\n");

for(i='A';i<+'Z';i++)
{
    printf("%c =%d \n",i,i);
}

return 0;
}