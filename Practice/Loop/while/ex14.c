
//Display all uppercase ASCII characters with their integer values


#include<stdio.h>
int main ()
{
    int i='A';
    
    printf("ASCII characters with their integer values:\n");

while(i<='Z')
{
    printf("%c =%d \n",i,i);
    i++;
}

return 0;
}